#ifndef __OLED_H
#define __OLED_H 

#include "stdlib.h"	
#include <stdarg.h>

#define OLED_CMD  0	//д����
#define OLED_DATA 1	//д����

#define OLED_ADDRESS 0x78

/* �� */
#define line0 0
#define line1 16
#define line2 32
#define line3 48

void OLED_ShowChinese(unsigned char x,unsigned char y,unsigned char num,unsigned char size1);
void OLED_ClearPoint(unsigned char x,unsigned char y);
void OLED_ColorTurn(unsigned char i);
void OLED_DisplayTurn(unsigned char i);
void Send_Byte(unsigned char dat);
void OLED_WR_Byte(unsigned char dat,unsigned char mode);
void OLED_DisPlay_On(void);
void OLED_DisPlay_Off(void);
void OLED_Refresh_Gram(void);
void OLED_Clear(void);
void OLED_DrawPoint(unsigned char x,unsigned char y,unsigned char t);
void OLED_ShowChar(unsigned char x,unsigned char y,unsigned char chr,unsigned char size,unsigned char mode);
void OLED_ShowString(unsigned char x,unsigned char y,const unsigned char *p,unsigned char size);
void OLED_ShowNum(unsigned char x,unsigned char y,unsigned int num,unsigned char len,unsigned char size1);
void OLED_WR_BP(unsigned char x,unsigned char y);
void OLED_Init(void);

void OLED_ShowString_16(unsigned char x,unsigned char y,const unsigned char *p,unsigned char size);
void OLED_printf(unsigned char line,unsigned char world,unsigned char size,const char *fmt, ...);

#endif


