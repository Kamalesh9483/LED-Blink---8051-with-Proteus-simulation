#include "reg51.h"

// setting LED to  Port P1.0 
sbit led01 = P1^0; 
sbit led02 = P1^1;

// Function to time delay in milli seconds
void delay(unsigned int count)
{
	int i,j;
	for(i=0; i<count; i++)
	{
		for(j=0; j<1275; j++)
		{
		}
	}
}


void main()
{
	while(1)
	{
		led01 = 1;
		led02 = 0;
		delay(1000);
		led01 = 0;
		led02 = 1;
		delay(1000);
	}
}
	