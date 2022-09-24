/*
 * APP_Program.c
 *
 *  Created on: Sep 19, 2022
 *      Author: user
 */


#include "Std_Types.h"
#include "Bit_Math.h"

#include "LCD_Interface.h"

#include "APP_Interface.h"

#include <util/delay.h>

void APP_voidUser_Reciever(u8 Copy_Num)
{
	static u8 Index=0;
	LCD_voidGoToXY(Index,1);
	LCD_voidSendData(Copy_Num);
	Index++;
	if (Index==4)
		Index=0;
}

void APP_voidPass_Reciever(u8 Copy_Num)
{
	static u8 Index=0;
	LCD_voidGoToXY(Index,1);
	LCD_voidSendData(Copy_Num);
	_delay_ms(200);
	LCD_voidGoToXY(Index,1);
	LCD_voidSendData('*');
	Index++;
	if (Index==4)
		Index=0;
}

u8 APP_u8UserCheck(u8 *ArrTrue,u8* ArrCheck)
{
	for (u8 Index=0; Index<4;Index++)
		if (ArrTrue[Index]!=ArrCheck[Index])
			return 0;
	return 1;
}

u8 APP_u8PassCheck(u8 *ArrTrue,u8* ArrCheck)
{
	for (u8 Index=0; Index<4;Index++)
		if (ArrTrue[Index]!=ArrCheck[Index])
			return 0;
	return 1;
}
