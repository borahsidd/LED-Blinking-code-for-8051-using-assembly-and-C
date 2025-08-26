#include <reg51.h>
#define led P2

////////////////////////////////////////Delay function
void delay(int a)
{
	int i,j;
	for (i=0; i<a;i++)
	{
		for(j=0; j<1275; j++);
	}
}
////////////////////////////////////////Main function

	void main()
	{
		led=0x00;			//////////////Initialize uc pin
		
	   while(1)
	   {
	    led=0x55;
		  delay(100);
			led=0xAA;
			delay(100);
	   }
}		 