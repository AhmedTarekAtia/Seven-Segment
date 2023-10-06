/*
 * SEVEN.c
 *
 *  Created on: Sep 11, 2021
 *      Author: Eng Ahmed Tarek
 */

#include <avr/io.h>
#include <avr/delay.h>
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "SEV_NUM.h"


void main(void)
{

	int num[10]={ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE};
DDRB=0b11111111;
DDRA=0b11111111;

	while(1)
	{
for (int x=0,i=9 ;(x<=9)&&(i>=0);x++,i--)
{
	PORTB=~num[x];
	PORTA=~num[i];
		_delay_ms(1000);
}

	}

}
