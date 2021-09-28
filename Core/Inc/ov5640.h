#include "stm32h7xx_hal.h"
#ifndef _OV5640_Barcode_H
#define _OV5640_Barcode_H

//for not open-drain bus
/*
 * SIOC: PE7
 * SIOD: PE8

 * VSYNC: PB7
 * HREF: PA4
 * PCLK: PA6
 * XCLK:  PA8 //24MHz, optional to use
 * D7: PE7
 * D6: PE5
 * D5: PD3
 * D4: PE4
 * D3: PC9
 * D2: PB13
 * D1: PC7
 * D0: PC6
 * RESET: PD10
 * PWDN: PD11
 *
 *
 */

#define SCCB_SCL_L    		HAL_GPIO_WritePin(GPIOE,GPIO_PIN_7,GPIO_PIN_RESET)
#define SCCB_SCL_H    		HAL_GPIO_WritePin(GPIOE,GPIO_PIN_7,GPIO_PIN_SET)
#define SCCB_SDA_L    		HAL_GPIO_WritePin(GPIOE,GPIO_PIN_8,GPIO_PIN_RESET)
#define SCCB_SDA_H    		HAL_GPIO_WritePin(GPIOE,GPIO_PIN_8,GPIO_PIN_SET)

#define SCCB_READ_SDA    	HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_8)
#define SCCB_ID_W   	    0X78  			//OV5640 ID for Write
#define SCCB_ID_R   	    0X79  			//OV5640 ID for Read

#define OV5640_PWDN           HAL_GPIO_WritePin(GPIOD,GPIO_PIN_11,GPIO_PIN_SET)
#define OV5640_PWUP           HAL_GPIO_WritePin(GPIOD,GPIO_PIN_11,GPIO_PIN_RESET)
#define OV5640_RST  	      HAL_GPIO_WritePin(GPIOD,GPIO_PIN_10,GPIO_PIN_RESET)
#define OV5640_RUN  	      HAL_GPIO_WritePin(GPIOD,GPIO_PIN_10,GPIO_PIN_SET)
#define OV5640_VSYNC 	      HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_7)
#define OV5640_HREF  	      HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_4)
#define OV5640_PCLK  	      HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_6)


void SCCB_Start(void);
void SCCB_Stop(void);
void SCCB_No_Ack(void);
uint8_t SCCB_WR_Byte(uint8_t data);
uint8_t SCCB_RD_Byte(void);
uint8_t SCCB_WR_Reg(uint16_t reg,uint8_t data);
uint8_t SCCB_RD_Reg(uint16_t reg);


void SCCB_SDA_IN(void);
void SCCB_SDA_OUT(void);

#define ticknumber 12*5

void SCCB_Rst(void);

//OV5640相关寄存器定义
#define OV5640_CHIPIDH          0X300A  	//OV5640 CHIP ID high byte
#define OV5640_CHIPIDL          0X300B  	//OV5640 CHIP ID low byte

/***********************************/

void ov5640_Init(void);
void OV5640_RGB565_Mode(void);
void OV5640_Exposure(uint8_t exposure);
void OV5640_Light_Mode(uint8_t mode);
void OV5640_Color_Saturation(uint8_t sat);
void OV5640_Brightness(uint8_t bright);
void OV5640_Contrast(uint8_t contrast);
void OV5640_Sharpness(uint8_t sharp);
void OV5640_Special_Effects(uint8_t eft);
void OV5640_AUTO_FOCUS(void);
uint8_t OV5640_OutSize_Set(uint16_t offx,uint16_t offy,uint16_t width,uint16_t height);
uint8_t OV5640_ImageWin_Set(uint16_t offx,uint16_t offy,uint16_t width,uint16_t height);
uint8_t OV5640_Focus_Init(void);
uint8_t OV5640_Focus_Single(void);
uint8_t OV5640_Focus_Constant(void);
void ov5640_speed_ctrl(void);

#include <stddef.h>

/** @addtogroup BSP
  * @{
  */

/** @addtogroup Components
  * @{
  */

/** @addtogroup ov5640
  * @{
  */

/** @defgroup OV5640_Exported_Types
  * @{
  */



#endif

