/*
 * main.c
 *
 *  Created on: Sep 1, 2022
 *      Author: user
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_Interface.h"

#include "Key_Pad.Interface.h"

#include "LCD_Interface.h"

#include "LCD_Configure.h"

#include "Counter_Interface.h"

#include <util/delay.h>

u8 Global_u8ArrowPattern[]={4,10,31,4,4,4,4,4};
u8 Local_u8HamokshaArrPatterns[]={15,17,30,4,14,21,10,17};


int main ()
{
	LCD_voidConfigDirection();
	LCD_voidInit();
	KeyPad_voidInit();
	LCD_voidGoToXY(4,0);
	LCD_voidWriteString("00:00:00");
	LCD_voidWriteSpecialChar(Global_u8ArrowPattern,4,1,PATTERN_0);
	Counter_voidHrs();
	Counter_voidMins();
	Counter_voidseconds();
	_delay_ms(2000);
	Counter_voidDownseconds();
	Counter_voidDownMins();
	Counter_voidDownHrs();
	_delay_ms(100);
	Counter_voidTimeOut();

	while (1)
	{

	}

	return 0;
}

