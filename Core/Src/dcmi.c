/**
  ******************************************************************************
  * @file    dcmi.c
  * @brief   This file provides code for the configuration
  *          of the DCMI instances.
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

/* Includes ------------------------------------------------------------------*/
#include "dcmi.h"

/* USER CODE BEGIN 0 */
#include "main.h"
#include "stdio.h"
/* USER CODE END 0 */

DCMI_HandleTypeDef hdcmi;
DMA_HandleTypeDef hdma_dcmi_pssi;

/* DCMI init function */
void MX_DCMI_Init(void)
{

  /* USER CODE BEGIN DCMI_Init 0 */

  /* USER CODE END DCMI_Init 0 */

  /* USER CODE BEGIN DCMI_Init 1 */

  /* USER CODE END DCMI_Init 1 */
  hdcmi.Instance = DCMI;
  hdcmi.Init.SynchroMode = DCMI_SYNCHRO_EMBEDDED;
  hdcmi.Init.PCKPolarity = DCMI_PCKPOLARITY_FALLING;
  hdcmi.Init.CaptureRate = DCMI_CR_ALL_FRAME;
  hdcmi.Init.ExtendedDataMode = DCMI_EXTEND_DATA_8B;
  hdcmi.Init.SyncroCode.FrameEndCode = 0;
  hdcmi.Init.SyncroCode.FrameStartCode = 0;
  hdcmi.Init.SyncroCode.LineStartCode = 0;
  hdcmi.Init.SyncroCode.LineEndCode = 0;
  hdcmi.Init.JPEGMode = DCMI_JPEG_DISABLE;
  hdcmi.Init.ByteSelectMode = DCMI_BSM_ALL;
  hdcmi.Init.ByteSelectStart = DCMI_OEBS_ODD;
  hdcmi.Init.LineSelectMode = DCMI_LSM_ALL;
  hdcmi.Init.LineSelectStart = DCMI_OELS_ODD;
  if (HAL_DCMI_Init(&hdcmi) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN DCMI_Init 2 */
//	DCMI->IER=0x0;
//  __HAL_DCMI_ENABLE_IT(&hdcmi,DCMI_IT_FRAME);      //ʹ��֡�ж�
  /* USER CODE END DCMI_Init 2 */

}

void HAL_DCMI_MspInit(DCMI_HandleTypeDef* dcmiHandle)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};
  if(dcmiHandle->Instance==DCMI)
  {
  /* USER CODE BEGIN DCMI_MspInit 0 */

  /* USER CODE END DCMI_MspInit 0 */
    /* DCMI clock enable */
    __HAL_RCC_DCMI_CLK_ENABLE();

    __HAL_RCC_GPIOE_CLK_ENABLE();
    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOB_CLK_ENABLE();
    __HAL_RCC_GPIOC_CLK_ENABLE();
    __HAL_RCC_GPIOD_CLK_ENABLE();
    /**DCMI GPIO Configuration
    PE4     ------> DCMI_D4
    PE5     ------> DCMI_D6
    PE6     ------> DCMI_D7
    PA4     ------> DCMI_HSYNC
    PA6     ------> DCMI_PIXCLK
    PB13     ------> DCMI_D2
    PC6     ------> DCMI_D0
    PC7     ------> DCMI_D1
    PC9     ------> DCMI_D3
    PD3     ------> DCMI_D5
    PB7     ------> DCMI_VSYNC
    */
    GPIO_InitStruct.Pin = GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF13_DCMI;
    HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_4|GPIO_PIN_6;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF13_DCMI;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_13|GPIO_PIN_7;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF13_DCMI;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_9;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF13_DCMI;
    HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_3;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF13_DCMI;
    HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

    /* DCMI DMA Init */
    /* DCMI_PSSI Init */
    hdma_dcmi_pssi.Instance = DMA1_Stream0;
    hdma_dcmi_pssi.Init.Request = DMA_REQUEST_DCMI_PSSI;
    hdma_dcmi_pssi.Init.Direction = DMA_PERIPH_TO_MEMORY;
    hdma_dcmi_pssi.Init.PeriphInc = DMA_PINC_DISABLE;
    hdma_dcmi_pssi.Init.MemInc = DMA_MINC_ENABLE;
    hdma_dcmi_pssi.Init.PeriphDataAlignment = DMA_PDATAALIGN_WORD;
    hdma_dcmi_pssi.Init.MemDataAlignment = DMA_MDATAALIGN_WORD;
    hdma_dcmi_pssi.Init.Mode = DMA_NORMAL;
    hdma_dcmi_pssi.Init.Priority = DMA_PRIORITY_VERY_HIGH;
    hdma_dcmi_pssi.Init.FIFOMode = DMA_FIFOMODE_ENABLE;
    hdma_dcmi_pssi.Init.FIFOThreshold = DMA_FIFO_THRESHOLD_FULL;
    hdma_dcmi_pssi.Init.MemBurst = DMA_MBURST_SINGLE;
    hdma_dcmi_pssi.Init.PeriphBurst = DMA_PBURST_SINGLE;
    if (HAL_DMA_Init(&hdma_dcmi_pssi) != HAL_OK)
    {
      Error_Handler();
    }

    /* Several peripheral DMA handle pointers point to the same DMA handle.
     Be aware that there is only one channel to perform all the requested DMAs. */
    __HAL_LINKDMA(dcmiHandle,DMA_Handle,hdma_dcmi_pssi);
//    __HAL_LINKDMA(dcmiHandle,hdmarx,hdma_dcmi_pssi);
//    __HAL_LINKDMA(dcmiHandle,hdmatx,hdma_dcmi_pssi);

    /* DCMI interrupt Init */
    HAL_NVIC_SetPriority(DCMI_PSSI_IRQn, 0, 0);
    HAL_NVIC_EnableIRQ(DCMI_PSSI_IRQn);
  /* USER CODE BEGIN DCMI_MspInit 1 */
//  HAL_DMA_Start(&hdma_dcmi_pssi,(uint32_t)&DCMI->DR,(uint32_t)JpegBuffer,JpegBufferLen);

        user_main_printf("OV2640_DCMI_DMA_SET_OVER");
  /* USER CODE END DCMI_MspInit 1 */
  }
}

void HAL_DCMI_MspDeInit(DCMI_HandleTypeDef* dcmiHandle)
{

  if(dcmiHandle->Instance==DCMI)
  {
  /* USER CODE BEGIN DCMI_MspDeInit 0 */

  /* USER CODE END DCMI_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_DCMI_CLK_DISABLE();

    /**DCMI GPIO Configuration
    PE4     ------> DCMI_D4
    PE5     ------> DCMI_D6
    PE6     ------> DCMI_D7
    PA4     ------> DCMI_HSYNC
    PA6     ------> DCMI_PIXCLK
    PB13     ------> DCMI_D2
    PC6     ------> DCMI_D0
    PC7     ------> DCMI_D1
    PC9     ------> DCMI_D3
    PD3     ------> DCMI_D5
    PB7     ------> DCMI_VSYNC
    */
    HAL_GPIO_DeInit(GPIOE, GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6);

    HAL_GPIO_DeInit(GPIOA, GPIO_PIN_4|GPIO_PIN_6);

    HAL_GPIO_DeInit(GPIOB, GPIO_PIN_13|GPIO_PIN_7);

    HAL_GPIO_DeInit(GPIOC, GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_9);

    HAL_GPIO_DeInit(GPIOD, GPIO_PIN_3);

    /* DCMI DMA DeInit */
    HAL_DMA_DeInit(dcmiHandle->DMA_Handle);
//    HAL_DMA_DeInit(dcmiHandle->hdmarx);
//    HAL_DMA_DeInit(dcmiHandle->hdmatx);

    /* DCMI interrupt Deinit */
    HAL_NVIC_DisableIRQ(DCMI_PSSI_IRQn);
  /* USER CODE BEGIN DCMI_MspDeInit 1 */

  /* USER CODE END DCMI_MspDeInit 1 */
  }
}

/* USER CODE BEGIN 1 */
int32_t BSP_CAMERA_Resume(uint32_t Instance)
{
  int32_t ret;

  if(Instance >= CAMERA_INSTANCES_NBR)
  {
    ret = BSP_ERROR_WRONG_PARAM;
  }
  else if(HAL_DCMI_Resume(&hdcmi) != HAL_OK)
  {
    ret = BSP_ERROR_PERIPH_FAILURE;
  }
  else
  {
    ret = BSP_ERROR_NONE;
  }

  /* Return BSP status */
  return ret;
}
int32_t BSP_CAMERA_Start(uint32_t Instance, uint8_t *pBff, uint32_t Mode)
{
  int32_t ret;

  if(Instance >= CAMERA_INSTANCES_NBR)
  {
    ret = BSP_ERROR_WRONG_PARAM;
  }
  else if(HAL_DCMI_Start_DMA(&hdcmi, Mode, (uint32_t)pBff, (uint32_t)320*240) != HAL_OK)
  {
    return BSP_ERROR_PERIPH_FAILURE;
  }
  else
  {
    ret = BSP_ERROR_NONE;
  }

  /* Return BSP status */
  return ret;
}
int32_t BSP_CAMERA_Stop(uint32_t Instance)
{
  int32_t ret;

  if(Instance >= CAMERA_INSTANCES_NBR)
  {
    ret = BSP_ERROR_WRONG_PARAM;
  }
  else if(HAL_DCMI_Stop(&hdcmi) != HAL_OK)
  {
    ret = BSP_ERROR_PERIPH_FAILURE;
  }
  else
  {
    ret = BSP_ERROR_NONE;
  }

  /* Return BSP status */
  return ret;
}

/**
  * @brief Suspend the CAMERA capture
  * @param  Instance Camera instance.
  */
int32_t BSP_CAMERA_Suspend(uint32_t Instance)
{
  int32_t ret;

  if(Instance >= CAMERA_INSTANCES_NBR)
  {
    ret = BSP_ERROR_WRONG_PARAM;
  }
  else if(HAL_DCMI_Suspend(&hdcmi) != HAL_OK)
  {
    return BSP_ERROR_PERIPH_FAILURE;
  }
  else
  {
    ret = BSP_ERROR_NONE;
  }

  /* Return BSP status */
  return ret;
}
/* USER CODE END 1 */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
