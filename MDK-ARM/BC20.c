#include "stm32h7xx_hal.h"
#include "BC20.h"
#include "usart.h"
#include "gpio.h"
#include <string.h>
#include <stdio.h>
#include "tim.h"

#define mqtt_username        "450210"                //��ƷID
#define mqtt_devid     		 "qaq"                    //�豸����
#define server_adder				"183.230.40.96"
#define server_port					"1883"



//��Ȩ��Ϣ
#define mqtt_password 		"version=2018-10-31&res=products%2F450210%2Fdevices%2Fqaq&et=1754555299&method=md5&sign=%2BKhqRoIL%2FJ1Uzun7mkfj7Q%3D%3D" //��Ȩ��Ϣ
#define BC20_SET_VERSION	  "AT+QMTCFG=\"version\",0,4\r\n"   //��������Э��汾��Ϊ3.1.1
#define BC20_ONENET_INFO  	  "AT+QMTOPEN=0,\"mqtts.heclouds.com\",1883\r\n"   //��mqtt�ͻ���
#define BC20_CONNET_INFO      "AT+QMTCONN=0,\"qaq\",\"450210\",\"version=2018-10-31&res=products%2F450210%2Fdevices%2Fqaq&et=1754555299&method=md5&sign=%2BKhqRoIL%2FJ1Uzun7mkfj7Q%3D%3D\"\r\n" //����oneentƽ̨

//
#define mqtt_sub_topic				"\"$sys/450210/qaq/dp/post/json/+\""		//������
#define mqtt_pub_topic				"\"$sys/450210/qaq/dp/post/json\"	"			//������
#define BC20_GPS               "AT+QMTPUB=0,0,0,0,\"$sys/450210/qaq/dp/post/json\",\"{\"id\":151,\"dp\":{\"location1\":[{\"v\":{\"lon\":120.91081495770261, \"lat\":31.978876992524356}}]}}\"\r\n"

#define BC20_ONENET_SUB       "AT+QMTSUB=0,1,\"$sys/450210/qaq/dp/post/json/+\",1\r\n"
//#define BC20_ONENET_PUB 			"AT+QMTPUB=0,0,0,0,\"$sys/450210/qaq/dp/post/json\","
//#define BC20_ONENET_DTA				"\"{\"id\": 123,\"dp\": {\"dis\":[{\"v\":%d}]}}\"\r\n"


unsigned char BC20_buf[128];
unsigned short BC20_cnt = 0, BC20_cntPre = 0;
unsigned  int pub_id=0,dta;

//��ջ���
void BC20_Clear(void)
{

	memset(BC20_buf, 0, sizeof(BC20_buf));
	BC20_cnt = 0;

}


//����ָ����ָ��
_Bool BC20_SendCmd(char *cmd, char *res)
{
	
	int timeOut = 1000;
	HAL_UART_Receive_IT(&huart3,BC20_buf,sizeof(BC20_buf));
	
	if (HAL_UART_Transmit(&huart3, (unsigned char *)cmd,(uint8_t)strlen(cmd),500) == HAL_OK)
		{
			printf("%s\n",cmd);
			printf("%s\n",BC20_buf);
			BC20_Clear();
		}
	while(timeOut--)
	{
			if(strstr((const char *)BC20_buf, res) != NULL)		
			{
				BC20_Clear();								
				
				return 0;
			}
		
		HAL_Delay(10);
	}
	
	return 1;

}

void BC20_INQUIRY_INIT(void)					
{	
	while(BC20_SendCmd("AT\r\n", "OK"))//����AT������OK˵��ͨѶ����
	HAL_Delay(500);
	printf("ͨѶ����\r\n");
	while(BC20_SendCmd("AT+CIMI\r\n", "460049700207304"))//��ѯIMSI
	HAL_Delay(500);
	printf("��ѯIMSI��\r\n");
	while(BC20_SendCmd("AT+CGSN=1\r\n", "862177044421215"))//��ѯIMEI
	HAL_Delay(500);
	printf("��ѯIMEI��\r\n");
	while(BC20_SendCmd("AT+CGPADDR\r\n", ""))//��ѯ����IP��ַ
	HAL_Delay(500);
	printf("��ѯ����IP��ַ\r\n");
	while(BC20_SendCmd("AT+CESQ\r\n", ""))//��ѯ�ź�ǿ��
	HAL_Delay(500);
	printf("��ѯ�ź�ǿ��\r\n");
	while(BC20_SendCmd("AT+CGATT?\r\n", "1"))//��ѯ�Ƿ�������
	HAL_Delay(500);
	printf("�Ѹ�������\r\n");
	while(BC20_SendCmd("AT+CEREG?\r\n", "0,1"))//��ѯ�����Ƿ�ע��
	HAL_Delay(500);
	printf("������ע��\r\n");
	while(BC20_SendCmd("AT+CSCON?\r\n", "0,0"))//��ѯ�����Ƿ�����
	HAL_Delay(500);
	printf("����δ����\r\n");
	while(BC20_SendCmd("AT+COPS?\r\n", ""))//��ѯPLMNģʽ
	HAL_Delay(500);
	printf("��ѯPLMNģʽ\r\n");
}


void BC20_Init(void)		//��ʼ��BC20ģ��							
{
	printf("start!");
	
	//BC20��λ
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13,GPIO_PIN_RESET);
	HAL_Delay(500);
	printf("��λ���\r\n");
	HAL_Delay(1000);
	//��ջ�����
	BC20_Clear();
		
	while(BC20_SendCmd("AT\r\n", ""))		//ATָ��
	HAL_Delay(100);
	printf("AT OVER!\r\n");
	
	while(BC20_SendCmd(BC20_SET_VERSION,"" ))//����Э��汾
	HAL_Delay(500);
	printf("Э��汾�������\r\n");

	while(BC20_SendCmd(BC20_ONENET_INFO, ""))	//��mqtt�ͻ���
	HAL_Delay(500);
	printf("�򿪿ͻ������\r\n");
	
	while(BC20_SendCmd(BC20_CONNET_INFO, ""))   //ע�ᵽONENETƽ̨
	HAL_Delay(1000);
	printf("����onenet�ɹ�\r\n");
}

/*void BC20_DISCON(void)	 //��ONENETƽ̨�Ͽ�����
{

	while(BC20_SendCmd("AT+MIPLCLOSE=0\r\n", "OK"))		//ע��ָ��
	HAL_Delay(1000);
	printf("ע���ɹ�!\r\n");

}

void BC20_DELE(void)	 //ɾ������
{

	while(BC20_SendCmd("AT+MIPLDELETE=0\r\n", "OK"))		//ע��ָ��
	HAL_Delay(500);
	printf("ɾ������ɹ�!\r\n");

}

*/
void BC20_SUBS(void)	 //��������
{

	while(BC20_SendCmd(BC20_ONENET_SUB,""))		//���ܶ�������
	HAL_Delay(500);
	printf("SUB OVER!\r\n");

}

void BC20_PUBS(void)	 //����������Ϣ\"dis\":[{\"v\":%d}]
{
	char json_str[150];
//	char *a = "AT+QMTPUB=0,0,0,0,\"$sys/450210/qaq/dp/post/json\",";
  //char *b =	"\"{\"id\": %d,\"dp\": {\"dis\":[{\"v\":%d}]}}\"\r\n";
//	char c [125];
	pub_id =pub_id +1;
	  dta = get_num();
	//sprintf(c, "\"{\"id\": %d,\"dp\": {\"dis\":[{\"v\":%d}]}}\"\r\n", pub_id , dta);
	sprintf(json_str,"AT+QMTPUB=0,0,0,0,\"$sys/450210/qaq/dp/post/json\",\"{\"id\":%d,\"dp\":{\"distance\":[{\"v\": %d,}], \"location\":[{\"v\":{\"lon\":120.91080893628161, \"lat\":31.97762227399866}}]}}\"\r\n", pub_id, dta); 
	//sprintf(json_str,"%s%s",a,c);
	while(BC20_SendCmd(json_str,""))		//���ܶ�������
	HAL_Delay(500);
	printf("PUB OVER!\r\n");
}

void BC20_GPS1(void)	 //��������
{

	while(BC20_SendCmd(BC20_GPS ,""))		//���ܶ�������
	HAL_Delay(500);
	printf("GPS over!\r\n");

}
	
	
