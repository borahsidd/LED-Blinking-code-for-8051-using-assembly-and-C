#include<reg51.h>
sbit led=P2^0;

////////////////////////////////////////Delay function to generate exactly 20ms delay
void delay20ms()		
{
	TMOD = 0x01;			/* Timer0 delay function */
	TH0 = 0xB8;				/* Load higher 8-bit in TH0 */
	TL0 = 0x0C;				/* Load lower 8-bit in TL0 */
	TR0 = 1;					/* Start timer0 */
	while(TF0 == 0);	/* Wait until timer0 flag set */
	TR0 = 0;					/* Stop timer0 */
	TF0 = 0;					/* Clear timer0 flag */
}
////////////////////////////////////////Delay function
//void delay(int a)
//{
//	int i,j;
//	for (i=0; i<a;i++)
//	{
//		for(j=0; j<1275; j++);
//	}
//}

////////////////////////////////////////Main function

	void main()
	{
		led=0;			//////////////Initialize uc pin
		
	   while(1)
	   {
	    led=1;
			//delay(20);
		  delay20ms();
			led=0;
			//delay(20);
			delay20ms();
	   }
	}		 