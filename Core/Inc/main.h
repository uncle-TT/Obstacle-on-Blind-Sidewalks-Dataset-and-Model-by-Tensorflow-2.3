/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "stdio.h"
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define OSC32_IN_Pin GPIO_PIN_14
#define OSC32_IN_GPIO_Port GPIOC
#define OSC32_OUT_Pin GPIO_PIN_15
#define OSC32_OUT_GPIO_Port GPIOC
#define USB_FS_PWR_EN_Pin GPIO_PIN_10
#define USB_FS_PWR_EN_GPIO_Port GPIOF
#define PH0_MCU_Pin GPIO_PIN_0
#define PH0_MCU_GPIO_Port GPIOH
#define PH1_MCU_Pin GPIO_PIN_1
#define PH1_MCU_GPIO_Port GPIOH
#define BC20_TX_Pin GPIO_PIN_2
#define BC20_TX_GPIO_Port GPIOA
#define BC20_RX_Pin GPIO_PIN_3
#define BC20_RX_GPIO_Port GPIOA
#define LD1_Pin GPIO_PIN_0
#define LD1_GPIO_Port GPIOB
#define wave_PWM_TIM1_CH1_Pin GPIO_PIN_9
#define wave_PWM_TIM1_CH1_GPIO_Port GPIOE
#define ECHO_Pin GPIO_PIN_10
#define ECHO_GPIO_Port GPIOE
#define TRIG_Pin GPIO_PIN_12
#define TRIG_GPIO_Port GPIOE
#define voice_SCL_Pin GPIO_PIN_10
#define voice_SCL_GPIO_Port GPIOB
#define voice_SDA_Pin GPIO_PIN_11
#define voice_SDA_GPIO_Port GPIOB
#define LD3_Pin GPIO_PIN_14
#define LD3_GPIO_Port GPIOB
#define DCMI_DEBUG_RX_Pin GPIO_PIN_15
#define DCMI_DEBUG_RX_GPIO_Port GPIOB
#define STLINK_RX_Pin GPIO_PIN_8
#define STLINK_RX_GPIO_Port GPIOD
#define STLINK_TX_Pin GPIO_PIN_9
#define STLINK_TX_GPIO_Port GPIOD
#define Light_Pin GPIO_PIN_11
#define Light_GPIO_Port GPIOD
#define USB_FS_OVCR_Pin GPIO_PIN_7
#define USB_FS_OVCR_GPIO_Port GPIOG
#define USB_FS_VBUS_Pin GPIO_PIN_9
#define USB_FS_VBUS_GPIO_Port GPIOA
#define USB_FS_ID_Pin GPIO_PIN_10
#define USB_FS_ID_GPIO_Port GPIOA
#define USB_FS_N_Pin GPIO_PIN_11
#define USB_FS_N_GPIO_Port GPIOA
#define USB_FS_P_Pin GPIO_PIN_12
#define USB_FS_P_GPIO_Port GPIOA
#define DCMI_DEBUG_TX_Pin GPIO_PIN_6
#define DCMI_DEBUG_TX_GPIO_Port GPIOB
#define BH1750_SCL_Pin GPIO_PIN_8
#define BH1750_SCL_GPIO_Port GPIOB
#define BH1750_SDA_Pin GPIO_PIN_9
#define BH1750_SDA_GPIO_Port GPIOB
#define LD2_Pin GPIO_PIN_1
#define LD2_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */
#define RGB_WIDTH 224
#define RGB_HEIGHT 224
#define BUFF_SIZE RGB_WIDTH*RGB_HEIGHT
#define USER_MAIN_DEBUG
#ifdef USER_MAIN_DEBUG
#define user_main_printf(format, ...) printf( format "\r\n", ##__VA_ARGS__)
#define user_main_info(format, ...) printf("[\tmain]info:" format "\r\n", ##__VA_ARGS__)
#define user_main_debug(format, ...) printf("[\tmain]debug:" format "\r\n", ##__VA_ARGS__)
#define user_main_error(format, ...) printf("[\tmain]error:" format "\r\n",##__VA_ARGS__)
#else
#define user_main_printf(format, ...)
#define user_main_info(format, ...)
#define user_main_debug(format, ...)
#define user_main_error(format, ...)
#endif
extern uint32_t dcmi_buffer[BUFF_SIZE];
extern uint8_t dcmi_flag;
extern uint8_t hc_sr04_flag;
extern void DCMI_ov5640_process(void);
extern void HC_SR04_process(void);
//typedef struct
//{
//  uint8_t* camera_capture_buffer;
//  uint8_t* camera_frame_buffer;
//  volatile uint8_t new_frame_ready;
//} CameraContext_TypeDef;

//typedef struct
//{

// uint32_t red_blue_swap;
// Roi_TypeDef   Roi;
// Image_TypeDef Pfc_Src_Img;
// Image_TypeDef Pfc_Dst_Img;
// Image_TypeDef Resize_Src_Img;
// Image_TypeDef Resize_Dst_Img;
// void*    AppCtxPtr;
//}PreprocContext_TypeDef;

//typedef struct
//{
//  void* nn_output_buffer;
//  void* nn_input_buffer;
//  void* activation_buffer;
//  uint8_t* lut;
//  uint32_t nn_width;
//  uint32_t nn_height;
//  uint32_t nn_channels;
//  float    nn_input_norm_scale;
//  int32_t  nn_input_norm_zp;
//  void*    AppCtxPtr;
//} AiContext_TypeDef;
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
