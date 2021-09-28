/**
  ******************************************************************************
  * @file    i2c.c
  * @brief   This file provides code for the configuration
  *          of the I2C instances.
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
#include "i2c.h"

/* USER CODE BEGIN 0 */
#include "stm32h7xx_hal_i2c.h"
#define I2C2_OWN_ADDRESS7      0X0A
/* USER CODE END 0 */

I2C_HandleTypeDef hi2c1;
I2C_HandleTypeDef hi2c2;

/* I2C1 init function */
void MX_I2C1_Init(void)
{

  /* USER CODE BEGIN I2C1_Init 0 */

  /* USER CODE END I2C1_Init 0 */

  /* USER CODE BEGIN I2C1_Init 1 */

  /* USER CODE END I2C1_Init 1 */
  hi2c1.Instance = I2C1;
  hi2c1.Init.Timing = 0x20B0CCFF;
  hi2c1.Init.OwnAddress1 = 0;
  hi2c1.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
  hi2c1.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
  hi2c1.Init.OwnAddress2 = 0;
  hi2c1.Init.OwnAddress2Masks = I2C_OA2_NOMASK;
  hi2c1.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
  hi2c1.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
  if (HAL_I2C_Init(&hi2c1) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure Analogue filter
  */
  if (HAL_I2CEx_ConfigAnalogFilter(&hi2c1, I2C_ANALOGFILTER_ENABLE) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure Digital filter
  */
  if (HAL_I2CEx_ConfigDigitalFilter(&hi2c1, 0) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN I2C1_Init 2 */

  /* USER CODE END I2C1_Init 2 */

}
/* I2C2 init function */
void MX_I2C2_Init(void)
{

  /* USER CODE BEGIN I2C2_Init 0 */

  /* USER CODE END I2C2_Init 0 */

  /* USER CODE BEGIN I2C2_Init 1 */

  /* USER CODE END I2C2_Init 1 */
  hi2c2.Instance = I2C2;
  hi2c2.Init.Timing = 0x20B0CCFF;
  hi2c2.Init.OwnAddress1 = 0;
  hi2c2.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
  hi2c2.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
  hi2c2.Init.OwnAddress2 = 0;
  hi2c2.Init.OwnAddress2Masks = I2C_OA2_NOMASK;
  hi2c2.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
  hi2c2.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
  if (HAL_I2C_Init(&hi2c2) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure Analogue filter
  */
  if (HAL_I2CEx_ConfigAnalogFilter(&hi2c2, I2C_ANALOGFILTER_ENABLE) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure Digital filter
  */
  if (HAL_I2CEx_ConfigDigitalFilter(&hi2c2, 0) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN I2C2_Init 2 */

  /* USER CODE END I2C2_Init 2 */

}

void HAL_I2C_MspInit(I2C_HandleTypeDef* i2cHandle)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};
  RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = {0};
  if(i2cHandle->Instance==I2C1)
  {
  /* USER CODE BEGIN I2C1_MspInit 0 */

  /* USER CODE END I2C1_MspInit 0 */
  /** Initializes the peripherals clock
  */
    PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_I2C1;
    PeriphClkInitStruct.I2c123ClockSelection = RCC_I2C123CLKSOURCE_D2PCLK1;
    if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK)
    {
      Error_Handler();
    }

    __HAL_RCC_GPIOB_CLK_ENABLE();
    /**I2C1 GPIO Configuration
    PB8     ------> I2C1_SCL
    PB9     ------> I2C1_SDA
    */
    GPIO_InitStruct.Pin = BH1750_SCL_Pin|BH1750_SDA_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_OD;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
    GPIO_InitStruct.Alternate = GPIO_AF4_I2C1;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    /* I2C1 clock enable */
    __HAL_RCC_I2C1_CLK_ENABLE();
  /* USER CODE BEGIN I2C1_MspInit 1 */

  /* USER CODE END I2C1_MspInit 1 */
  }
  else if(i2cHandle->Instance==I2C2)
  {
  /* USER CODE BEGIN I2C2_MspInit 0 */

  /* USER CODE END I2C2_MspInit 0 */

  /** Initializes the peripherals clock
  */
    PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_I2C2;
    PeriphClkInitStruct.I2c123ClockSelection = RCC_I2C123CLKSOURCE_D2PCLK1;
    if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK)
    {
      Error_Handler();
    }

    __HAL_RCC_GPIOB_CLK_ENABLE();
    /**I2C2 GPIO Configuration
    PB10     ------> I2C2_SCL
    PB11     ------> I2C2_SDA
    */
    GPIO_InitStruct.Pin = voice_SCL_Pin|voice_SDA_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_OD;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
    GPIO_InitStruct.Alternate = GPIO_AF4_I2C2;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    /* I2C2 clock enable */
    __HAL_RCC_I2C2_CLK_ENABLE();
  /* USER CODE BEGIN I2C2_MspInit 1 */

  /* USER CODE END I2C2_MspInit 1 */
  }
}

void HAL_I2C_MspDeInit(I2C_HandleTypeDef* i2cHandle)
{

  if(i2cHandle->Instance==I2C1)
  {
  /* USER CODE BEGIN I2C1_MspDeInit 0 */

  /* USER CODE END I2C1_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_I2C1_CLK_DISABLE();

    /**I2C1 GPIO Configuration
    PB8     ------> I2C1_SCL
    PB9     ------> I2C1_SDA
    */
    HAL_GPIO_DeInit(BH1750_SCL_GPIO_Port, BH1750_SCL_Pin);

    HAL_GPIO_DeInit(BH1750_SDA_GPIO_Port, BH1750_SDA_Pin);

  /* USER CODE BEGIN I2C1_MspDeInit 1 */

  /* USER CODE END I2C1_MspDeInit 1 */
  }
  else if(i2cHandle->Instance==I2C2)
  {
  /* USER CODE BEGIN I2C2_MspDeInit 0 */

  /* USER CODE END I2C2_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_I2C2_CLK_DISABLE();

    /**I2C2 GPIO Configuration
    PB10     ------> I2C2_SCL
    PB11     ------> I2C2_SDA
    */
    HAL_GPIO_DeInit(voice_SCL_GPIO_Port, voice_SCL_Pin);

    HAL_GPIO_DeInit(voice_SDA_GPIO_Port, voice_SDA_Pin);

  /* USER CODE BEGIN I2C2_MspDeInit 1 */

  /* USER CODE END I2C2_MspDeInit 1 */
  }
}

/* USER CODE BEGIN 1 */
/**
 * @brief		向BH1750发送一条指令
 * @param		cmd —— BH1750工作模式指令（在BH1750_MODE中枚举定义）
 * @retval		成功返回HAL_OK
*/
uint8_t	BH1750_Send_Cmd(BH1750_MODE cmd)
{
    return HAL_I2C_Master_Transmit(&hi2c1, BH1750_ADDR_WRITE, (uint8_t*)&cmd, 1, 0xFFFF);
}
/**
 * @brief		从BH1750接收一次光强数据
 * @param		dat —— 存储光照强度的地址（两个字节数组）
 * @retval		成功 —— 返回HAL_OK
*/
uint8_t BH1750_Read_Dat(uint8_t* dat)
{
    return HAL_I2C_Master_Receive(&hi2c1, BH1750_ADDR_READ, dat, 2, 0xFFFF);
}
/**
 * @brief		将BH1750的两个字节数据转换为光照强度值（0-65535）
 * @param		dat  —— 存储光照强度的地址（两个字节数组）
 * @retval		成功 —— 返回光照强度值
*/
uint16_t BH1750_Dat_To_Lux(uint8_t* dat)
{
    uint16_t lux = 0;
    lux = dat[0];
    lux <<= 8;
    lux += dat[1];
    lux = (int)(lux / 1.2);

    return lux;
}

/**
  * @brief   获取芯片状态值
  * @param
  * @retval  返回状态值
  */
uint8_t I2C_ReceiveData(I2C_TypeDef* I2Cx)
{
    /* Check the parameters */
    assert_param(IS_I2C_ALL_PERIPH(I2Cx));
    /* Return the data in the DR register */
    return (uint8_t)I2Cx->RXDR;
}

uint8_t GetChipStatus(void)
{

    uint8_t pBuffer = 0xff;
    uint8_t AskState[4] = {0xFD,0x00,0x01,0x21};
    uint8_t x[100] = {};


    HAL_I2C_Master_Transmit(&hi2c2, I2C_ADDR, &AskState[0], 1, 0xFFFF);
    HAL_I2C_Master_Transmit(&hi2c2, I2C_ADDR, &AskState[1], 1, 0xFFFF);
    HAL_I2C_Master_Transmit(&hi2c2, I2C_ADDR, &AskState[2], 1, 0xFFFF);
    HAL_I2C_Master_Transmit(&hi2c2, I2C_ADDR, &AskState[3], 1, 0xFFFF);
    HAL_Delay(100);

    /* While there is data to be read */
		
    /* Test on EV7 and clear it */

    /* Decrement the read bytes counter */
    pBuffer=I2C_ReceiveData(I2C2);
    user_main_printf("%d",(int)x);
    /* Enable Acknowledgement to be ready for another reception */

    return pBuffer;
}

void speech_text(uint8_t *str,uint8_t encoding_format)
{
    uint16_t size = strlen((const char *)str) + 2;

    XFS_Protocol_TypeDef DataPack;

    DataPack.DataHead = DATAHEAD;
    DataPack.Length_HH = size >>8;
    DataPack.Length_LL = size;
    DataPack.Commond = 0x01;
    DataPack.EncodingFormat = encoding_format;
    DataPack.Text = str;

    HAL_I2C_Master_Transmit(&hi2c2,I2C_ADDR,&DataPack.DataHead, 1,0xffff );
    HAL_I2C_Master_Transmit(&hi2c2,I2C_ADDR,&DataPack.Length_HH, 1,0xffff);
    HAL_I2C_Master_Transmit(&hi2c2,I2C_ADDR,&DataPack.Length_LL, 1,0xffff);
    HAL_I2C_Master_Transmit(&hi2c2,I2C_ADDR,&DataPack.Commond, 1,0xffff);
    HAL_I2C_Master_Transmit(&hi2c2,I2C_ADDR,&DataPack.EncodingFormat, sizeof(DataPack.EncodingFormat),0xffff);

    HAL_I2C_Master_Transmit(&hi2c2,I2C_ADDR,DataPack.Text,strlen((const char *)DataPack.Text),0xffff);
}

void SetBase(uint8_t *str)
{
    uint16_t size = strlen((const char *)str) + 2;

    XFS_Protocol_TypeDef DataPack;

    DataPack.DataHead = DATAHEAD;
    DataPack.Length_HH = size >>8;
    DataPack.Length_LL = size;
    DataPack.Commond = 0x01;
    DataPack.EncodingFormat = 0x00;
    DataPack.Text = str;

    HAL_I2C_Master_Transmit(&hi2c2,I2C_ADDR,&DataPack.DataHead, 1,0xffff );
    HAL_I2C_Master_Transmit(&hi2c2,I2C_ADDR,&DataPack.Length_HH, 1,0xffff);
    HAL_I2C_Master_Transmit(&hi2c2,I2C_ADDR,&DataPack.Length_LL, 1,0xffff);
    HAL_I2C_Master_Transmit(&hi2c2,I2C_ADDR,&DataPack.Commond, 1,0xffff);
    HAL_I2C_Master_Transmit(&hi2c2,I2C_ADDR,&DataPack.EncodingFormat, 1,0xffff);

    HAL_I2C_Master_Transmit(&hi2c2,I2C_ADDR,DataPack.Text,strlen((const char *)DataPack.Text),0xffff);
}

void TextCtrl(char c, int d)
{
    char str[10];
    if (d != -1)
        sprintf(str, "[%c%d]", c, d);
    else
        sprintf(str, "[%c]", c);
    SetBase((uint8_t *)str);

}

void SetStyle(Style_Type style)
{
    TextCtrl('f', style);
    while(GetChipStatus() != ChipStatus_Idle)
    {
        HAL_Delay(10);
    }
}

void SetLanguage(Language_Type language)
{
    TextCtrl('g', language);
    while(GetChipStatus() != ChipStatus_Idle)
    {
        HAL_Delay(10);
    }
}

void SetArticulation(Articulation_Type articulation)
{
    TextCtrl('h', articulation);
    while(GetChipStatus() != ChipStatus_Idle)
    {
        HAL_Delay(10);
    }
}

void SetSpell(Spell_Type spell)
{
    TextCtrl('i', spell);
    while(GetChipStatus() != ChipStatus_Idle)
    {
        HAL_Delay(10);
    }
}

void SetReader(Reader_Type reader)
{
    TextCtrl('m', reader);
//    while(GetChipStatus() != ChipStatus_Idle)
//    {
//        HAL_Delay(10);
//    }
}

void SetNumberHandle(NumberHandle_Type numberHandle)
{
    TextCtrl('n', numberHandle);
    while(GetChipStatus() != ChipStatus_Idle)
    {
        HAL_Delay(10);
    }
}

void SetZeroPronunciation(ZeroPronunciation_Type zeroPronunciation)
{
    TextCtrl('o', zeroPronunciation);
    while(GetChipStatus() != ChipStatus_Idle)
    {
        HAL_Delay(10);
    }
}


void SetNamePronunciation(NamePronunciation_Type namePronunciation)
{
    TextCtrl('r', namePronunciation);
    while(GetChipStatus() != ChipStatus_Idle)
    {
        HAL_Delay(10);
    }
}

void SetSpeed(int speed)
{
    TextCtrl('s', speed);
    while(GetChipStatus() != ChipStatus_Idle)
    {
        HAL_Delay(10);
    }
}

void SetIntonation(int intonation)
{
    TextCtrl('t', intonation);
    while(GetChipStatus() != ChipStatus_Idle)
    {
        HAL_Delay(10);
    }
}

void SetVolume(int volume)
{
    TextCtrl('v', volume);
    while(GetChipStatus() != ChipStatus_Idle)
    {
        HAL_Delay(10);
    }
}

void SetOnePronunciation(OnePronunciation_Type onePronunciation)
{
    TextCtrl('y', onePronunciation);
    while(GetChipStatus() != ChipStatus_Idle)
    {
        HAL_Delay(10);
    }
}

void SetRhythm(Rhythm_Type rhythm)
{
    TextCtrl('z', rhythm);
    while(GetChipStatus() != ChipStatus_Idle)
    {
        HAL_Delay(10);
    }
}

void SetRestoreDefault(void)
{
    TextCtrl('d', -1);
    while(GetChipStatus() != ChipStatus_Idle)
    {
        HAL_Delay(10);
    }
}

/* USER CODE END 1 */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
