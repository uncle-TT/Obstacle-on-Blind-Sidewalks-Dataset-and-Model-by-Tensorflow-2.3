#include "stm32h7xx_hal.h"
#include "BC20.h"
#include "usart.h"
#include "gpio.h"
#include <string.h>
#include <stdio.h>
#include "tim.h"

#define mqtt_username        "450210"                //产品ID
#define mqtt_devid     		 "qaq"                    //设备名称
#define server_adder				"183.230.40.96"
#define server_port					"1883"



//鉴权信息
#define mqtt_password 		"version=2018-10-31&res=products%2F450210%2Fdevices%2Fqaq&et=1754555299&method=md5&sign=%2BKhqRoIL%2FJ1Uzun7mkfj7Q%3D%3D" //鉴权信息
#define BC20_SET_VERSION	  "AT+QMTCFG=\"version\",0,4\r\n"   //设置连接协议版本，为3.1.1
#define BC20_ONENET_INFO  	  "AT+QMTOPEN=0,\"mqtts.heclouds.com\",1883\r\n"   //打开mqtt客户端
#define BC20_CONNET_INFO      "AT+QMTCONN=0,\"qaq\",\"450210\",\"version=2018-10-31&res=products%2F450210%2Fdevices%2Fqaq&et=1754555299&method=md5&sign=%2BKhqRoIL%2FJ1Uzun7mkfj7Q%3D%3D\"\r\n" //连接oneent平台

//
#define mqtt_sub_topic				"\"$sys/450210/qaq/dp/post/json/+\""		//订阅用
#define mqtt_pub_topic				"\"$sys/450210/qaq/dp/post/json\"	"			//发布用
#define BC20_GPS               "AT+QMTPUB=0,0,0,0,\"$sys/450210/qaq/dp/post/json\",\"{\"id\":151,\"dp\":{\"location1\":[{\"v\":{\"lon\":120.91081495770261, \"lat\":31.978876992524356}}]}}\"\r\n"

#define BC20_ONENET_SUB       "AT+QMTSUB=0,1,\"$sys/450210/qaq/dp/post/json/+\",1\r\n"
//#define BC20_ONENET_PUB 			"AT+QMTPUB=0,0,0,0,\"$sys/450210/qaq/dp/post/json\","
//#define BC20_ONENET_DTA				"\"{\"id\": 123,\"dp\": {\"dis\":[{\"v\":%d}]}}\"\r\n"


unsigned char BC20_buf[128];
unsigned short BC20_cnt = 0, BC20_cntPre = 0;
unsigned  int pub_id=0,dta;

//清空缓存
void BC20_Clear(void)
{

	memset(BC20_buf, 0, sizeof(BC20_buf));
	BC20_cnt = 0;

}


//发送指令检查指令
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
	while(BC20_SendCmd("AT\r\n", "OK"))//发送AT，返回OK说明通讯正常
	HAL_Delay(500);
	printf("通讯正常\r\n");
	while(BC20_SendCmd("AT+CIMI\r\n", "460049700207304"))//查询IMSI
	HAL_Delay(500);
	printf("查询IMSI码\r\n");
	while(BC20_SendCmd("AT+CGSN=1\r\n", "862177044421215"))//查询IMEI
	HAL_Delay(500);
	printf("查询IMEI码\r\n");
	while(BC20_SendCmd("AT+CGPADDR\r\n", ""))//查询本机IP地址
	HAL_Delay(500);
	printf("查询本机IP地址\r\n");
	while(BC20_SendCmd("AT+CESQ\r\n", ""))//查询信号强度
	HAL_Delay(500);
	printf("查询信号强度\r\n");
	while(BC20_SendCmd("AT+CGATT?\r\n", "1"))//查询是否附着网络
	HAL_Delay(500);
	printf("已附着网络\r\n");
	while(BC20_SendCmd("AT+CEREG?\r\n", "0,1"))//查询网络是否注册
	HAL_Delay(500);
	printf("网络已注册\r\n");
	while(BC20_SendCmd("AT+CSCON?\r\n", "0,0"))//查询网络是否连接
	HAL_Delay(500);
	printf("网络未连接\r\n");
	while(BC20_SendCmd("AT+COPS?\r\n", ""))//查询PLMN模式
	HAL_Delay(500);
	printf("查询PLMN模式\r\n");
}


void BC20_Init(void)		//初始化BC20模块							
{
	printf("start!");
	
	//BC20复位
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13,GPIO_PIN_RESET);
	HAL_Delay(500);
	printf("复位完成\r\n");
	HAL_Delay(1000);
	//清空缓冲区
	BC20_Clear();
		
	while(BC20_SendCmd("AT\r\n", ""))		//AT指令
	HAL_Delay(100);
	printf("AT OVER!\r\n");
	
	while(BC20_SendCmd(BC20_SET_VERSION,"" ))//设置协议版本
	HAL_Delay(500);
	printf("协议版本设置完成\r\n");

	while(BC20_SendCmd(BC20_ONENET_INFO, ""))	//打开mqtt客户端
	HAL_Delay(500);
	printf("打开客户端完成\r\n");
	
	while(BC20_SendCmd(BC20_CONNET_INFO, ""))   //注册到ONENET平台
	HAL_Delay(1000);
	printf("连接onenet成功\r\n");
}

/*void BC20_DISCON(void)	 //与ONENET平台断开连接
{

	while(BC20_SendCmd("AT+MIPLCLOSE=0\r\n", "OK"))		//注销指令
	HAL_Delay(1000);
	printf("注销成功!\r\n");

}

void BC20_DELE(void)	 //删除对象
{

	while(BC20_SendCmd("AT+MIPLDELETE=0\r\n", "OK"))		//注销指令
	HAL_Delay(500);
	printf("删除对象成功!\r\n");

}

*/
void BC20_SUBS(void)	 //订阅请求
{

	while(BC20_SendCmd(BC20_ONENET_SUB,""))		//接受订阅请求
	HAL_Delay(500);
	printf("SUB OVER!\r\n");

}

void BC20_PUBS(void)	 //发布订阅消息\"dis\":[{\"v\":%d}]
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
	while(BC20_SendCmd(json_str,""))		//接受订阅请求
	HAL_Delay(500);
	printf("PUB OVER!\r\n");
}

void BC20_GPS1(void)	 //订阅请求
{

	while(BC20_SendCmd(BC20_GPS ,""))		//接受订阅请求
	HAL_Delay(500);
	printf("GPS over!\r\n");

}
	
	
