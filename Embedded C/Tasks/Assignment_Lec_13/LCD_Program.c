/*
 * LCD_Program.c
 *
 *  Created on: Aug 31, 2022
 *      Author: user
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_Interface.h"

#include "LCD_Configure.h"
#include "LCD_Interface.h"

#include <util/delay.h>


void LCD_voidSendCommand(u8 Copy_u8Command)
{
	DIO_voidSetPinValue(LCD_CTRL_PORT,LCD_RS_PIN,LOW);
	/* Set Rs for LOW for send command*/

	DIO_voidSetPinValue(LCD_CTRL_PORT,LCD_RW_PIN,LOW);
	/* Set Rw for LOW for write*/

	DIO_voidSetPortValue (LCD_DATA_PORT,Copy_u8Command);
	/*Send command*/

	DIO_voidSetPinValue(LCD_CTRL_PORT,LCD_E_PIN,HIGH);
	 _delay_ms(2);
	 DIO_voidSetPinValue(LCD_CTRL_PORT,LCD_E_PIN,LOW);
	/*Enable LCD*/
}

void LCD_voidSendData(u8 Copy_u8Data)
{
	DIO_voidSetPinValue(LCD_CTRL_PORT,LCD_RS_PIN,HIGH);
	/* Set Rs for HIGH for send Data*/

	DIO_voidSetPinValue(LCD_CTRL_PORT,LCD_RW_PIN,LOW);
	/* Set Rw for LOW for write*/

	DIO_voidSetPortValue (LCD_DATA_PORT,Copy_u8Data);
	/*Send DATA*/

	DIO_voidSetPinValue(LCD_CTRL_PORT,LCD_E_PIN,HIGH);
	 _delay_ms(2);
	DIO_voidSetPinValue(LCD_CTRL_PORT,LCD_E_PIN,LOW);
	/*Enable LCD*/

}

void LCD_voidInit()
{
	/*Wait after the power on for 35 ms*/
	_delay_ms(35);

	/*Function set
	 * 2 lines *** 5*8 pixels size*/
	LCD_voidSendCommand(0b00111100);

	/*Display On/OFF
	 * Display ON *** cursor OFF *** Blink OFF*/
	LCD_voidSendCommand(0b00001100);

	/*Display Clear*/
	LCD_voidSendCommand(0b00000001);

}

void LCD_voidConfigDirection()
{
	/* PINS Ditection */
	DIO_voidSetPortDitection (LCD_DATA_PORT,OUTPUT_PORT);
	DIO_voidSetPinDirection (LCD_CTRL_PORT,LCD_RS_PIN,HIGH);
	DIO_voidSetPinDirection (LCD_CTRL_PORT,LCD_RW_PIN,HIGH);
	DIO_voidSetPinDirection (LCD_CTRL_PORT,LCD_E_PIN,HIGH);
}

void LCD_voidWriteString(s8 *Copy_u8String)
{
	u8 Local_Index =0;
	while (Copy_u8String[Local_Index]!=0)
	{
		LCD_voidSendData (Copy_u8String[Local_Index]);
		Local_Index++;
	}
}

void LCD_voidWriteNumber(u8 Copy_u8Number)
{
	switch (Copy_u8Number)
	{
	case 0:
		LCD_voidSendData('0');
		break;
	case 1:
		LCD_voidSendData('1');
		break;
	case 2:
		LCD_voidSendData('2');
		break;
	case 3:
		LCD_voidSendData('3');
		break;
	case 4:
		LCD_voidSendData('4');
		break;
	case 5:
		LCD_voidSendData('5');
		break;
	case 6:
		LCD_voidSendData('6');
		break;
	case 7:
		LCD_voidSendData('7');
		break;
	case 8:
		LCD_voidSendData('8');
		break;
	case 9:
		LCD_voidSendData('9');
		break;
	default:
		break;

	}
}

