/*
 * Calculator.c
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

#include <stdlib.h>

extern u8 Local_u8Counter1,Local_u8Counter2,u8LocalIndex,arr[]; u8*ptr;

void Calc_voidFirst_digit ()
{
		LCD_voidWriteNumber(Local_u8Counter1);
	do{
		if (Local_u8Counter1==9 && !DIO_u8GetPinValue(DIO_PORTD,PIN3))
		{
			_delay_ms(250);
			LCD_voidSendCommand(1);
			LCD_voidWriteNumber(0);
			Local_u8Counter1=0;
		}
		else if (Local_u8Counter1==0 && !DIO_u8GetPinValue(DIO_PORTD,PIN4))
		{
			_delay_ms(250);
			Local_u8Counter1=9;
			LCD_voidSendCommand(1);
			LCD_voidWriteNumber(Local_u8Counter1);
		}
		if (!DIO_u8GetPinValue(DIO_PORTD,PIN3) && Local_u8Counter1!=9)
		{
			_delay_ms(250);
			Local_u8Counter1++;
			LCD_voidSendCommand(1);
			LCD_voidWriteNumber(Local_u8Counter1);
		}
		else if (!DIO_u8GetPinValue(DIO_PORTD,PIN4) && Local_u8Counter1!=0)
		{
			_delay_ms(250);
			Local_u8Counter1--;
			LCD_voidSendCommand(1);
			LCD_voidWriteNumber(Local_u8Counter1);
		}
	}while (DIO_u8GetPinValue(DIO_PORTD,PIN5));
}

void Calc_voidSecond_digit ()
{
		LCD_voidWriteNumber(Local_u8Counter2);
	do{
		if (Local_u8Counter2==9 && !DIO_u8GetPinValue(DIO_PORTD,PIN3))
		{
			_delay_ms(250);
			LCD_voidSendCommand(1);
			LCD_voidWriteNumber(Local_u8Counter1);
			LCD_voidSendData(arr[u8LocalIndex]);
			LCD_voidWriteNumber(0);
			Local_u8Counter2=0;
		}
		else if (Local_u8Counter2==0 && !DIO_u8GetPinValue(DIO_PORTD,PIN4))
		{
			_delay_ms(250);
			Local_u8Counter2=9;
			LCD_voidSendCommand(1);
			LCD_voidWriteNumber(Local_u8Counter1);
			LCD_voidSendData(arr[u8LocalIndex]);
			LCD_voidWriteNumber(Local_u8Counter2);
		}
		if (!DIO_u8GetPinValue(DIO_PORTD,PIN3) && Local_u8Counter2!=9)
		{
			_delay_ms(250);
			Local_u8Counter2++;
			LCD_voidSendCommand(1);
			LCD_voidWriteNumber(Local_u8Counter1);
			LCD_voidSendData(arr[u8LocalIndex]);
			LCD_voidWriteNumber(Local_u8Counter2);
		}
		else if (!DIO_u8GetPinValue(DIO_PORTD,PIN4) && Local_u8Counter2!=0)
		{
			_delay_ms(250);
			Local_u8Counter2--;
			LCD_voidSendCommand(1);
			LCD_voidWriteNumber(Local_u8Counter1);
			LCD_voidSendData(arr[u8LocalIndex]);
			LCD_voidWriteNumber(Local_u8Counter2);
		}
	}while (DIO_u8GetPinValue(DIO_PORTD,PIN5));
}

void Calc_voidsign ()
{
	LCD_voidSendData(arr[u8LocalIndex]);
do{
	if (u8LocalIndex==3 && !DIO_u8GetPinValue(DIO_PORTD,PIN3))
	{
		_delay_ms(250);
		u8LocalIndex=0;
		LCD_voidSendCommand(1);
		LCD_voidWriteNumber(Local_u8Counter1);
		LCD_voidSendData(arr[u8LocalIndex]);
	}
	else if (u8LocalIndex==0 && !DIO_u8GetPinValue(DIO_PORTD,PIN4))
	{
		_delay_ms(250);
		u8LocalIndex=3;
		LCD_voidSendCommand(1);
		LCD_voidWriteNumber(Local_u8Counter1);
		LCD_voidSendData(arr[u8LocalIndex]);
	}
	if (!DIO_u8GetPinValue(DIO_PORTD,PIN3) && u8LocalIndex!=3)
	{
		_delay_ms(250);
		u8LocalIndex++;
		LCD_voidSendCommand(1);
		LCD_voidWriteNumber(Local_u8Counter1);
		LCD_voidSendData(arr[u8LocalIndex]);

	}
	else if (!DIO_u8GetPinValue(DIO_PORTD,PIN4) && u8LocalIndex!=0)
	{
		_delay_ms(250);
		u8LocalIndex--;
		LCD_voidSendCommand(1);
		LCD_voidWriteNumber(Local_u8Counter1);
		LCD_voidSendData(arr[u8LocalIndex]);
	}
}while (DIO_u8GetPinValue(DIO_PORTD,PIN5));
}

void Calc_voidDisplayResult ()
{
	u8 Local_u8Result; u8 arr [2];s16 i=0;
	if (Local_u8Counter2==0 && u8LocalIndex==3)
	{
		LCD_voidSendCommand(1);
		LCD_voidWriteString("***Not Valid***");
	}

	else
	{
		switch (u8LocalIndex)
		{
		case 0:
			Local_u8Result = Local_u8Counter1 + Local_u8Counter2;
			break;
		case 1:
			Local_u8Result = Local_u8Counter1 - Local_u8Counter2;
			break;
		case 2:
			Local_u8Result = Local_u8Counter1 * Local_u8Counter2;
			break;
		case 3:
			Local_u8Result = Local_u8Counter1 / Local_u8Counter2;
			break;
		default:
			break;
		}
	if (Local_u8Result > 9)
	{
		u8 n;
		while (Local_u8Result!=0) //10
		{
			n=Local_u8Result %10; //0 1
			arr[i]=n;   // 0 1
			Local_u8Result/=10; // 1 0
			i++;
		}
		i-=1;
		while (i>=0)
		{
			LCD_voidWriteNumber(arr[i]); //1 0
			i--;
		}
	}
	else
		LCD_voidWriteNumber (Local_u8Result);
	}

}
