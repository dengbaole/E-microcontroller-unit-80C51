# include "reg51.h"

sbit led1 = P2^0;   //¶¨ÒåÌ½Õëµã
sbit led2 = P2^1;
sbit led3 = P2^2;

int main()
{
	led1 = 0;
	
	if(led1)
		led2 = 0;
	else
		led3 =0;
	
	return 0;
}