/*
 * LM35.c
 *
 *  Created on: Sep 6, 2022
 *      Author: user
 */
#include "Std_Types.h"
#include "Bit_Math.h"

#include "ADC_Registers.h"
#include "ADC_Interface.h"

#include "LCD_Interface.h"
#include "LCD_Configure.h"

#include "DIO_Interface.h"

#include "LM35.h"

void LM35_voidDisplayBits(ADC_CHANALS_options_t Copy_u8ADCchannel)
{
	u16 Local_u16Bits =ADC_u16Read(Copy_u8ADCchannel);
	u8 Local_u16Index=1;

	while(Local_u16Index<=10)
	{
		if (Local_u16Bits&0b1000000000)
			LCD_voidWriteNumber(1);
		else
			LCD_voidWriteNumber(0);

		Local_u16Bits=Local_u16Bits<<1;
		Local_u16Index++;
	}
}

void LM35_voidDisplayVolt(u16 Copy_u16ADCVal)
{
	f32 Local_u16Volt = ADC_f32ADCtoVolt(Copy_u16ADCVal);
	u8 Local_u8IntPart =Local_u16Volt;
	u8 Local_u8FloatPart;
	u8 Local_u8Index=255;
	u8 Local_u8Arr[5];
	while (Local_u8IntPart%10 !=0)
	{
		Local_u8Index++;
		Local_u8Arr[Local_u8Index]=Local_u8IntPart%10;
		Local_u8IntPart/=10;
	}

	LCD_voidGoToXY(0,1);

	for (u8 Local_u8Counter=Local_u8Index;Local_u8Counter!=255;Local_u8Counter--)
	{
		LCD_voidWriteNumber(Local_u8Arr[Local_u8Counter]);
	}

	LCD_voidSendData('.');

	Local_u8FloatPart=Local_u16Volt*10.0;
	Local_u8FloatPart%=10;

	LCD_voidWriteNumber(Local_u8FloatPart);

	LCD_voidWriteString(" Volt");
}

