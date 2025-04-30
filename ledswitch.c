#include<reg51.h>
sbit LED_pin=P2^0;
sbit switch_pin=P0^1;
void main(void)
{
	
	while(1)
	{
		if(switch_pin==1)
		{
			LED_pin=1;
		}
		else
		{
			LED_pin=0;
		}
	}
}
