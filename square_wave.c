#include<reg51.h>
void Delay(void);
void main()
{
	P0=0xff;
	Delay();
	P0=0x00;
	Delay();
}
void Delay(void)
{
	TMOD=0x01;
	TH0=0xDC;
	TL0=0x00;
	TR0=1;
	while(TF0==0);
	TF0=0;
	TR0=0;
}

5s Delay= 4FBE
10s Delay = DC00
15s Delay = CA00
20s Delay = B7FF
