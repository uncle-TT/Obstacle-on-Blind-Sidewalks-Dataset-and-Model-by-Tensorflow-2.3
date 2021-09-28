#ifndef _BC20_H_
#define _BC20_H_

#define REV_OK		0	//������ɱ�־
#define REV_WAIT	1	//����δ��ɱ�־


void BC20_Init(void);

void BC20_Clear(void);

void BC20_SendData(unsigned char *data);

unsigned char *BC20_GetIPD(unsigned short timeOut);

int BC20_SendMes(char *mes, char *res);

void BC20_GNSS_INIT(void);					//��ʼ��gps

unsigned char BC20_GNSS_GET(void);//��ȡgps����

void BC20_DISCON(void);

void BC20_DELE(void);

void BC20_SUBS(void);	

void BC20_PUBS(void);

void BC20_GPS1(void);

#endif
