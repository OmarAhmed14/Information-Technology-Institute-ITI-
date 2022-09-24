/*
 * main.c
 *
 *  Created on: Aug 31, 2022
 *      Author: user
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_Interface.h"

#include "LCD_Interface.h"

#include <util/delay.h>



//u8 Local_u8Counter1=0;
//u8 Local_u8Counter2=0;
//u8 arr[]={'+','-','*','/'};
//u8 u8LocalIndex=0;
u8 u8LocalDelay=0;

int main ()
{
	// Configure of buttons
//	DIO_voidSetPinDirection (DIO_PORTD,PIN3,INPUT_PIN);
//	DIO_voidSetPinDirection (DIO_PORTD,PIN4,INPUT_PIN);
//	DIO_voidSetPinDirection (DIO_PORTD,PIN5,INPUT_PIN);
//	DIO_voidPullUpPin (DIO_PORTD,PIN3);  /* UP PIN*/
//	DIO_voidPullUpPin (DIO_PORTD,PIN4);  /* DOWN PIN */
//	DIO_voidPullUpPin (DIO_PORTD,PIN5);  /* ENTER PIN */

	/*Hamoksha*/
	u8 Local_u8ArrPatterns1[]={15,17,30,4,14,21,10,17};
	u8 Local_u8ArrPatterns2[]={15,17,30,6,4,12,10,17};
	u8 Local_u8ArrPatterns3[]={15,17,30,12,4,6,10,17};
	u8 Local_u8ArrPatterns4[]={14,0,0,0,0,0,0,0};
	u8 Local_u8ArrPatterns5[]={31,31,3,0,0,0,0,0};
	u8 Local_u8ArrPatterns6[]={0,0,0,5,30,5,0,0};
	u8 Local_u8ArrPatterns7[]={0,0,0,14,11,14,0,0};
	/* LCD */
	LCD_voidConfigDirection();
	LCD_voidInit ();
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns1,0,0,0);
	LCD_voidGoToXY(1,0);
	LCD_voidWriteString("Hi,Iam Hamoksha");
	_delay_ms(1000);
	LCD_voidSendCommand(1);
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns1,0,0,0);
	LCD_voidWriteString(" I can run");
	_delay_ms(1000);
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns1,0,0,0);
	_delay_ms(1000);
	LCD_voidSendCommand(1);
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns1,5,0,0);
	_delay_ms(100);
	LCD_voidSendCommand(1);
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns1,10,0,0);
	_delay_ms(100);
	LCD_voidSendCommand(1);
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns1,15,0,0);
	_delay_ms(100);
	LCD_voidSendCommand(1);
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns1,10,0,0);
	_delay_ms(100);
	LCD_voidSendCommand(1);
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns1,5,0,0);
	_delay_ms(100);
	LCD_voidSendCommand(1);
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns1,0,0,0);
	_delay_ms(100);
	LCD_voidWriteString(" I can dance");
	_delay_ms(1000);
	while (u8LocalDelay<10)
	{
		LCD_voidSendCommand(1);
		LCD_voidWriteSpecialChar(Local_u8ArrPatterns2,0,0,1);
		_delay_ms(100);
		LCD_voidWriteSpecialChar(Local_u8ArrPatterns3,0,0,2);
		_delay_ms(100);
		u8LocalDelay++;
	}

	LCD_voidSendCommand(1);
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns1,0,0,0);
	_delay_ms(100);
	LCD_voidWriteString(" Don't Kill Me");
	_delay_ms(1000);
	LCD_voidSendCommand(1);
	/*Gun*/
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns1,0,0,0);
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns5,14,0,4);
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns4,13,0,3);
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns4,11,0,3);
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns4,9,0,3);
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns4,7,0,3);
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns4,5,0,3);
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns4,3,0,3);
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns4,1,0,3);

	_delay_ms(100);
	/*Death*/
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns7,0,1,5);
	LCD_voidWriteSpecialChar(Local_u8ArrPatterns6,1,1,6);
	//LCD_voidSendCommand(1);
//	LCD_voidWriteSpecialChar(Local_u8ArrPatterns2,4,1,1);
//	LCD_voidWriteSpecialChar(Local_u8ArrPatterns3,3,1,2);


	while (1)
	{
//		Local_u8Counter1=0;
//		Local_u8Counter2=0;
//		u8LocalIndex=0;
//
//		Calc_voidFirst_digit();
//		_delay_ms(500);
//		Calc_voidsign ();
//		_delay_ms(500);
//		Calc_voidSecond_digit();
//		_delay_ms(100);
//		LCD_voidSendData('=');
//		Calc_voidDisplayResult ();
//		_delay_ms(30000);
//		LCD_voidSendCommand(1);
	}

	return 0;
}


