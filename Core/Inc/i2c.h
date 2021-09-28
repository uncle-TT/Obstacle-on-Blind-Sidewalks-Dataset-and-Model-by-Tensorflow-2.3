/**
  ******************************************************************************
  * @file    i2c.h
  * @brief   This file contains all the function prototypes for
  *          the i2c.c file
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
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __I2C_H__
#define __I2C_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */
#include "stm32h7xx_hal.h"
#include <stdio.h>
#include <string.h>

/* USER CODE END Includes */

extern I2C_HandleTypeDef hi2c1;
extern I2C_HandleTypeDef hi2c2;

/* USER CODE BEGIN Private defines */
#define	BH1750_ADDR_WRITE	0x46	//01000110
#define	BH1750_ADDR_READ	0x47	//01000111
#define I2C_ADDR          0x60  //语音识别模块地址,模块地址为0x50，由于最右边一位要做读写位，所以右移一位为0xa0
#define DATAHEAD					0xFD  //帧头
#define I2CT_FLAG_TIMEOUT         ((uint32_t)0x1000)
#define I2CT_LONG_TIMEOUT         ((uint32_t)(10 * I2CT_FLAG_TIMEOUT))
/* USER CODE END Private defines */

void MX_I2C1_Init(void);
void MX_I2C2_Init(void);

/* USER CODE BEGIN Prototypes */
typedef enum
{
		POWER_OFF_CMD				=	0x00,	//断电：无激活状态
		POWER_ON_CMD				=	0x01,	//通电：等待测量指令
		RESET_REGISTER				=	0x07,	//重置数字寄存器（在断电状态下不起作用）
		CONT_H_MODE					=	0x10,	//连续H分辨率模式：在11x分辨率下开始测量，测量时间120ms
		CONT_H_MODE2				=	0x11,	//连续H分辨率模式2：在0.51x分辨率下开始测量，测量时间120ms
		CONT_L_MODE					=	0x13,	//连续L分辨率模式：在411分辨率下开始测量，测量时间16ms
		ONCE_H_MODE					=	0x20,	//一次高分辨率模式：在11x分辨率下开始测量，测量时间120ms，测量后自动设置为断电模式
		ONCE_H_MODE2				=	0x21,	//一次高分辨率模式2：在0.51x分辨率下开始测量，测量时间120ms，测量后自动设置为断电模式
		ONCE_L_MODE					=	0x23	//一次低分辨率模式：在411x分辨率下开始测量，测量时间16ms，测量后自动设置为断电模式
} BH1750_MODE;

uint8_t	BH1750_Send_Cmd(BH1750_MODE cmd);
uint8_t BH1750_Read_Dat(uint8_t* dat);
uint16_t BH1750_Dat_To_Lux(uint8_t* dat);
uint8_t I2C_ReceiveData(I2C_TypeDef* I2Cx);
typedef struct
{
		uint8_t DataHead;
		uint8_t Length_HH;
		uint8_t Length_LL;
		uint8_t Commond;
		uint8_t EncodingFormat;
		uint8_t* Text;
} XFS_Protocol_TypeDef;

typedef enum
{
		GB2312 = 0x00,
		GBK = 0x01,
		BIG5 = 0x02,
		UNICODE = 0x03
} EncodingFormat_Type;//文本的编码格式

void speech_text(uint8_t *str,uint8_t encoding_format);


typedef enum
{
		ChipStatus_InitSuccessful = 0x4A,//初始化成功回传
		ChipStatus_CorrectCommand = 0x41,//收到正确的命令帧回传
		ChipStatus_ErrorCommand = 0x45,//收到不能识别命令帧回传
		ChipStatus_Busy = 0x4E,//芯片忙碌状态回传
		ChipStatus_Idle = 0x4F//芯片空闲状态回传
} ChipStatus_Type;//芯片回传

uint8_t GetChipStatus(void);

typedef enum
{
		Style_Single,//？为 0，一字一顿的风格
		Style_Continue//？为 1，正常合成
} Style_Type; //合成风格设置 [f?]
void SetStyle(Style_Type style);

typedef enum
{
		Language_Auto,//? 为 0，自动判断语种
		Language_Chinese,//? 为 1，阿拉伯数字、度量单位、特殊符号等合成为中文
		Language_English//? 为 2，阿拉伯数字、度量单位、特殊符号等合成为英文
} Language_Type; //合成语种设置 [g?]
void SetLanguage(Language_Type language);

typedef enum
{
		Articulation_Auto,//? 为 0，自动判断单词发音方式
		Articulation_Letter,//? 为 1，字母发音方式
		Articulation_Word//? 为 2，单词发音方式
} Articulation_Type; //设置单词的发音方式 [h?]
void SetArticulation(Articulation_Type articulation);

typedef enum
{
		Spell_Disable,//? 为 0，不识别汉语拼音
		Spell_Enable//? 为 1，将“拼音＋1 位数字（声调）”识别为汉语拼音，例如： hao3
} Spell_Type; //设置对汉语拼音的识别 [i?]
void SetSpell(Spell_Type spell);

typedef enum
{
		Reader_XiaoYan = 3,//? 为 3，设置发音人为小燕(女声, 推荐发音人)
		Reader_XuJiu = 51,//? 为 51，设置发音人为许久(男声, 推荐发音人)
		Reader_XuDuo = 52,//? 为 52，设置发音人为许多(男声)
		Reader_XiaoPing = 53,//? 为 53，设置发音人为小萍(女声)
		Reader_DonaldDuck = 54,//? 为 54，设置发音人为唐老鸭(效果器)
		Reader_XuXiaoBao = 55//? 为 55，设置发音人为许小宝(女童声)
} Reader_Type;//选择发音人 [m?]
void SetReader(Reader_Type reader);

typedef enum
{
		NumberHandle_Auto,//? 为 0，自动判断
		NumberHandle_Number,//? 为 1，数字作号码处理
		NumberHandle_Value//? 为 2，数字作数值处理
} NumberHandle_Type; //设置数字处理策略 [n?]
void SetNumberHandle(NumberHandle_Type numberHandle);

typedef enum
{
		ZeroPronunciation_Zero,//? 为 0，读成“zero
		ZeroPronunciation_O//? 为 1，读成“欧”音
} ZeroPronunciation_Type; //数字“0”在读 作英文、号码时 的读法 [o?]
void SetZeroPronunciation(ZeroPronunciation_Type zeroPronunciation);



typedef enum
{
		NamePronunciation_Auto,//? 为 0，自动判断姓氏读音
		NamePronunciation_Constraint//? 为 1，强制使用姓氏读音规则
} NamePronunciation_Type; //设置姓名读音 策略 [r?]
void SetNamePronunciation(NamePronunciation_Type namePronunciation);

void SetSpeed(int speed);//设置语速 [s?] ? 为语速值，取值：0～10
void SetIntonation(int intonation);//设置语调 [t?] ? 为语调值，取值：0～10
void SetVolume(int volume);//设置音量 [v?] ? 为音量值，取值：0～10

typedef enum
{
		OnePronunciation_Yao,//? 为 0，合成号码“1”时读成“幺
		OnePronunciation_Yi//? 为 1，合成号码“1”时读成“一”
} OnePronunciation_Type; //设置号码中“1”的读法 [y?]
void SetOnePronunciation(OnePronunciation_Type onePronunciation);

typedef enum
{
		Rhythm_Diasble,//? 为 0，“ *”和“#”读出符号
		Rhythm_Enable//? 为 1，处理成韵律，“*”用于断词，“#”用于停顿
} Rhythm_Type; //是否使用韵律 标记“*”和“#” [z?]
void SetRhythm(Rhythm_Type rhythm);
void SetRestoreDefault(void);//恢复默认的合成参数 [d] 所有设置（除发音人设置、语种设置外）恢复为默认值
void speech_text(uint8_t *str,uint8_t encoding_format);
void SetBase(uint8_t *str);
void TextCtrl(char c, int d);

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __I2C_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
