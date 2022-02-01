#include <reg51.h>
//#include "8051_delay.h"

sbit LED_1 = P1^0;		/* set LED on port1 */ 

void External_1_ISR() interrupt 2  
{
	LED_1 = ~LED_1;
}
void main()
{
//	P3 = 0X0C;
	
	EA  = 1;					/* Enable global interrupt */
	EX1 = 1;      		/* Enable Ext. interrupt0 */			
	IT1 = 1;      		/* Select Ext. interrupt0 on falling edge */ 	

	while(1);
}
