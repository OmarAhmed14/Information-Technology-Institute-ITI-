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

#include "util/delay.h"

int main (void)
{
	LCD_voidConfigDirection();

	LCD_voidInit();

	ADC_voidInit();

	DIO_voidSetPortDitection(DIO_PORTB, OUTPUT_PORT);


	while(1)
	{
		u16 Local_u16ADC0Val = ADC_u16Read(ADC0);
		f32 Local_f32ADC0Val=ADC_f32ADCtoVolt (Local_u16ADC0Val);

		LCD_voidSendCommand(1);

		LM35_voidDisplayVolt(Local_f32ADC0Val*1000);
		LCD_voidWriteString(" mV");

		LCD_voidGoToXY(0,1);
		LM35_voidVoltToTemperature(Local_f32ADC0Val);

		_delay_ms(500);
	}


	return(0);
}
