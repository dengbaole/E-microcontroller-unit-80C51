
# include "reg51.h"
typedef unsigned char u8;
typedef unsigned int u16;

sbit led1 = P2^0;
sbit k1 = P3^0;

void delay(u16 i)
{
	while(i--);
}
void keypros()
{
	if(k1)
	{
		delay(5);   //������������
		if(k1)
		{
			led1 = ~led1;
		}
		while(!k1);  //�жϰ����Ƿ��ɿ�
	}
}


int main()
{
	while(1)
	{
		keypros();   
	}
}