/*
 * main.c
 *
 *  Created on: Sep 7, 2022
 *      Author: user
 */

#include "Std_Types.h"
#include "Bit_Math.h"

#include "GPTM_Interface.h"

#include "DIO_Interface.h"

void LED(void);

u8 flag=0;

int main (void)
{
	DIO_voidSetPinDirection(DIO_PORTA,PIN0,OUTPUT_PIN);

	SRIG_voidGlopalInterruptEnable();
	GPTM_voidInitCTC0();
	GPTM_voidCTC0CallBack(&LED);

	while (1)
	{
		DIO_voidSetPinValue(DIO_PORTA,PIN0,flag);
	}

	return 0;
}
void LED(void)
{
	static u16 Local_u16CounterOverFlow=0;
	Local_u16CounterOverFlow++;

	if (Local_u16CounterOverFlow==5000)
	{
		Toggle_Bit(flag,0);
		Local_u16CounterOverFlow=0;
	}
}
