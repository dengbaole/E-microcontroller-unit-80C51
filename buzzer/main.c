# include "reg51.h"
#include "intrins.h"
typedef unsigned char u8;
typedef unsigned int u16;

sbit beep = P1^5;

void delay(u16 i)
{
	while(i--);
}


int main()
{
	while(1)
	{
		beep = ~beep;   //产生低电平脉冲
		delay(10);
	}
}