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
#define I2C_ADDR          0x60  //����ʶ��ģ���ַ,ģ���ַΪ0x50���������ұ�һλҪ����дλ����������һλΪ0xa0
#define DATAHEAD					0xFD  //֡ͷ
#define I2CT_FLAG_TIMEOUT         ((uint32_t)0x1000)
#define I2CT_LONG_TIMEOUT         ((uint32_t)(10 * I2CT_FLAG_TIMEOUT))
/* USER CODE END Private defines */

void MX_I2C1_Init(void);
void MX_I2C2_Init(void);

/* USER CODE BEGIN Prototypes */
typedef enum
{
		POWER_OFF_CMD				=	0x00,	//�ϵ磺�޼���״̬
		POWER_ON_CMD				=	0x01,	//ͨ�磺�ȴ�����ָ��
		RESET_REGISTER				=	0x07,	//�������ּĴ������ڶϵ�״̬�²������ã�
		CONT_H_MODE					=	0x10,	//����H�ֱ���ģʽ����11x�ֱ����¿�ʼ����������ʱ��120ms
		CONT_H_MODE2				=	0x11,	//����H�ֱ���ģʽ2����0.51x�ֱ����¿�ʼ����������ʱ��120ms
		CONT_L_MODE					=	0x13,	//����L�ֱ���ģʽ����411�ֱ����¿�ʼ����������ʱ��16ms
		ONCE_H_MODE					=	0x20,	//һ�θ߷ֱ���ģʽ����11x�ֱ����¿�ʼ����������ʱ��120ms���������Զ�����Ϊ�ϵ�ģʽ
		ONCE_H_MODE2				=	0x21,	//һ�θ߷ֱ���ģʽ2����0.51x�ֱ����¿�ʼ����������ʱ��120ms���������Զ�����Ϊ�ϵ�ģʽ
		ONCE_L_MODE					=	0x23	//һ�εͷֱ���ģʽ����411x�ֱ����¿�ʼ����������ʱ��16ms���������Զ�����Ϊ�ϵ�ģʽ
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
} EncodingFormat_Type;//�ı��ı����ʽ

void speech_text(uint8_t *str,uint8_t encoding_format);


typedef enum
{
		ChipStatus_InitSuccessful = 0x4A,//��ʼ���ɹ��ش�
		ChipStatus_CorrectCommand = 0x41,//�յ���ȷ������֡�ش�
		ChipStatus_ErrorCommand = 0x45,//�յ�����ʶ������֡�ش�
		ChipStatus_Busy = 0x4E,//оƬæµ״̬�ش�
		ChipStatus_Idle = 0x4F//оƬ����״̬�ش�
} ChipStatus_Type;//оƬ�ش�

uint8_t GetChipStatus(void);

typedef enum
{
		Style_Single,//��Ϊ 0��һ��һ�ٵķ��
		Style_Continue//��Ϊ 1�������ϳ�
} Style_Type; //�ϳɷ������ [f?]
void SetStyle(Style_Type style);

typedef enum
{
		Language_Auto,//? Ϊ 0���Զ��ж�����
		Language_Chinese,//? Ϊ 1�����������֡�������λ��������ŵȺϳ�Ϊ����
		Language_English//? Ϊ 2�����������֡�������λ��������ŵȺϳ�ΪӢ��
} Language_Type; //�ϳ��������� [g?]
void SetLanguage(Language_Type language);

typedef enum
{
		Articulation_Auto,//? Ϊ 0���Զ��жϵ��ʷ�����ʽ
		Articulation_Letter,//? Ϊ 1����ĸ������ʽ
		Articulation_Word//? Ϊ 2�����ʷ�����ʽ
} Articulation_Type; //���õ��ʵķ�����ʽ [h?]
void SetArticulation(Articulation_Type articulation);

typedef enum
{
		Spell_Disable,//? Ϊ 0����ʶ����ƴ��
		Spell_Enable//? Ϊ 1������ƴ����1 λ���֣���������ʶ��Ϊ����ƴ�������磺 hao3
} Spell_Type; //���öԺ���ƴ����ʶ�� [i?]
void SetSpell(Spell_Type spell);

typedef enum
{
		Reader_XiaoYan = 3,//? Ϊ 3�����÷�����ΪС��(Ů��, �Ƽ�������)
		Reader_XuJiu = 51,//? Ϊ 51�����÷�����Ϊ���(����, �Ƽ�������)
		Reader_XuDuo = 52,//? Ϊ 52�����÷�����Ϊ���(����)
		Reader_XiaoPing = 53,//? Ϊ 53�����÷�����ΪСƼ(Ů��)
		Reader_DonaldDuck = 54,//? Ϊ 54�����÷�����Ϊ����Ѽ(Ч����)
		Reader_XuXiaoBao = 55//? Ϊ 55�����÷�����Ϊ��С��(Ůͯ��)
} Reader_Type;//ѡ������ [m?]
void SetReader(Reader_Type reader);

typedef enum
{
		NumberHandle_Auto,//? Ϊ 0���Զ��ж�
		NumberHandle_Number,//? Ϊ 1�����������봦��
		NumberHandle_Value//? Ϊ 2����������ֵ����
} NumberHandle_Type; //�������ִ������ [n?]
void SetNumberHandle(NumberHandle_Type numberHandle);

typedef enum
{
		ZeroPronunciation_Zero,//? Ϊ 0�����ɡ�zero
		ZeroPronunciation_O//? Ϊ 1�����ɡ�ŷ����
} ZeroPronunciation_Type; //���֡�0���ڶ� ��Ӣ�ġ�����ʱ �Ķ��� [o?]
void SetZeroPronunciation(ZeroPronunciation_Type zeroPronunciation);



typedef enum
{
		NamePronunciation_Auto,//? Ϊ 0���Զ��ж����϶���
		NamePronunciation_Constraint//? Ϊ 1��ǿ��ʹ�����϶�������
} NamePronunciation_Type; //������������ ���� [r?]
void SetNamePronunciation(NamePronunciation_Type namePronunciation);

void SetSpeed(int speed);//�������� [s?] ? Ϊ����ֵ��ȡֵ��0��10
void SetIntonation(int intonation);//������� [t?] ? Ϊ���ֵ��ȡֵ��0��10
void SetVolume(int volume);//�������� [v?] ? Ϊ����ֵ��ȡֵ��0��10

typedef enum
{
		OnePronunciation_Yao,//? Ϊ 0���ϳɺ��롰1��ʱ���ɡ���
		OnePronunciation_Yi//? Ϊ 1���ϳɺ��롰1��ʱ���ɡ�һ��
} OnePronunciation_Type; //���ú����С�1���Ķ��� [y?]
void SetOnePronunciation(OnePronunciation_Type onePronunciation);

typedef enum
{
		Rhythm_Diasble,//? Ϊ 0���� *���͡�#����������
		Rhythm_Enable//? Ϊ 1����������ɣ���*�����ڶϴʣ���#������ͣ��
} Rhythm_Type; //�Ƿ�ʹ������ ��ǡ�*���͡�#�� [z?]
void SetRhythm(Rhythm_Type rhythm);
void SetRestoreDefault(void);//�ָ�Ĭ�ϵĺϳɲ��� [d] �������ã������������á����������⣩�ָ�ΪĬ��ֵ
void speech_text(uint8_t *str,uint8_t encoding_format);
void SetBase(uint8_t *str);
void TextCtrl(char c, int d);

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __I2C_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
