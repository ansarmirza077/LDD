//swap nibbles 
#include<stdio.h>

int main()
{
	int a=120;
	int b1=a & 0xf;
	int b2=(a & 0xf0)>>4;
	int swap =   (b2<<4) | (b1<<0);
	printf("%x %x\n",b1,b2);
	printf("%x",swap);
}


