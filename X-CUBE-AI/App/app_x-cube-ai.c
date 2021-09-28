
#ifdef __cplusplus
extern "C" {
#endif
/**
  ******************************************************************************
  * @file           : app_x-cube-ai.c
  * @brief          : AI program body
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2018 STMicroelectronics International N.V.
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice,
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other
  *    contributors to this software may be used to endorse or promote products
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under
  *    this license is void and will automatically terminate your rights under
  *    this license.
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/*
 * Description
 *   v1.0 - Minimum template to show how to use the Embedded Client API
 *          model. Only one input and one output is supported. All
 *          memory resources are allocated statically (AI_NETWORK_XX, defines
 *          are used).
 *          Re-target of the printf function is out-of-scope.
 *
 *   For more information, see the embeded documentation:
 *
 *       [1] %X_CUBE_AI_DIR%/Documentation/index.html
 *
 *   X_CUBE_AI_DIR indicates the location where the X-CUBE-AI pack is installed
 *   typical : C:\Users\<user_name>\STM32Cube\Repository\STMicroelectronics\X-CUBE-AI\6.0.0
 */
/* Includes ------------------------------------------------------------------*/
/* System headers */
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>
#include <string.h>

#include "app_x-cube-ai.h"
#include "main.h"
#include "ai_datatypes_defines.h"

/* USER CODE BEGIN includes */


static ai_buffer ai_inputs[1];/*= AI_NETWORK_IN;*/
static ai_buffer ai_outputs[1];/*= AI_NETWORK_OUT;*/
//static void Precompute_8IntS(uint8_t *lut, float scale, int32_t zp, float scale_prepro, int32_t zp_prepro)
//{
//  for (int32_t i = 0 ; i < 256 ; i++)
//  {
//    float tmp = (i - zp_prepro) * scale_prepro;
//    *(lut + i) = _CLAMP(zp + _ROUND(tmp * scale, int32_t),  -128, 127, int8_t);
//  }
//}
//uint8_t *in_data;
float ai_out[13];
float out_data[13];
uint8_t preprocess_Image[150528];
char const* nn_top1_output_class_name;
float nn_top1_output_class_proba;
int ranking[13];
#include "ai_utilities.h"
#define NN_OUTPUT_CLASS_LIST output_labels
const char* output_labels[13] = {"ashcan", "bicycle", "bus", "car", "dog", "motorbike", "person", "pole", "reflective_cone", "spherical_roadblock", "stop_sign", "truck", "warning_column"};
/* USER CODE END includes */
/* Global AI objects */
static ai_handle network = AI_HANDLE_NULL;
static ai_network_report network_info;

/* Global c-array to handle the activations buffer */
AI_ALIGNED(4)
static ai_u8 activations[AI_NETWORK_DATA_ACTIVATIONS_SIZE];

///*  In the case where "--allocate-inputs" option is used, memory buffer can be
// *  used from the activations buffer. This is not mandatory.
// */
//#if !defined(AI_NETWORK_INPUTS_IN_ACTIVATIONS)
///* Allocate data payload for input tensor */
//AI_ALIGNED(4)
//static ai_u8 in_data_s[AI_NETWORK_IN_1_SIZE_BYTES];
//#endif

///*  In the case where "--allocate-outputs" option is used, memory buffer can be
// *  used from the activations buffer. This is no mandatory.
// */
#if !defined(AI_NETWORK_OUTPUTS_IN_ACTIVATIONS)
/* Allocate data payload for the output tensor */
AI_ALIGNED(4)
static ai_u8 out_data_s[AI_NETWORK_OUT_1_SIZE_BYTES];
#endif

static void ai_log_err(const ai_error err, const char *fct)
{
    /* USER CODE BEGIN log */
    if (fct)
        user_main_printf("OBSC - Error (%s) - type=0x%02x code=0x%02x\r\n", fct,
                         err.type, err.code);
    else
        user_main_printf("OBSC - Error - type=0x%02x code=0x%02x\r\n", err.type, err.code);

    do {} while (1);
    /* USER CODE END log */
}

static int ai_boostrap(ai_handle w_addr, ai_handle act_addr)
{
    ai_error err;

    /* 1 - Create an instance of the model */
    err = ai_network_create(&network, AI_NETWORK_DATA_CONFIG);
    if (err.type != AI_ERROR_NONE) {
        ai_log_err(err, "ai_network_create");
        return -1;
    }

    /* 2 - Initialize the instance */
    const ai_network_params params = AI_NETWORK_PARAMS_INIT(
                                         AI_NETWORK_DATA_WEIGHTS(w_addr),
                                         AI_NETWORK_DATA_ACTIVATIONS(act_addr) );

    if (!ai_network_init(network, &params)) {
        err = ai_network_get_error(network);
        ai_log_err(err, "ai_network_init");
        return -1;
    }

    /* 3 - Retrieve the network info of the created instance */
    if (!ai_network_get_info(network, &network_info)) {
        err = ai_network_get_error(network);
        ai_log_err(err, "ai_network_get_error");
        ai_network_destroy(network);
        network = AI_HANDLE_NULL;
        return -3;
    }

    return 0;
}

static int ai_run(void *data_in, void *data_out)
{
    ai_i32 batch;

    ai_buffer *ai_input = network_info.inputs;
    ai_buffer *ai_output = network_info.outputs;

    ai_input[0].data = AI_HANDLE_PTR(data_in);
    ai_output[0].data = AI_HANDLE_PTR(data_out);

    batch = ai_network_run(network, ai_input, ai_output);
    if (batch != 1) {
        ai_log_err(ai_network_get_error(network),
                   "ai_network_run");
        return -1;
    }
		HAL_GPIO_TogglePin(LD2_GPIO_Port,LD2_Pin);
    return 0;
}

/* USER CODE BEGIN 2 */
/**
 * @brief Returns value of the height for the first input tensor
 * @retval ai_u16 Height for the first input tensor
 */
ai_u16 ai_get_input_height(void) {
    return (AI_BUFFER_HEIGHT(&ai_inputs[0]));
}

/**
 * @brief Returns value of the width for the first input tensor
 * @retval ai_u16 Width for the first input tensor
 */
ai_u16 ai_get_input_width(void) {
    return (AI_BUFFER_WIDTH(&ai_inputs[0]));
}

/**
 * @brief Returns value of the channels for the first input tensor
 * @retval ai_u16 Channels for the first input tensor
 */
ai_u16 ai_get_input_channels(void) {
    return (AI_BUFFER_CHANNELS(&ai_inputs[0]));
}

/**
 * @brief Returns value of the height for the first output tensor
 * @retval ai_u16 Height for the first output tensor
 */
ai_u16 ai_get_output_height(void) {
    return (AI_BUFFER_HEIGHT(&ai_outputs[0]));
}

/**
 * @brief Returns value of the width for the first output tensor
 * @retval ai_u16 Width for the first output tensor
 */
ai_u16 ai_get_output_width(void) {
    return (AI_BUFFER_WIDTH(&ai_outputs[0]));
}

/**
 * @brief Returns value of the channels for the first output tensor
 * @retval ai_u16 Channels for the first output tensor
 */
ai_u16 ai_get_output_channels(void) {
    return (AI_BUFFER_CHANNELS(&ai_outputs[0]));
}

/**
 * @brief Returns the input format type
 * @retval ai_size Input format type: quantized (AI_BUFFER_FMT_TYPE_Q) or float (AI_BUFFER_FMT_TYPE_FLOAT)
 */
ai_size ai_get_input_format(void)
{
    ai_buffer_format fmt = AI_BUFFER_FORMAT(&ai_inputs[0]);
    return AI_BUFFER_FMT_GET_TYPE(fmt);
}

/**
 * @brief Returns the output format type
 * @retval ai_size Output format type: quantized (AI_BUFFER_FMT_TYPE_Q) or float (AI_BUFFER_FMT_TYPE_FLOAT)
 */
ai_size ai_get_output_format(void)
{
    ai_buffer_format fmt = AI_BUFFER_FORMAT(&ai_outputs[0]);
    return AI_BUFFER_FMT_GET_TYPE(fmt);
}

/**
 * @brief Returns value of the input quantized format
 * @retval ai_size Input quantized format
 */
ai_size ai_get_input_quantized_format(void)
{
    ai_buffer_format fmt = AI_BUFFER_FORMAT(&ai_inputs[0]);
    return (AI_BUFFER_FMT_GET_BITS(fmt) - AI_BUFFER_FMT_GET_SIGN(fmt) - AI_BUFFER_FMT_GET_FBITS(fmt));
}

/**
 * @brief Returns the quantization scheme used to quantize the input layer of the neural network
 * @retval ai_size Quantization scheme: AI_FXP_Q, AI_UINT_Q, AI_SINT_Q
 */
uint32_t ai_get_input_quantization_scheme(void)
{
    ai_float scale=ai_get_input_scale();

    ai_buffer_format fmt=AI_BUFFER_FORMAT(&ai_inputs[0]);
    ai_size sign = AI_BUFFER_FMT_GET_SIGN(fmt);

    if(scale==0)
    {
        return AI_FXP_Q;
    }
    else
    {
        if(sign==0)
        {
            return AI_UINT_Q;
        }
        else
        {
            return AI_SINT_Q;
        }
    }
}

/**
 * @brief Returns the quantization scheme used to quantize the output layer of the neural network
 * @retval ai_size Quantization scheme: AI_FXP_Q, AI_UINT_Q, AI_SINT_Q
 */
uint32_t ai_get_output_quantization_scheme(void)
{
    ai_float scale=ai_get_output_scale();

    ai_buffer_format fmt=AI_BUFFER_FORMAT(&ai_outputs[0]);
    ai_size sign = AI_BUFFER_FMT_GET_SIGN(fmt);

    if(scale==0)
    {
        return AI_FXP_Q;
    }
    else
    {
        if(sign==0)
        {
            return AI_UINT_Q;
        }
        else
        {
            return AI_SINT_Q;
        }
    }
}

/**
 * @brief Returns value of the scale for the output quantized format
 * @retval ai_size Scale for output quantized format
 */
ai_float ai_get_output_fxp_scale(void)
{
    float scale;
    ai_buffer_format fmt_1;

    /* Retrieve format of the output tensor - index 0 */
    fmt_1 = AI_BUFFER_FORMAT(&ai_outputs[0]);

    /* Build the scale factor for conversion */
    scale = 1.0f / (0x1U << AI_BUFFER_FMT_GET_FBITS(fmt_1));

    return scale;
}

/**
 * @brief Returns value of the scale for the input quantized format
 * @retval ai_size Scale for input quantized format
 */
ai_float ai_get_input_scale(void)
{
    return AI_BUFFER_META_INFO_INTQ_GET_SCALE(ai_inputs[0].meta_info, 0);
}

/**
 * @brief Returns value of the zero point for the input quantized format
 * @retval ai_size Zero point for input quantized format
 */
ai_i32 ai_get_input_zero_point(void)
{
    return AI_BUFFER_META_INFO_INTQ_GET_ZEROPOINT(ai_inputs[0].meta_info, 0);
}

/**
 * @brief Returns value of the scale for the output quantized format
 * @retval ai_size Scale for output quantized format
 */
ai_float ai_get_output_scale(void)
{
    return AI_BUFFER_META_INFO_INTQ_GET_SCALE(ai_outputs[0].meta_info, 0);
}

/**
 * @brief Returns value of the zero point for the output quantized format
 * @retval ai_size Zero point for output quantized format
 */
ai_i32 ai_get_output_zero_point(void)
{
    return AI_BUFFER_META_INFO_INTQ_GET_ZEROPOINT(ai_outputs[0].meta_info, 0);
}
int acquire_and_process_data(void)
{
    DCMI_ov5640_process();
	HAL_GPIO_TogglePin(LD1_GPIO_Port,LD1_Pin);
    return 0;
}

int post_process(void * data)
{

    float scale;
    int32_t zero_point;
    ai_i8 *nn_output_i8;

    float *nn_output_f32;
    scale = 0.00390625;
    zero_point = -128;
    /* Dequantize NN output - in-place 8-bit to float conversion */
    nn_output_i8 = (ai_i8 *) data;
    nn_output_f32 = (float *) data;
    for(int32_t i = 13 - 1; i >= 0; i--)
    {
        int32_t q_value = (int32_t) *(nn_output_i8 + i);
        *(nn_output_f32 + i) = scale * (q_value - zero_point);
    }
		
		for(int i=0;i < 13;i++)
		{
			ai_out[i] = ((float *)nn_output_f32)[i];
			nn_top1_output_class_name=NN_OUTPUT_CLASS_LIST[i];
			user_main_printf("there is obstacles %s proba %.2f%%",nn_top1_output_class_name,ai_out[i]);
		}

//    for (int i = 0; i < 13; i++)
//    {
//        ranking[i] = i;
//    }
//    HAL_GPIO_TogglePin(LD3_GPIO_Port,LD3_Pin);
//    UTILS_Bubblesort((float*)(data), ranking, 13);

//    nn_top1_output_class_name=NN_OUTPUT_CLASS_LIST[ranking[0]];
//    nn_top1_output_class_proba=*((float*)(data)+0);
////    HC_SR04_process();
//    user_main_printf("there is obstacles %s proba %.2f%%",nn_top1_output_class_name,nn_top1_output_class_proba);
		
    return 0;
}
/* USER CODE END 2 */

/*************************************************************************
  *
  */

void MX_X_CUBE_AI_Init(void)
{
    /* USER CODE BEGIN 5 */
    user_main_printf("\r\nOBSC - initialization\r\n");

    ai_boostrap(ai_network_data_weights_get(), activations);

    /* USER CODE END 5 */
}

void MX_X_CUBE_AI_Process(void)
{
    /* USER CODE BEGIN 6 */
    int res = -1;
    dcmi_flag =1;
    hc_sr04_flag =1;
    user_main_printf("OBSC - run - main loop\r\n");

    if (network) {

        if ((network_info.n_inputs != 1) || (network_info.n_outputs != 1)) {
            ai_error err = {AI_ERROR_INVALID_PARAM, AI_ERROR_CODE_OUT_OF_RANGE};
            ai_log_err(err, "template code should be updated\r\n to support a model with multiple IO");
            return;
        }
        /*  main loop */
        do {

            /* 1 - acquire and pre-process input data */
            res = acquire_and_process_data();
            /* 2 - process the data - call inference engine */
            if (res == 0)
                res = ai_run(preprocess_Image, out_data_s);
            /* 3- post-process the predictions */
            if (res == 0)
                res = post_process(out_data_s);
        } while (res==0);
    }

    if (res) {
        ai_error err = {AI_ERROR_INVALID_STATE, AI_ERROR_CODE_NETWORK};
        ai_log_err(err, "Process has FAILED");
    }
    /* USER CODE END 6 */
}
void AI_PixelValueConversion_QuantizedNN(uint8_t *pSrc,uint8_t *pDrc)
{
    const uint32_t nb_pixels = 224*224*3;
    const uint8_t *lut = lut;
    uint8_t *pDst = (uint8_t *)pDrc;

    if (pDst > pSrc)
    {
        for (int32_t i = nb_pixels - 1; i >= 0; i--)
        {
            pDst[i] = lut[pSrc[i]];
        }
    }
    else
    {
        for (int32_t i = 0; i < nb_pixels; i++)
        {
            pDst[i] = lut[pSrc[i]];
        }
    }

}
#ifdef __cplusplus
}
#endif
