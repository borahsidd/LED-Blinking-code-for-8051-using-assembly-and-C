#include<reg51.h>
sbit led=P2^0;

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
		led=0;			//////////////Initialize uc pin
		
	   while(1)
	   {
	    led=1;
		  delay(20);
			led=0;
			delay(20);
	   }
}		 