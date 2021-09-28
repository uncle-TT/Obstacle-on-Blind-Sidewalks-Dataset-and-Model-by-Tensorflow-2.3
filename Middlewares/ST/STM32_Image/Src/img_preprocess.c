/**
  ******************************************************************************
  * @file    img_preprocess.c
  * @author  MCD Application Team
  * @brief   Library of functions for image preprocessing before NN inference
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

/* Includes ------------------------------------------------------------------*/
#include "img_preprocess.h"
#include "ai_utilities.h"


/** @addtogroup Middlewares
  * @{
  */

/** @addtogroup STM32_Image
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private defines -----------------------------------------------------------*/


      
/* Private variables ---------------------------------------------------------*/
/* Global variables ----------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/

/* Functions Definition ------------------------------------------------------*/
uint32_t Image_CheckResizeMemoryLayout(Image_TypeDef *srcImage, Image_TypeDef *dstImage)
{
  uint32_t src_size=srcImage->width*srcImage->height*IMG_BYTES_PER_PX(srcImage->format);
  uint32_t dst_size=dstImage->width*dstImage->height*IMG_BYTES_PER_PX(dstImage->format);
  uint32_t src_start_address=(uint32_t)srcImage->pData;
  uint32_t dst_start_address=(uint32_t)dstImage->pData;
  uint32_t src_end_address=src_start_address + src_size -1;
  uint32_t dst_end_address=dst_start_address + dst_size -1;
  
  if(src_size < dst_size)
  {
    while(1);
  }
  else
  {
    if((src_start_address >= dst_start_address) || (src_end_address <= dst_start_address))
    {
      return 1;
    }
    else if((src_end_address > dst_start_address) && (dst_end_address >= src_end_address))
    {
      return 0;
    }
    else
    {
      while(1);
    }
  }
}

uint32_t Image_CheckPfcMemoryLayout(void *srcImage, void *dstImage)
{
  uint32_t src_size=224*224*2;
  uint32_t dst_size=224*224*3;
  uint32_t src_start_address=(uint32_t)srcImage;
  uint32_t dst_start_address=(uint32_t)dstImage;
  uint32_t src_end_address=src_start_address + src_size -1;
  uint32_t dst_end_address=dst_start_address + dst_size -1;
  
  if(((dst_size-src_size) <  dst_size/3))
  {
    while(1);
  }
  else
  {
    if(dst_end_address <= src_end_address)
    {
      return 1;
    }
    else if(dst_start_address >= src_start_address)
    {
      return 0;
    }
    else
    {
      while(1);
    }
  }
}

/**
* @brief  Performs image (or selected Region Of Interest) resizing using Nearest Neighbor interpolation algorithm
* @param  srcImage     Pointer to source image buffer
* @param  srcW         Source image width
* @param  srcH         Source image height
* @param  pixelSize    Number of bytes per pixel
* @param  roiX         Region Of Interest x starting location 
* @param  roiY         Region Of Interest y starting location
* @param  roiW         Region Of Interest width
* @param  roiH         Region Of Interest height
* @param  dstImage     Pointer to destination image buffer
* @param  dstW         Destination image width
* @param  dstH         Destination image height
* @param  Top2Bottom   Value of 1/0 indicates that the rescales performs from the top/bottom to the bottom/top of the buffers
* @retval void         None
*/
void ImageResize_NearestNeighbor(Image_TypeDef *srcImage, Image_TypeDef *dstImage, Roi_TypeDef *roi)
{
  Resize_Frame(srcImage, dstImage, roi);
}

/**
* @brief  Performs rgb565 to grayscale conversion
* @param  pIn          Pointer to source image structure
* @param  pOut         Pointer to destination image structure
* @retval void         None
*/
void ImagePfc_Rgb565ToGrayscale(Image_TypeDef *srcImage, Image_TypeDef *dstImage)
{
  uint32_t num_pixels = srcImage->width*srcImage->height;
  uint16_t *pIn=(uint16_t*)srcImage->pData;
  uint8_t *pOut=(uint8_t*)dstImage->pData;
  uint32_t Top2Bottom;
  
  Top2Bottom=Image_CheckPfcMemoryLayout(srcImage, dstImage);
  
  if (Top2Bottom == 1)
  {
    for (uint32_t i = 0; i < num_pixels; i++)
    {
      uint16_t pixel = *pIn++;
      uint32_t red   = ((pixel & 0xf800u) >> 8);
      uint32_t green = ((pixel & 0x07e0u) >> 3);
      uint32_t blue  = ((pixel & 0x001fu) << 3);
      red   = red   * 19595;
      green = green * 38470;
      blue  = blue  *  7471;
      /* Add 2^15 before right-shift for round-to-the-nearest-integer div */
      *pOut++ = (uint8_t) ((red + green + blue + 0x8000) >> 16);
    }
  }
  else if(Top2Bottom==0)
  {
    pIn = pIn + (num_pixels - 1);
    pOut = pOut + (num_pixels - 1);
    for (int i = num_pixels - 1; i >= 0; i--)
    {
      uint16_t pixel = *pIn--;
      uint32_t red   = ((pixel & 0xf800u) >> 8);
      uint32_t green = ((pixel & 0x07e0u) >> 3);
      uint32_t blue  = ((pixel & 0x001fu) << 3);
      red   = red   * 19595;
      green = green * 38470;
      blue  = blue  *  7471;
      /* Add 2^15 before right-shift for round-to-the-nearest-integer div */
      *pOut-- = (uint8_t) ((red + green + blue + 0x8000) >> 16);
    }
  }
}

/**
 * @brief Performs rgb565 to rgb888 color conversion
 * @param srcImage Pointer to source image structure
 * @param dstImage Pointer to destination image structure
 * @param rb_swap 0: Bytes in regular order. 1: Bytes are swapped two by two in output
*/
int ImagePfc_Rgb565ToRgb888(void *srcImage, void *dstImage, uint32_t rb_swap)
{
  uint32_t num_pixels = 224*224;
  uint16_t *pIn=(uint16_t*)srcImage;
  uint8_t *pOut=(uint8_t*)dstImage;
  uint32_t Top2Bottom;
  
  Top2Bottom=Image_CheckPfcMemoryLayout(srcImage, dstImage);
  
  if(Top2Bottom==1)
  {
    for (uint32_t i = 0; i < num_pixels; i++)
    {
      uint16_t pixel = *pIn++;
      /* Extract R:5 G:6 B:5 components */
      uint32_t red   = ((pixel & 0xf800u) >> 11);
      uint32_t green = ((pixel & 0x07e0u) >>  5);
      uint32_t blue  = ((pixel & 0x001fu) >>  0);
      /* Left shift and copy MSBs to LSBs to improve conversion linearity */
      red   = (red   << 3) | (red   >> 2);
      green = (green << 2) | (green >> 4);
      blue  = (blue  << 3) | (blue  >> 2);
      *pOut++ = (uint8_t) ((rb_swap != 0) ? red : blue);
      *pOut++ = (uint8_t) green;
      *pOut++ = (uint8_t) ((rb_swap != 0) ? blue : red);
    }
  }
  else if(Top2Bottom==0)
  {
    pIn=pIn+(num_pixels-1);
    pOut=pOut+(3*num_pixels - 1);

    for (int i = num_pixels-1; i >= 0; i--)
    {
      uint16_t pixel = *pIn--;
      /* Extract R:5 G:6 B:5 components */
      uint32_t red   = ((pixel & 0xf800u) >> 11);
      uint32_t green = ((pixel & 0x07e0u) >>  5);
      uint32_t blue  = ((pixel & 0x001fu) >>  0);
      /* Left shift and copy MSBs to LSBs to improve conversion linearity */
      red   = (red   << 3) | (red   >> 2);
      green = (green << 2) | (green >> 4);
      blue  = (blue  << 3) | (blue  >> 2);
      *pOut-- = (uint8_t) ((rb_swap != 0) ? blue : red);
      *pOut-- = (uint8_t) green;
      *pOut-- = (uint8_t) ((rb_swap != 0) ? red : blue);
    }
  }
	return 0;
}

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
