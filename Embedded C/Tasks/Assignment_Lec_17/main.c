/*
 * main.c
 *
 *  Created on: Sep 6, 2022
 *      Author: user
 */
#include "Std_Types.h"
#include "Bit_Math.h"

#include "ADC_Registers.h"
#include "ADC_Interface.h"

#include "LCD_Interface.h"

#include "DIO_Interface.h"

#include "LM35.h"

int main (void)
{
	LCD_voidConfigDirection();

	LCD_voidInit();

	ADC_voidInit();

	DIO_voidSetPortDitection(DIO_PORTB, OUTPUT_PORT);

	LM35_voidDisplayBits(ADC0);

	u16 Local_u16ADCVal = ADC_u16Read(ADC0);

	LM35_voidDisplayVolt(Local_u16ADCVal);

	while(1)
	{

	}


	return(0);
}
