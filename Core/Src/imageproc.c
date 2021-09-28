///**
//  ******************************************************************************
//  * @file    img_preprocess.c
//  * @author  MCD Application Team
//  * @brief   Library of functions for image preprocessing before NN inference
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

///* Includes ------------------------------------------------------------------*/
//#include "imageproc.h"
//#include "app_x-cube-ai.h"

///** @addtogroup Middlewares
//  * @{
//  */

///** @addtogroup STM32_Image
//  * @{
//  */

///* Private typedef -----------------------------------------------------------*/
///* Private defines -----------------------------------------------------------*/

//void PREPROC_PixelFormatConversion(PreprocContext_TypeDef* Preproc_Context_Ptr)
//{
//	  if(Preproc_Context_Ptr->Pfc_Src_Img.format==PXFMT_RGB565 &&
//     Preproc_Context_Ptr->Pfc_Dst_Img.format==PXFMT_RGB888)
//  {
//    ImagePfc_Rgb565ToRgb888(&Preproc_Context_Ptr->Pfc_Src_Img,
//                            &Preproc_Context_Ptr->Pfc_Dst_Img,
//                            Preproc_Context_Ptr->red_blue_swap);
//  }
//  else if(Preproc_Context_Ptr->Pfc_Src_Img.format==PXFMT_RGB565 &&
//          Preproc_Context_Ptr->Pfc_Dst_Img.format==PXFMT_GRAY8)
//  {
//    ImagePfc_Rgb565ToGrayscale(&Preproc_Context_Ptr->Pfc_Src_Img,
//                               &Preproc_Context_Ptr->Pfc_Dst_Img);
//  }
//  else
//  {
//    while(1);
//  }
//}
//      
///* Private variables ---------------------------------------------------------*/
///* Global variables ----------------------------------------------------------*/
///* Private function prototypes -----------------------------------------------*/

///* Functions Definition ------------------------------------------------------*/
//uint32_t Image_CheckResizeMemoryLayout(Image_TypeDef *srcImage, Image_TypeDef *dstImage)
//{
//  uint32_t src_size=srcImage->width*srcImage->height*IMG_BYTES_PER_PX(srcImage->format);
//  uint32_t dst_size=dstImage->width*dstImage->height*IMG_BYTES_PER_PX(dstImage->format);
//  uint32_t src_start_address=(uint32_t)srcImage->pData;
//  uint32_t dst_start_address=(uint32_t)dstImage->pData;
//  uint32_t src_end_address=src_start_address + src_size -1;
//  uint32_t dst_end_address=dst_start_address + dst_size -1;
//  
//  if(src_size < dst_size)
//  {
//    while(1);
//  }
//  else
//  {
//    if((src_start_address >= dst_start_address) || (src_end_address <= dst_start_address))
//    {
//      return 1;
//    }
//    else if((src_end_address > dst_start_address) && (dst_end_address >= src_end_address))
//    {
//      return 0;
//    }
//    else
//    {
//      while(1);
//    }
//  }
//}

//uint32_t Image_CheckPfcMemoryLayout(Image_TypeDef *srcImage, Image_TypeDef *dstImage)
//{
//  uint32_t src_size=srcImage->width*srcImage->height*IMG_BYTES_PER_PX(srcImage->format);
//  uint32_t dst_size=dstImage->width*dstImage->height*IMG_BYTES_PER_PX(dstImage->format);
//  uint32_t src_start_address=(uint32_t)srcImage->pData;
//  uint32_t dst_start_address=(uint32_t)dstImage->pData;
//  uint32_t src_end_address=src_start_address + src_size -1;
//  uint32_t dst_end_address=dst_start_address + dst_size -1;
//  
//  if(((dst_size-src_size) <  dst_size/3))
//  {
//    while(1);
//  }
//  else
//  {
//    if(dst_end_address <= src_end_address)
//    {
//      return 1;
//    }
//    else if(dst_start_address >= src_start_address)
//    {
//      return 0;
//    }
//    else
//    {
//      while(1);
//    }
//  }
//}

///**
//* @brief  Performs image (or selected Region Of Interest) resizing using Nearest Neighbor interpolation algorithm
//* @param  srcImage     Pointer to source image buffer
//* @param  srcW         Source image width
//* @param  srcH         Source image height
//* @param  pixelSize    Number of bytes per pixel
//* @param  roiX         Region Of Interest x starting location 
//* @param  roiY         Region Of Interest y starting location
//* @param  roiW         Region Of Interest width
//* @param  roiH         Region Of Interest height
//* @param  dstImage     Pointer to destination image buffer
//* @param  dstW         Destination image width
//* @param  dstH         Destination image height
//* @param  Top2Bottom   Value of 1/0 indicates that the rescales performs from the top/bottom to the bottom/top of the buffers
//* @retval void         None
//*/
//void ImageResize_NearestNeighbor(Image_TypeDef *srcImage, Image_TypeDef *dstImage, Roi_TypeDef *roi)
//{
//  Resize_Frame(srcImage, dstImage, roi);
//}

///**
//* @brief  Performs rgb565 to grayscale conversion
//* @param  pIn          Pointer to source image structure
//* @param  pOut         Pointer to destination image structure
//* @retval void         None
//*/
//void ImagePfc_Rgb565ToGrayscale(Image_TypeDef *srcImage, Image_TypeDef *dstImage)
//{
//  uint32_t num_pixels = srcImage->width*srcImage->height;
//  uint16_t *pIn=(uint16_t*)srcImage->pData;
//  uint8_t *pOut=(uint8_t*)dstImage->pData;
//  uint32_t Top2Bottom;
//  
//  Top2Bottom=Image_CheckPfcMemoryLayout(srcImage, dstImage);
//  
//  if (Top2Bottom == 1)
//  {
//    for (uint32_t i = 0; i < num_pixels; i++)
//    {
//      uint16_t pixel = *pIn++;
//      uint32_t red   = ((pixel & 0xf800u) >> 8);
//      uint32_t green = ((pixel & 0x07e0u) >> 3);
//      uint32_t blue  = ((pixel & 0x001fu) << 3);
//      red   = red   * 19595;
//      green = green * 38470;
//      blue  = blue  *  7471;
//      /* Add 2^15 before right-shift for round-to-the-nearest-integer div */
//      *pOut++ = (uint8_t) ((red + green + blue + 0x8000) >> 16);
//    }
//  }
//  else if(Top2Bottom==0)
//  {
//    pIn = pIn + (num_pixels - 1);
//    pOut = pOut + (num_pixels - 1);
//    for (int i = num_pixels - 1; i >= 0; i--)
//    {
//      uint16_t pixel = *pIn--;
//      uint32_t red   = ((pixel & 0xf800u) >> 8);
//      uint32_t green = ((pixel & 0x07e0u) >> 3);
//      uint32_t blue  = ((pixel & 0x001fu) << 3);
//      red   = red   * 19595;
//      green = green * 38470;
//      blue  = blue  *  7471;
//      /* Add 2^15 before right-shift for round-to-the-nearest-integer div */
//      *pOut-- = (uint8_t) ((red + green + blue + 0x8000) >> 16);
//    }
//  }
//}

///**
// * @brief Performs rgb565 to rgb888 color conversion
// * @param srcImage Pointer to source image structure
// * @param dstImage Pointer to destination image structure
// * @param rb_swap 0: Bytes in regular order. 1: Bytes are swapped two by two in output
//*/
//void ImagePfc_Rgb565ToRgb888(Image_TypeDef *srcImage, Image_TypeDef *dstImage, uint32_t rb_swap)
//{
//  uint32_t num_pixels = srcImage->width*srcImage->height;
//  uint16_t *pIn=(uint16_t*)srcImage->pData;
//  uint8_t *pOut=(uint8_t*)dstImage->pData;
//  uint32_t Top2Bottom;
//  
//  Top2Bottom=Image_CheckPfcMemoryLayout(srcImage, dstImage);
//  
//  if(Top2Bottom==1)
//  {
//    for (uint32_t i = 0; i < num_pixels; i++)
//    {
//      uint16_t pixel = *pIn++;
//      /* Extract R:5 G:6 B:5 components */
//      uint32_t red   = ((pixel & 0xf800u) >> 11);
//      uint32_t green = ((pixel & 0x07e0u) >>  5);
//      uint32_t blue  = ((pixel & 0x001fu) >>  0);
//      /* Left shift and copy MSBs to LSBs to improve conversion linearity */
//      red   = (red   << 3) | (red   >> 2);
//      green = (green << 2) | (green >> 4);
//      blue  = (blue  << 3) | (blue  >> 2);
//      *pOut++ = (uint8_t) ((rb_swap != 0) ? red : blue);
//      *pOut++ = (uint8_t) green;
//      *pOut++ = (uint8_t) ((rb_swap != 0) ? blue : red);
//    }
//  }
//  else if(Top2Bottom==0)
//  {
//    pIn=pIn+(num_pixels-1);
//    pOut=pOut+(3*num_pixels - 1);

//    for (int i = num_pixels-1; i >= 0; i--)
//    {
//      uint16_t pixel = *pIn--;
//      /* Extract R:5 G:6 B:5 components */
//      uint32_t red   = ((pixel & 0xf800u) >> 11);
//      uint32_t green = ((pixel & 0x07e0u) >>  5);
//      uint32_t blue  = ((pixel & 0x001fu) >>  0);
//      /* Left shift and copy MSBs to LSBs to improve conversion linearity */
//      red   = (red   << 3) | (red   >> 2);
//      green = (green << 2) | (green >> 4);
//      blue  = (blue  << 3) | (blue  >> 2);
//      *pOut-- = (uint8_t) ((rb_swap != 0) ? blue : red);
//      *pOut-- = (uint8_t) green;
//      *pOut-- = (uint8_t) ((rb_swap != 0) ? red : blue);
//    }
//  }
//}

///**
//  * @}
//  */

///**
//  * @}
//  */
///** @addtogroup Middlewares
//  * @{
//  */

///** @addtogroup STM32_AI_Utilities
//  * @{
//  */

///* Private typedef -----------------------------------------------------------*/
///* Private defines -----------------------------------------------------------*/
///* Private macros ------------------------------------------------------------*/
///* Private variables ---------------------------------------------------------*/
///* Global variables ----------------------------------------------------------*/

///* Private function prototypes -----------------------------------------------*/
//static DataFormat_TypeDef get_dump_format(Image_TypeDef *img);

///* Functions Definition ------------------------------------------------------*/
///**
//* @brief Initializes the application data memory layout
//* @param  Pointer to Application context
//*/
//void Init_DataMemoryLayout(AppContext_TypeDef *App_Context_Ptr)
//{  
//#if MEMORY_SCHEME == FULL_INTERNAL_MEM_OPT
// /*Offset so to "bottom" align camera_frame_buff buffer and resize_output_buff buffer*/
// #define  RESIZE_OUTPUT_BUFFER_OFFSET (CAM_FRAME_BUFFER_SIZE - RESIZE_OUTPUT_BUFFER_SIZE) 
//  App_Context_Ptr->Camera_ContextPtr->camera_capture_buffer = ai_fp_global_memory;
//  App_Context_Ptr->Camera_ContextPtr->camera_frame_buffer = ai_fp_global_memory;
//  App_Context_Ptr->Preproc_ContextPtr->Pfc_Dst_Img.pData = ai_fp_global_memory;
//  App_Context_Ptr->Preproc_ContextPtr->Resize_Dst_Img.pData = ai_fp_global_memory + RESIZE_OUTPUT_BUFFER_OFFSET;
//  App_Context_Ptr->Ai_ContextPtr->activation_buffer = ai_fp_global_memory;
//  #ifdef AI_NETWORK_INPUTS_IN_ACTIVATIONS
//   /*Initialized to NULL since input buffer is allocated within activation buffer ==> its size does not need to be taken into account*/  
//   App_Context_Ptr->Ai_ContextPtr->nn_input_buffer = NULL;
//  #else
//   App_Context_Ptr->Ai_ContextPtr->nn_input_buffer = ai_fp_global_memory + AI_ACTIVATION_BUFFER_SIZE;
//  #endif
//#elif MEMORY_SCHEME != FULL_INTERNAL_MEM_OPT
//  App_Context_Ptr->Camera_ContextPtr->camera_capture_buffer = ai_fp_global_memory;
//  App_Context_Ptr->Camera_ContextPtr->camera_frame_buffer = ai_fp_global_memory + CAM_FRAME_BUFFER_SIZE;
// #if MEMORY_SCHEME == SPLIT_INT_EXT
//  /*Offset so to "bottom" align pfc_output_buff buffer and resize_output_buff buffer*/
//  #define  RESIZE_OUTPUT_BUFFER_OFFSET (PFC_OUTPUT_BUFFER_SIZE - RESIZE_OUTPUT_BUFFER_SIZE) 
//  App_Context_Ptr->Ai_ContextPtr->activation_buffer = ai_fp_activation_memory;
//  App_Context_Ptr->Preproc_ContextPtr->Pfc_Dst_Img.pData = ai_fp_activation_memory;
//  App_Context_Ptr->Preproc_ContextPtr->Resize_Dst_Img.pData = ai_fp_activation_memory + RESIZE_OUTPUT_BUFFER_OFFSET;
//  #ifdef AI_NETWORK_INPUTS_IN_ACTIVATIONS
//   /*Initialized to NULL since input buffer is allocated within activation buffer ==> its size does not need to be taken into account*/  
//   App_Context_Ptr->Ai_ContextPtr->nn_input_buffer = NULL;
//  #else
//   App_Context_Ptr->Ai_ContextPtr->nn_input_buffer = ai_fp_global_memory + CAM_FRAME_BUFFER_SIZE;
//  #endif
// #else /*MEMORY_SCHEME == FULL_EXTERNAL*/
//  /*Offset so to "bottom" align camera_frame_buff buffer and resize_output_buff buffer*/
//  #define  RESIZE_OUTPUT_BUFFER_OFFSET (CAM_FRAME_BUFFER_SIZE - RESIZE_OUTPUT_BUFFER_SIZE) 
//  App_Context_Ptr->Ai_ContextPtr->activation_buffer  = ai_fp_global_memory + CAM_FRAME_BUFFER_SIZE;
//  App_Context_Ptr->Preproc_ContextPtr->Pfc_Dst_Img.pData = ai_fp_global_memory + CAM_FRAME_BUFFER_SIZE;
//  App_Context_Ptr->Preproc_ContextPtr->Resize_Dst_Img.pData = ai_fp_global_memory + CAM_FRAME_BUFFER_SIZE + RESIZE_OUTPUT_BUFFER_OFFSET;
//  #ifdef AI_NETWORK_INPUTS_IN_ACTIVATIONS
//   /*Initialized to NULL since input buffer is allocated within activation buffer ==> its size does not need to be taken into account*/  
//   App_Context_Ptr->Ai_ContextPtr->nn_input_buffer = NULL;
//  #else
//   App_Context_Ptr->Ai_ContextPtr->nn_input_buffer = ai_fp_global_memory + CAM_FRAME_BUFFER_SIZE + AI_ACTIVATION_BUFFER_SIZE;
//  #endif
// #endif
//#else
// #error Please check definition of MEMORY_SCHEME define
//#endif
//}
//void UTILS_DCache_Coherency_Maintenance(uint32_t *mem_addr, int32_t mem_size, DCache_Coherency_TypeDef Maintenance_operation)
//{
//  /*Check alignement on 32-bytes for the memory adress and check that the memory size is multiple of 32-bytes*/
//  if(((uint32_t)mem_addr%32 != 0) || (mem_size%32 != 0))
//    while(1);
//  
//  if(Maintenance_operation == INVALIDATE)
//  {
//    SCB_InvalidateDCache_by_Addr((void*)mem_addr, mem_size);
//  }
//  else if(Maintenance_operation == CLEAN)
//  {
//    SCB_CleanDCache_by_Addr((void *)mem_addr, mem_size);
//  }
//}
///**
//* @brief  Run preprocessing stages on captured frame
//* @param  App context ptr
//* @retval None
//*/
//void Run_Preprocessing(uint8_t *dcmi_data_buff)
//{
//  uint32_t tpfc_start;
//  uint32_t tpfc_stop;
//  uint32_t tresize_start;
//  uint32_t tresize_stop;
//  uint32_t tpvc_start;
//  uint32_t tpvc_stop;
//  PreprocContext_TypeDef* PreprocCtxt_Ptr;
//  CameraContext_TypeDef* Camera_ContextPtr;
//	AiContext_TypeDef* Ai_ContextPtr;
//    /*********************************************************************************************/
//    /****Coherency purpose: invalidate the source buffer area in L1 D-Cache before CPU reading****/
//    /*********************************************************************************************/
//    UTILS_DCache_Coherency_Maintenance((void *)(dcmi_data_buff), 320*240*2, INVALIDATE);
//  /**********************/
//  /****Image resizing****/
//  /**********************/
//  PreprocCtxt_Ptr->Resize_Src_Img.pData=dcmi_data_buff;
//  PreprocCtxt_Ptr->Resize_Src_Img.width=320;
//  PreprocCtxt_Ptr->Resize_Src_Img.height=240;
//  PreprocCtxt_Ptr->Resize_Src_Img.format=PXFMT_RGB565;
//  PreprocCtxt_Ptr->Resize_Dst_Img.pData=PreprocCtxt_Ptr->Resize_Dst_Img.pData;
//  PreprocCtxt_Ptr->Resize_Dst_Img.width=224;
//  PreprocCtxt_Ptr->Resize_Dst_Img.height=224;
//  PreprocCtxt_Ptr->Resize_Dst_Img.format=PXFMT_RGB565;
//  PreprocCtxt_Ptr->Roi.x0=0;
//  PreprocCtxt_Ptr->Roi.y0=0;
//  PreprocCtxt_Ptr->Roi.width=0;
//  PreprocCtxt_Ptr->Roi.height=0;
//  ImageResize_NearestNeighbor(&PreprocCtxt_Ptr->Resize_Src_Img,&PreprocCtxt_Ptr->Resize_Dst_Img,&PreprocCtxt_Ptr->Roi);
//  
////  tresize_stop=UTILS_GetTimeStamp(App_Context_Ptr->Utils_ContextPtr);
//  
//  /*************************************/
//  /****Image Pixel Format Conversion****/
//  /*************************************/
//  PreprocCtxt_Ptr->Pfc_Src_Img.pData=PreprocCtxt_Ptr->Resize_Dst_Img.pData;
//  PreprocCtxt_Ptr->Pfc_Src_Img.width=224;
//  PreprocCtxt_Ptr->Pfc_Src_Img.height=224;
//  PreprocCtxt_Ptr->Pfc_Src_Img.format=PXFMT_RGB565;
//  PreprocCtxt_Ptr->Pfc_Dst_Img.pData=PreprocCtxt_Ptr->Pfc_Dst_Img.pData;
//  PreprocCtxt_Ptr->Pfc_Dst_Img.width=224;
//  PreprocCtxt_Ptr->Pfc_Dst_Img.height=224;
//  PreprocCtxt_Ptr->red_blue_swap=1;
//  PREPROC_PixelFormatConversion(PreprocCtxt_Ptr);
//	
//  /***********************************************************/
//  /*********Pixel value convertion and normalisation**********/
//  /***********************************************************/
//  AI_PixelValueConversion(Ai_ContextPtr, 
//                                      (void*)(PreprocCtxt_Ptr->Pfc_Dst_Img.pData));
//  
//}

///**
//* @brief  Performs image (or selected Region Of Interest) resizing using Nearest Neighbor interpolation algorithm
//* @param  srcImage     Pointer to source image buffer
//* @param  srcW         Source image width
//* @param  srcH         Source image height
//* @param  pixelSize    Number of bytes per pixel
//* @param  roiX         Region Of Interest x starting location 
//* @param  roiY         Region Of Interest y starting location
//* @param  roiW         Region Of Interest width
//* @param  roiH         Region Of Interest height
//* @param  dstImage     Pointer to destination image buffer
//* @param  dstW         Destination image width
//* @param  dstH         Destination image height
//* @param  Top2Bottom   Value of 1/0 indicates that the rescales performs from the top/bottom to the bottom/top of the buffers
//* @retval void         None
//*/

//void Resize_Frame(Image_TypeDef *srcImage, Image_TypeDef *dstImage, Roi_TypeDef *roi)
//{
//  int x_ratio = (int)(((roi->width ? roi->width : srcImage->width)<<16)/dstImage->width)+1;
//  int y_ratio = (int)(((roi->height ? roi->height : srcImage->height)<<16)/dstImage->height)+1;
//  uint32_t pixelSize=IMG_BYTES_PER_PX(srcImage->format);
//  uint32_t Top2Bottom;
//  
//  Top2Bottom=Image_CheckResizeMemoryLayout(srcImage, dstImage);
//  
//  if(Top2Bottom == 0)
//  {
//    for (int y=dstImage->height-1, i=(dstImage->width*dstImage->height*pixelSize -2  ); y>=0; y--)
//    {
//      int sy = (y*y_ratio)>>16;
//      for (int x=dstImage->width-1; x>=0; x--, i-=pixelSize)
//      {
//        int sx = (x*x_ratio)>>16;
//        
//        for(int j=0; j<pixelSize; j++)
//        {
//          *((uint8_t*)dstImage->pData + i + j) = *((uint8_t*)srcImage->pData + (((sy+roi->y0)*srcImage->width) + (sx+roi->x0))*pixelSize + j);//(uint8_t) srcImage->pData[];
//        }
//      }
//    }
//  }
//  else if(Top2Bottom == 1)
//  {
//    
//    for (int y=0, i=0; y<dstImage->height; y++)
//    {
//      int sy = (y*y_ratio)>>16;
//      for (int x=0; x<dstImage->width; x++, i+=pixelSize)
//      {
//        int sx = (x*x_ratio)>>16;
//        
//        for(int j=0; j<pixelSize; j++)
//        {
//          *((uint8_t*)dstImage->pData + i + j) =  *((uint8_t*)srcImage->pData +(((sy+roi->y0)*srcImage->width) + (sx+roi->x0))*pixelSize + j);
//        }
//      }
//    }
//  }
//}

///**
// * @brief Get the dump format from image object
// *
// * @param img pointer to image object
// * @return DataFormat_TypeDef image dump format
// */
//static DataFormat_TypeDef get_dump_format(Image_TypeDef *img)
//{
//  switch (img->format)
//  {
//  case PXFMT_GRAY8:
//    return GRAY8;

//  case PXFMT_RGB565:
//    return BMP565;

//  case PXFMT_RGB888:
//    return BMP888;

//  default:
//    /* Use raw format for pixel formats not support by fp_vision_test.c */
//    return RAW;
//  }
//}
/////************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
