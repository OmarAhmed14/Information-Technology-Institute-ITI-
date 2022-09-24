/*
 * main.c
 *
 *  Created on: Sep 11, 2022
 *      Author: user
 */

#include "Std_Types.h"
#include "Bit_Math.h"

#include "DIO_Interface.h"
#include "USART_Interface.h"
#include "EXTI_Interface.h"

#include "LCD_Interface.h"
#include "LCD_Configure.h"

#include <util/delay.h>

void Button_Change(void);

u8 Global_u8Index_Madrb1=1;
u8 Global_u8Madrb1 []={3,3,3,3,3,3,3,3};

int main (void)
{
	u8 Local_u8UP=0,Local_u8Counter;
	u8 Local_u8Ball []={0,6,10,4,0,0,0,0};

	LCD_voidConfigDirection();
	LCD_voidInit();

	EXTI_voidGlobalEnable();
	EXTI_voidINT0Init();

	DIO_voidPullUpPin(DIO_PORTD,PIN2);
	DIO_voidSetPinDirection(DIO_PORTD,PIN0,INPUT_PIN);
	DIO_voidSetPinDirection(DIO_PORTD,PIN1,OUTPUT_PIN);

	USART_voidInit();

	LCD_voidWriteSpecialChar(Global_u8Madrb1,0,0,PATTERN_1);

	LCD_voidINT0CallBack(&Button_Change);


	while(1)
	{
		for (Local_u8Counter=1;Local_u8Counter<=15;Local_u8Counter++)
		{
			LCD_voidWriteSpecialChar(Local_u8Ball,Local_u8Counter,Local_u8UP,PATTERN_0);
			_delay_ms(500);
			LCD_voidGoToXY(Local_u8Counter,Local_u8UP);
			LCD_voidSendData(0b00100000);
			if (Local_u8UP==0)
				Local_u8UP++;
			else
				Local_u8UP--;
		}
		USART_voidWriteData('1');

		if (USART_u8ReadData()=='2')
		{
			for (Local_u8Counter=15;Local_u8Counter>=1;Local_u8Counter--)
			{
				LCD_voidWriteSpecialChar(Local_u8Ball,Local_u8Counter,Local_u8UP,PATTERN_0);
				_delay_ms(500);
				LCD_voidGoToXY(Local_u8Counter,Local_u8UP);
				LCD_voidSendData(0b00100000);
				if (Local_u8UP==0)
					Local_u8UP++;
				else
					Local_u8UP--;
				if (Local_u8Counter==1)Local_u8UP=0;
			}
			if (Global_u8Index_Madrb1==0 && Local_u8Counter==0)
			{
				LCD_voidSendCommand(1);
				LCD_voidWriteString("PLAYER TWO WON");
				while(1);
			}
		}
	}


	return 0;
}

void Button_Change()
{
	LCD_voidGoToXY(0,!Global_u8Index_Madrb1);
	LCD_voidSendData(0b00100000);
	LCD_voidWriteSpecialChar(Global_u8Madrb1,0,Global_u8Index_Madrb1,PATTERN_1);
	switch(Global_u8Index_Madrb1)
	{
	case 0:
		Global_u8Index_Madrb1++;
		break;
	case 1:
		Global_u8Index_Madrb1--;
		break;
		}
}
