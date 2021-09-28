/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "crc.h"
#include "dcmi.h"
#include "dma.h"
#include "i2c.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"
#include "app_x-cube-ai.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <string.h>
#include "ov5640.h"
#include "stdio.h"
#include "stdlib.h"
#include "network.h"
#include "network_data.h"
#include "img_preprocess.h"

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */
uint8_t aRxBuffer=0;
uint8_t TxBuff[99] = {0};
uint8_t StatusFlag = 0;
uint8_t ov5640_reg1 = 0xff;
uint8_t ov5640_reg2 = 0xff;
uint32_t dcmi_buffer[BUFF_SIZE];
HAL_StatusTypeDef dcmi_dma_status = HAL_OK;
uint32_t DCMI_RN = 0;  //row number
uint32_t DCMI_CN = 0;  //column number
uint32_t DCMI_RS = 0;  //row start
uint32_t DCMI_CS = 0;  //column start
//uint8_t fps=0;
uint8_t tx_busy = 0;
uint8_t dat[2] = {0};
unsigned int dta,lux;
uint8_t hc_sr04_flag=0;
uint8_t bh1750_flag=0;
uint8_t ai_flag=0;
uint8_t dcmi_flag = 1;

//#define __ALIGN_4(addr)         (((addr) + 3) & ~(0x03))             //地址4字节对齐
//
//#define DCMI_BUF_ADDR    0x24060000        //buffer起始地址
//#define DCMI_BUF_LEN     224*224*2              //buffer长度
//
//#define PREDCMI_BUF_ADDR    __ALIGN_4(DCMI_BUF_ADDR + DCMI_BUF_LEN)//下一个buffer起始地址
//
//#define PREDCMI_BUF_LEN     224*224*3        //下一个buffer长度
//
//uint8_t dcmi_buffer[DCMI_BUF_LEN] __attribute__((at(DCMI_BUF_ADDR    )));    //定义buffre时指定地址
//uint8_t preprocess_Image[PREDCMI_BUF_LEN] __attribute__((at(PREDCMI_BUF_ADDR    )));
/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

extern DCMI_HandleTypeDef hdcmi;
extern DMA_HandleTypeDef hdma_dcmi_pssi;
extern UART_HandleTypeDef huart1;
extern DMA_HandleTypeDef hdma_usart1_tx;

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
/**
 * @brief Statically allocate buffers.
 * @note Buffers can be dynamically allocated using malloc and size information
 * given by the report in ai_network_get_info().
 */

//uint8_t* ld;

/* 1 - Create the AI buffer IO handlers */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */
void DCMI_DMA_MemInc_En(void);
void DCMI_DMA_MemInc_Den(void);
void USER_DCMI_Full_Init(void);
void Voice_init(void);
void DCMI_ov5640_init(void);
void DCMI_ov5640_process(void);
//int ai_obstacles_on_blind_road_init(void);
//int ai_obstacles_on_blind_road_process(void);
void BH1750_Light_process(void);
void HC_SR04_process(void);
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
//	CameraContext_TypeDef CameraContext;
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
    /* USER CODE BEGIN 1 */

    /* USER CODE END 1 */

    /* Enable I-Cache---------------------------------------------------------*/
    SCB_EnableICache();

    /* Enable D-Cache---------------------------------------------------------*/
    SCB_EnableDCache();

    /* MCU Configuration--------------------------------------------------------*/

    /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
    HAL_Init();

    /* USER CODE BEGIN Init */

    /* USER CODE END Init */

    /* Configure the system clock */
    SystemClock_Config();

    /* USER CODE BEGIN SysInit */

    /* USER CODE END SysInit */

    /* Initialize all configured peripherals */
    MX_GPIO_Init();
    MX_DMA_Init();
    MX_USART1_UART_Init();
    MX_USART3_UART_Init();
    MX_DCMI_Init();
    MX_I2C1_Init();
    MX_TIM1_Init();
    MX_TIM6_Init();
    MX_USART2_UART_Init();
    MX_I2C2_Init();
    MX_CRC_Init();
    MX_X_CUBE_AI_Init();
    /* USER CODE BEGIN 2 */
//    if (HAL_UART_Receive_IT(&huart1, (uint8_t *)&aRxBuffer, 1)!=HAL_OK)
//    {
//        MX_USART1_UART_Init();
//        HAL_UART_Receive_IT(&huart1, (uint8_t *)&aRxBuffer, 1);
//    }
    /* Initialize voice *****************************************************/

//		SetReader(Reader_XiaoPing);
//		speech_text((uint8_t *)"你好世界!我是小燕",GB2312);
    /* Initialize ov5640 *****************************************************/
    DCMI_ov5640_init();
    /* Initialize network *****************************************************/
    //ai_obstacles_on_blind_road_init();

    /* USER CODE END 2 */

    /* Infinite loop */
    /* USER CODE BEGIN WHILE */
    while (1)
    {

        /* USER CODE END WHILE */


        /* USER CODE BEGIN 3 */
        DCMI_ov5640_process();
        MX_X_CUBE_AI_Process();
        //ai_obstacles_on_blind_road_process();
        BH1750_Light_process();
        HC_SR04_process();


    }
    /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
    RCC_OscInitTypeDef RCC_OscInitStruct = {0};
    RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

    /** Supply configuration update enable
    */
    HAL_PWREx_ConfigSupply(PWR_DIRECT_SMPS_SUPPLY);
    /** Configure the main internal regulator output voltage
    */
    __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE0);

    while(!__HAL_PWR_GET_FLAG(PWR_FLAG_VOSRDY)) {}
    /** Initializes the RCC Oscillators according to the specified parameters
    * in the RCC_OscInitTypeDef structure.
    */
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI48|RCC_OSCILLATORTYPE_HSE;
    RCC_OscInitStruct.HSEState = RCC_HSE_BYPASS;
    RCC_OscInitStruct.HSI48State = RCC_HSI48_ON;
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
    RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
    RCC_OscInitStruct.PLL.PLLM = 1;
    RCC_OscInitStruct.PLL.PLLN = 70;
    RCC_OscInitStruct.PLL.PLLP = 2;
    RCC_OscInitStruct.PLL.PLLQ = 4;
    RCC_OscInitStruct.PLL.PLLR = 2;
    RCC_OscInitStruct.PLL.PLLRGE = RCC_PLL1VCIRANGE_3;
    RCC_OscInitStruct.PLL.PLLVCOSEL = RCC_PLL1VCOWIDE;
    RCC_OscInitStruct.PLL.PLLFRACN = 0;
    if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
    {
        Error_Handler();
    }
    /** Initializes the CPU, AHB and APB buses clocks
    */
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                                  |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2
                                  |RCC_CLOCKTYPE_D3PCLK1|RCC_CLOCKTYPE_D1PCLK1;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.SYSCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_HCLK_DIV1;
    RCC_ClkInitStruct.APB3CLKDivider = RCC_APB3_DIV2;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_APB1_DIV2;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_APB2_DIV2;
    RCC_ClkInitStruct.APB4CLKDivider = RCC_APB4_DIV2;

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK)
    {
        Error_Handler();
    }
    HAL_RCC_MCOConfig(RCC_MCO1, RCC_MCO1SOURCE_HSI48, RCC_MCODIV_2);
}

/* USER CODE BEGIN 4 */
//串口发送完成回调函数
void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart)
{
    extern uint8_t tx_busy;
    if (huart ==  &huart1)
    {
        tx_busy = 0;//发送标志位
        dcmi_flag = 1 ;//摄像头识别标志位
    }

}
//DMA地址自增使能
void DCMI_DMA_MemInc_En(void)
{
    HAL_DMA_DeInit(&hdma_dcmi_pssi);

    hdma_dcmi_pssi.Init.MemInc = DMA_MINC_ENABLE;
    if (HAL_DMA_Init(&hdma_dcmi_pssi) != HAL_OK)
    {
        Error_Handler();
    }
}
//DMA地址自增失能
void DCMI_DMA_MemInc_Den(void)
{
    HAL_DMA_DeInit(&hdma_dcmi_pssi);
    hdma_dcmi_pssi.Init.MemInc = DMA_MINC_DISABLE;
    if (HAL_DMA_Init(&hdma_dcmi_pssi) != HAL_OK)
    {
        Error_Handler();
    }
}
//DCMI重新配置，并赋值标志位
void USER_DCMI_Full_Init(void)
{
    hdcmi.Instance = DCMI;
    hdcmi.Init.SynchroMode = DCMI_SYNCHRO_HARDWARE;
    hdcmi.Init.PCKPolarity = DCMI_PCKPOLARITY_RISING;
    hdcmi.Init.VSPolarity = DCMI_VSPOLARITY_HIGH;
    hdcmi.Init.HSPolarity = DCMI_HSPOLARITY_LOW;
    hdcmi.Init.CaptureRate = DCMI_CR_ALL_FRAME;
    hdcmi.Init.ExtendedDataMode = DCMI_EXTEND_DATA_8B;
    hdcmi.Init.JPEGMode = DCMI_JPEG_ENABLE;
    hdcmi.Init.ByteSelectMode = DCMI_BSM_ALL;
    hdcmi.Init.ByteSelectStart = DCMI_OEBS_ODD;
    hdcmi.Init.LineSelectMode = DCMI_LSM_ALL;
    hdcmi.Init.LineSelectStart = DCMI_OELS_ODD;
    if (HAL_DCMI_Init(&hdcmi) != HAL_OK)
    {
        Error_Handler();
    }
//	__HAL_DCMI_DISABLE_IT(&hdcmi,DCMI_IT_FRAME|DCMI_IT_LINE | DCMI_IT_VSYNC | DCMI_IT_ERR | DCMI_IT_OVR);
//  __HAL_DCMI_ENABLE_IT(&hdcmi,DCMI_IT_FRAME);      //使能帧中断
    dcmi_flag=1;//使能识别
}
void DCMI_ov5640_init(void)
{
    HAL_Delay(500); //Await OV5640 running stable
    SCCB_Rst();
    user_main_printf("SCCB OK\r\n");

    HAL_Delay(100);
    ov5640_reg1 = SCCB_RD_Reg(OV5640_CHIPIDH);

//  user_main_printf("ov5640 ID %x\r\n",ov5640_reg1);

    ov5640_reg2 = SCCB_RD_Reg(OV5640_CHIPIDL);

    user_main_printf("evBox STM32H7A3AIT6-Q\r\n");

    HAL_Delay(100);

    if((ov5640_reg1==0xff)||(ov5640_reg2==0xff)) while(1);

    user_main_printf("ov5640 ID %x%x ",ov5640_reg1,ov5640_reg2);
    ov5640_Init();
    HAL_Delay(1);

    user_main_printf("ov5640 Init\r\n");
    OV5640_RGB565_Mode();
    HAL_Delay(1);

    user_main_printf("ov5640 RGB565 Init\r\n");
    OV5640_Focus_Init();
    HAL_Delay(1);

    user_main_printf("ov5640 Focus \r\n");
    ov5640_speed_ctrl();
    HAL_Delay(1);

    user_main_printf("ov5640 sppd ctrl \r\n");
    OV5640_OutSize_Set(16,4,320,244);
    HAL_Delay(1);

    user_main_printf("ov5640 outsize320*240 \r\n");
    HAL_DCMI_DeInit(&hdcmi);

    user_main_printf("STM32H7A3ZIT-Q DCMI Init... \r\n");
    USER_DCMI_Full_Init();

    user_main_printf("STM32H7A3ZIT-Q DCMI Init OK!\r\n");
		
    OV5640_Focus_Single(); 
		user_main_printf("Frame START\r\n");
		user_main_printf("ov5640 cpture \r\n");
		user_main_printf("ov5640 cpture 224*224\r\n");
}
//摄像头识别处理函数
void DCMI_ov5640_process(void)
{

    if (dcmi_flag==1)
    {
        DCMI_DMA_MemInc_En();
        HAL_DCMI_DisableCrop (&hdcmi);
        HAL_Delay(100);

        dcmi_dma_status = HAL_DCMI_Init(&hdcmi);
        HAL_DCMI_DisableCrop (&hdcmi);
        DCMI_RN = 224;
        DCMI_CN = 448;
        DCMI_RS = 0;
        DCMI_CS = 0;
        HAL_DCMI_ConfigCrop (&hdcmi, DCMI_CS, DCMI_RS, DCMI_CN, DCMI_RN);//裁剪输出图像
        HAL_Delay(1);
        HAL_DCMI_EnableCrop (&hdcmi);
        HAL_Delay(1);

        __HAL_DCMI_ENABLE_IT(&hdcmi,DCMI_IT_FRAME);
        HAL_DCMI_Start_DMA(&hdcmi, DCMI_MODE_SNAPSHOT,(uint32_t)dcmi_buffer, DCMI_CN*DCMI_RN/4);//开始通过DCMI接口采集ov5640拍摄的图片数据。
        while(HAL_DMA_GetState(&hdma_dcmi_pssi)==HAL_DMA_STATE_BUSY);
        HAL_DCMI_Stop(&hdcmi);
        ImagePfc_Rgb565ToRgb888(dcmi_buffer,preprocess_Image,0);// RGB565-to-RGB888
        user_main_printf("ov5640 pixformat_RGB565_yo_RGB888_convert OK\r\n");
    }
}
//DCMI帧中断回调服务函数
void HAL_DCMI_FrameEventCallback(DCMI_HandleTypeDef *hdcmi)
{
    user_main_printf("Frame OVER FrameEventCallback\r\n");
    HAL_GPIO_TogglePin(LD3_GPIO_Port,LD3_Pin);

}

//ai处理

//启动超声波模块
void StartModule(void) 	//
{
    HAL_GPIO_WritePin(TRIG_GPIO_Port,TRIG_Pin,GPIO_PIN_SET);
    HAL_Delay(10);          //10ms延时
    HAL_GPIO_WritePin(TRIG_GPIO_Port,TRIG_Pin,GPIO_PIN_RESET);
}
//获得ECHO引脚状态
int GetStatus(void)
{
    return HAL_GPIO_ReadPin(ECHO_GPIO_Port,ECHO_Pin);

}
//BH1750功能函数
void BH1750_Light_process(void)
{

    if(HAL_OK == BH1750_Send_Cmd(ONCE_H_MODE))
    {
        //printf("send ok\n");
    }
    else
    {
        //printf("send fail\n");
    }

    HAL_Delay(200);
    if(HAL_OK == BH1750_Read_Dat(dat))
    {
        //printf("recv ok\n");
        user_main_printf("current: %5d lux\n", BH1750_Dat_To_Lux(dat));

    }
    else
    {
        //printf("recv fail");
    }

    HAL_Delay(1000);

    if(BH1750_Dat_To_Lux(dat)<50)  HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin,GPIO_PIN_SET);
    else HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin,GPIO_PIN_RESET);
}
//超声波测距，马达震动预警函数
void HC_SR04_process(void)
{   if(hc_sr04_flag == 1)
    {

        StartModule();               //启动超声波模块
        while(!GetStatus());        //当ECHO返回0，等待
        start();
        while(GetStatus());		  //当ECHO为1计数并等待
        dta = get_num();
        HAL_UART_Transmit(&huart1, (uint8_t *)dta, strlen((char *)dta), 0xffff);
        user_main_printf("distance is :%d cm\r\n",dta);
        HAL_Delay(1000);		      //1000ms
        if(dta>600)  HAL_TIM_PWM_Stop(&htim1,TIM_CHANNEL_1);
        else if(dta>450)  	mada_1();
        else if(dta>150)  mada_2();
        else  mada_3();
        hc_sr04_flag = 0;
    }
}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
    /* USER CODE BEGIN Error_Handler_Debug */
    /* User can add his own implementation to report the HAL error return state */
    __disable_irq();
    while (1)
    {
    }
    /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
    /* USER CODE BEGIN 6 */
    /* User can add his own implementation to report the file name and line number,
       ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
    /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
