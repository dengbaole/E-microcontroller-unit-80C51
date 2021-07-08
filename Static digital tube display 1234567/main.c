# include "reg51.h"
#include "intrins.h"
typedef unsigned char u8;
typedef unsigned int u16;

sbit LSA2 = P2^2;
sbit LSA3 = P2^3;
sbit LSA4 = P2^4;

u8 code smgduan[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,
                   0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};
//分别表示0123456789abcdef
//code是用来减少数据大小


int main()
{
	LSA2 = 0;
	LSA3 = 0;
	LSA4 = 0;
	P0 = smgduan[0];
	
	
	return 0;
	
}
