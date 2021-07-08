# include "reg51.h"
typedef unsigned char u8;
typedef unsigned int u16;

sbit led1 = P2^0;
sbit led2 = P2^1;
sbit led3 = P2^2;

void delay(u16 i)
{
	while(i--);
}


int main()
{
	while(1)
	{
		led1 = 0;
		delay(50000);    //450msºóÏ¨Ãğ
		led1 = 1;
		delay(50000);    //450msºóµãÁÁ
	}
	
}





//????2
void delay()
{
  unsigned int i = 0;
  for(i=0,i<50000,i++)
       ;
}