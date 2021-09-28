/**
  ******************************************************************************
  * @file    img_preprocess.h
  * @author  MCD Application Team
  * @brief   Header for img_preprocess.c module
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
#ifndef IMG_PREPROC_H
#define IMG_PREPROC_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
#include "stm32h7xx.h"

/* Exported types ------------------------------------------------------------*/

/*Image Pixel Formats*/
typedef enum
{
  PXFMT_GRAY8,     /*!< 8-bit Grayscale     */
  PXFMT_RGB565,    /*!< RGB565 color mode   */
  PXFMT_RGB888,    /*!< RGB888 color mode   */
  PXFMT_ARGB8888   /*!< ARGB8888 color mode */
} Pixel_Fmt_TypeDef;

#define IMG_BYTES_PER_PX(pxfmt)  (    \
((pxfmt) == PXFMT_GRAY8) ? 1 :        \
((pxfmt) == PXFMT_RGB565) ? 2 :       \
((pxfmt) == PXFMT_RGB888) ? 3 :       \
((pxfmt) == PXFMT_ARGB8888) ? 4 : 0)

typedef struct
{
  uint32_t x0;    /*!< Left     */
  uint32_t y0;    /*!< Top      */
  uint32_t width;  /*!< Width   */
  uint32_t height; /*!< Height  */
} Roi_TypeDef;

typedef struct
{
  uint32_t width;  /*!< Image width         */
  uint32_t height; /*!< Image height        */
  void *pData;     /*!< Image data buffer   */
  Pixel_Fmt_TypeDef format;  /*!< Image pixel format  */
} Image_TypeDef;

/* Exported constants --------------------------------------------------------*/
/* External variables --------------------------------------------------------*/
/* Exported macros -----------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void ImageResize_NearestNeighbor(Image_TypeDef *, Image_TypeDef *, Roi_TypeDef * );
void ImagePfc_Rgb565ToGrayscale(Image_TypeDef *, Image_TypeDef * );
int ImagePfc_Rgb565ToRgb888(void *, void *, uint32_t );
uint32_t Image_CheckResizeMemoryLayout(Image_TypeDef *, Image_TypeDef *);
uint32_t Image_CheckPfcMemoryLayout(void *, void *);

#ifdef __cplusplus
}
#endif

#endif /*IMG_PREPROC_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
