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

#include "Calculator.h"

u8 Local_u8Counter1=0;
u8 Local_u8Counter2=0;
u8 arr[]={'+','-','*','/'};
u8 u8LocalIndex=0;
u8* ptr;

int main ()
{
	// Configure of buttons
	DIO_voidSetPinDirection (DIO_PORTD,PIN3,INPUT_PIN);
	DIO_voidSetPinDirection (DIO_PORTD,PIN4,INPUT_PIN);
	DIO_voidSetPinDirection (DIO_PORTD,PIN5,INPUT_PIN);
	DIO_voidPullUpPin (DIO_PORTD,PIN3);  /* UP PIN*/
	DIO_voidPullUpPin (DIO_PORTD,PIN4);  /* DOWN PIN */
	DIO_voidPullUpPin (DIO_PORTD,PIN5);  /* ENTER PIN */

	/* LCD */
	LCD_voidConfigDirection();
	LCD_voidInit ();



	while (1)
	{
		Local_u8Counter1=0;
		Local_u8Counter2=0;
		u8LocalIndex=0;

		Calc_voidFirst_digit();
		_delay_ms(500);
		Calc_voidsign ();
		_delay_ms(500);
		Calc_voidSecond_digit();
		_delay_ms(100);
		LCD_voidSendData('=');
		Calc_voidDisplayResult ();
		_delay_ms(30000);
		LCD_voidSendCommand(1);
	}

	return 0;
}


