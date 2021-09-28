
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __APP_AI_H
#define __APP_AI_H
#ifdef __cplusplus
extern "C" {
#endif
/**
******************************************************************************
* @file           : app_x-cube-ai.h
* @brief          : AI entry function definitions
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
/* Includes ------------------------------------------------------------------*/
#include "ai_platform.h"
#include "network.h"
#include "network_data.h"

void MX_X_CUBE_AI_Init(void);
void MX_X_CUBE_AI_Process(void);
/* USER CODE BEGIN includes */
#define _MIN(x_, y_) \
  ( ((x_)<(y_)) ? (x_) : (y_) )

#define _MAX(x_, y_) \
    ( ((x_)>(y_)) ? (x_) : (y_) )

#define _CLAMP(x_, min_, max_, type_) \
      (type_) (_MIN(_MAX(x_, min_), max_))

#define _ROUND(v_, type_) \
        (type_) ( ((v_)<0) ? ((v_)-0.5f) : ((v_)+0.5f) )
#define AI_FP_GLOBAL_BUFFER_SIZE  (MAX(AI_ACTIVATION_BUFFER_SIZE, CAM_FRAME_BUFFER_SIZE)) 
#include "dcmi.h"
#include "imageproc.h"
ai_u16 ai_get_input_height(void);
ai_u16 ai_get_input_width(void);
ai_u16 ai_get_input_channels(void);
ai_u16 ai_get_output_height(void);
ai_u16 ai_get_output_width(void);
ai_u16 ai_get_output_channels(void);
ai_size ai_get_input_quantized_format(void);
ai_float ai_get_output_fxp_scale(void);
ai_float ai_get_input_scale(void);
ai_i32  ai_get_input_zero_point(void);
ai_float ai_get_output_scale(void);
ai_i32 ai_get_output_zero_point(void);
uint32_t ai_get_input_quantization_scheme(void);
uint32_t ai_get_output_quantization_scheme(void);
ai_size ai_get_output_format(void);
ai_size ai_get_input_format(void);
void AI_PixelValueConversion_QuantizedNN(uint8_t *pSrc,uint8_t *pDrc);
extern uint8_t preprocess_Image[150528];
//void AI_PixelValueConversion(AiContext_TypeDef* Ai_Context_Ptr, void *pSrc)£»
//void AI_PixelValueConversion_QuantizedNN(AiContext_TypeDef* Ai_Context_Ptr, uint8_t *pSrc)£»
//void APP_Postprocess(void);
//void AI_Output_Dequantize(AiContext_TypeDef* Ai_Context_Ptr);
//void UTILS_Bubblesort(float *prob, int *classes, int size);
//char const* nn_top1_output_class_name;
//float nn_top1_output_class_proba;

#define AI_FXP_Q          (0x0) /*Fixed Point Qm,n*/
#define AI_UINT_Q         (0x1) /*Unsigned Integer Arithmetic*/
#define AI_SINT_Q         (0x2) /*Signed Integer Arithmetic*/



/* USER CODE END includes */
#ifdef __cplusplus
}
#endif
#endif /*__STMicroelectronics_X-CUBE-AI_7_0_0_H */
