///**
//  ******************************************************************************
//  * @file    img_preprocess.h
//  * @author  MCD Application Team
//  * @brief   Header for img_preprocess.c module
//  ******************************************************************************
//  * @attention
//  *
//  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
//  * All rights reserved.</center></h2>
//  *
//  * This software component is licensed by ST under Ultimate Liberty license
//  * SLA0044, the "License"; You may not use this file except in compliance with
//  * the License. You may obtain a copy of the License at:
//  *                             www.st.com/SLA0044
//  *
//  ******************************************************************************
//  */

///* Define to prevent recursive inclusion -------------------------------------*/
//#ifndef IMG_PREPROC_H
//#define IMG_PREPROC_H

//#ifdef __cplusplus
// extern "C" {
//#endif

///* Includes ------------------------------------------------------------------*/
//#include <stdint.h>
//#include "stm32h7xx.h"
//#include "app_x-cube-ai.h"
///* Exported types ------------------------------------------------------------*/

///*Image Pixel Formats*/

//int ranking[13];
//typedef enum
//{
//  PXFMT_GRAY8,     /*!< 8-bit Grayscale     */
//  PXFMT_RGB565,    /*!< RGB565 color mode   */
//  PXFMT_RGB888,    /*!< RGB888 color mode   */
//  PXFMT_ARGB8888   /*!< ARGB8888 color mode */
//} Pixel_Fmt_TypeDef;

//#define IMG_BYTES_PER_PX(pxfmt)  (    \
//((pxfmt) == PXFMT_GRAY8) ? 1 :        \
//((pxfmt) == PXFMT_RGB565) ? 2 :       \
//((pxfmt) == PXFMT_RGB888) ? 3 :       \
//((pxfmt) == PXFMT_ARGB8888) ? 4 : 0)

//typedef struct
//{
//  uint32_t x0;    /*!< Left     */
//  uint32_t y0;    /*!< Top      */
//  uint32_t width;  /*!< Width   */
//  uint32_t height; /*!< Height  */
//} Roi_TypeDef;

//typedef struct
//{
//  uint32_t width;  /*!< Image width         */
//  uint32_t height; /*!< Image height        */
//  void *pData;     /*!< Image data buffer   */
//  Pixel_Fmt_TypeDef format;  /*!< Image pixel format  */
//} Image_TypeDef;
//typedef enum
//{
//  GRAY8               = 0x00,
//  BMP565              = 0x01,
//  BMP888              = 0x02,
//  RAW                 = 0x03,
//  BMP                 = 0x04,
//  TXT                 = 0x05 /*should be used only for the NN outputs*/
//}DataFormat_TypeDef;
//typedef enum
//{
//  INVALIDATE           = 0x01,   
//  CLEAN                = 0x02  
//}DCache_Coherency_TypeDef;
///* Exported constants --------------------------------------------------------*/
///* External variables --------------------------------------------------------*/
///* Exported macros -----------------------------------------------------------*/
///* Exported functions ------------------------------------------------------- */
//void ImageResize_NearestNeighbor(Image_TypeDef *, Image_TypeDef *, Roi_TypeDef * );
//void ImagePfc_Rgb565ToGrayscale(Image_TypeDef *, Image_TypeDef * );
//void ImagePfc_Rgb565ToRgb888(Image_TypeDef *, Image_TypeDef *, uint32_t );
//uint32_t Image_CheckResizeMemoryLayout(Image_TypeDef *, Image_TypeDef *);
//uint32_t Image_CheckPfcMemoryLayout(Image_TypeDef *, Image_TypeDef *);
////void PREPROC_PixelFormatConversion(PreprocContext_TypeDef* Preproc_Context_Ptr);
//void ImageResize_NearestNeighbor(Image_TypeDef *srcImage, Image_TypeDef *dstImage, Roi_TypeDef *roi);
//void Run_Preprocessing(AppContext_TypeDef *);
//void Init_DataMemoryLayout(AppContext_TypeDef *);
//void Resize_Frame(Image_TypeDef *, Image_TypeDef *, Roi_TypeDef *);
//#ifdef __cplusplus
//}
//#endif

//#endif /*IMG_PREPROC_H */

///************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
