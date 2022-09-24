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

//u8 Global_u8Delete=0;

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

void LM35_voidDisplayVolt(f32 Local_f32Volt)
{
	u16 Local_u8IntPart =Local_f32Volt; //200.19
	u16 Local_u8FloatPart=Local_f32Volt*10.0; //2001.9
	u8 Local_u8Index=255;
	u8 Local_u8Arr[5];


	if (Local_u8IntPart==0)
			LCD_voidWriteNumber(0);

	else
	{
		while (Local_u8IntPart)
		{
			Local_u8Index++;
			Local_u8Arr[Local_u8Index]=Local_u8IntPart%10;
			Local_u8IntPart/=10;
		}

		for (u8 Local_u8Counter=Local_u8Index;Local_u8Counter!=255;Local_u8Counter--)
		{
			LCD_voidWriteNumber(Local_u8Arr[Local_u8Counter]);
		}
	}

	LCD_voidSendData('.');

	Local_u8FloatPart%=10;

	LCD_voidWriteNumber(Local_u8FloatPart);
}

f32 LM35_voidVoltToTemperature(f32 Copy_f32ADCVolt)
{
	f32 Local_f32Temp =Copy_f32ADCVolt*100;
	LM35_voidDisplayVolt (Local_f32Temp);
	LCD_voidSendData(0b11011111);
	LCD_voidSendData('C');
	return Local_f32Temp;

}
