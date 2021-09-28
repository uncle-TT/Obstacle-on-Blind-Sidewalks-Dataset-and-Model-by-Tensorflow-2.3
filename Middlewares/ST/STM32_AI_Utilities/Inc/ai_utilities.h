/**
 ******************************************************************************
 * @file    ai_utilities.h
 * @author  MCD Application Team
 * @brief   Header for ai_utilities.c module
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under Ultimate Liberty license
 * SLA0044, the "License"; You may not use this file except in compliance with
 * the License. You may obtain a copy of the License at:
 *                             www.st.com/SLA0044
 *
 ******************************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __AI_UTILITIES_H
#define __AI_UTILITIES_H

#ifdef __cplusplus
extern "C"
{
#endif
  
/* Includes ------------------------------------------------------------------*/
//#include "fp_vision_app.h"
#include "img_preprocess.h"
#include "app_x-cube-ai.h"
typedef enum
{
  GRAY8               = 0x00,
  BMP565              = 0x01,
  BMP888              = 0x02,
  RAW                 = 0x03,
  BMP                 = 0x04,
  TXT                 = 0x05 /*should be used only for the NN outputs*/
}DataFormat_TypeDef;
typedef enum
{
  INVALIDATE           = 0x01,   
  CLEAN                = 0x02  
}DCache_Coherency_TypeDef;

//void Run_Preprocessing(AppContext_TypeDef *);
//void Init_DataMemoryLayout(AppContext_TypeDef *);
void Resize_Frame(Image_TypeDef *, Image_TypeDef *, Roi_TypeDef *);
void UTILS_DCache_Coherency_Maintenance(uint32_t *mem_addr, int32_t mem_size, DCache_Coherency_TypeDef Maintenance_operation);
void UTILS_Bubblesort(float *prob, int *classes, int size);
//void ImagePfc_Rgb565ToRgb888(Image_TypeDef *srcImage, Image_TypeDef *dstImage, uint32_t rb_swap);
//uint32_t Image_CheckPfcMemoryLayout(Image_TypeDef *srcImage, Image_TypeDef *dstImage);
#ifdef __cplusplus
}
#endif

#endif /*__AI_UTILITIES_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
