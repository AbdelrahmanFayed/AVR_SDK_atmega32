/*
 * GPIO_driver.c
 *
 * Created: 2/4/2020 1:56:54 PM
 *  Author: Abd Elrahman
 */ 


#include <avr/io.h>
#include "GPIO_driver.h"
#include <util/delay.h>

int main(void)
{
	portMode(C,INPUT);
	portMode(D,OUTPUT);
    while(1)
    {
         ecore_u8 x=0 ;
		 portRead(C,&x);
		 if(x)
			portWrite(D,x);
		 else
			portWrite(D,x);
			
		
    }
}