/*
 * main.c
 *
 *  Created on: Sep 4, 2022
 *      Author: user
 */


#include "Std_Types.h"
#include "Bit_Math.h"

#include "DIO_interface.h"
#include "LCD_Interface.h"
#include "LCD_Configure.h"

int main(void)
{
	/* LCD */
	LCD_voidConfigDirection();
	LCD_voidInit();
	/* Motor */
	DIO_voidSetPinDirection(DIO_PORTD,PIN3,OUTPUT_PIN);
	DIO_voidSetPinDirection(DIO_PORTD,PIN4,OUTPUT_PIN);
	/* Button */
	DIO_voidSetPinDirection(DIO_PORTD,PIN5,INPUT_PIN);
	DIO_voidPullUpPin(DIO_PORTD,PIN5);
	u8 Local_u8indecator1=0;
	u8 Local_u8indecator2=0;

	while (1)
	{
		if (DIO_u8GetPinValue(DIO_PORTD,PIN5)==HIGH)
		{
			DIO_voidSetPinValue(DIO_PORTD,PIN4,HIGH);
			DIO_voidSetPinValue(DIO_PORTD,PIN3,LOW);
			if (Local_u8indecator1==0)
			{
				LCD_voidSendCommand(1);
				LCD_voidWriteString("Anti Clockwise");
				Local_u8indecator1++;
				Local_u8indecator2=0;
			}

		}

		else
		{
			DIO_voidSetPinValue(DIO_PORTD,PIN3,HIGH);
			DIO_voidSetPinValue(DIO_PORTD,PIN4,LOW);
			if (Local_u8indecator2==0)
			{
				LCD_voidSendCommand(1);
				LCD_voidWriteString("Clockwise");
				Local_u8indecator2++;
				Local_u8indecator1=0;
			}
		}
	}

}
