/*
 * SEVEN_COUNT.c
 *
 *  Created on: Sep 13, 2021
 *      Author: Eng Ahmed Tarek
 */


#include <avr/io.h>
#include <avr/delay.h>
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "SEV_NUM.h"


void main(void)
{

	char num[10]={ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE};
DDRB=0b11111111;
DDRA=0b11111111;

	while(1)
	{
for (int x=0 ;x<=9;x++)
{
	PORTB=~num[x];

	for (int i=0;i<=9;i++)
	{
	PORTA=~num[i];
		_delay_ms(1000);
}

	}

}
}


