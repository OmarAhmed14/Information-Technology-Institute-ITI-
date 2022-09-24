/*
 * main.c
 *
 *  Created on: Sep 5, 2022
 *      Author: user
 */
#include "Std_Types.h"
#include "Bit_Math.h"

#include "DIO_Interface.h"

#include "LCD_Configure.h"
#include "LCD_Interface.h"

#include "EXTI_Interface.h"

#include "util/delay.h"

/*Madrb Pattern Array*/
u8 Global_u8Madrb1 []={3,3,3,3,3,3,3,3};
u8 Global_u8Madrb2 []={24,24,24,24,24,24,24,24};

/*INDEX FOR INTERRUPTS*/
u8 Global_u8Index_Madrb1=1;
u8 Global_u8Index_Madrb2=0;


int main (void)
{
	/*Ball Pattern Array*/
	u8 Local_u8Ball []={0,6,10,4,0,0,0,0};

	/*BUTTONS DIRECTION AND PULLUP*/
	DIO_voidPullUpPin(DIO_PORTD,PIN2);
	DIO_voidPullUpPin(DIO_PORTD,PIN3);

	/*INTERRUPT GLOBAL ENABLE AND INT0 , INT1 ENABLE FAILLING EDGE */
	EXTI_voidGlobalEnable();
	EXTI_voidINT0Init();
	EXTI_voidINT1Init();

	/*LCD DIRECTION*/
	LCD_voidConfigDirection();
	LCD_voidInit();

	/*LCD PATTERNS*/
//	LCD_voidWriteSpecialChar(Local_u8Ball,4,0,PATTERN_0);
	LCD_voidWriteSpecialChar(Global_u8Madrb1,0,0,PATTERN_1);
	LCD_voidWriteSpecialChar(Global_u8Madrb2,15,1,PATTERN_1);

	/*Direction Ball UP Or Down*/
	u8 Local_u8UP=0,Local_u8Counter;

	while (1)
	{
		for (Local_u8Counter=1;Local_u8Counter<15;Local_u8Counter++)
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

		if (Global_u8Index_Madrb2==1 && Local_u8Counter==15)
		{
			LCD_voidSendCommand(1);
			LCD_voidWriteString("PLAYER ONE WON");
			break;
			while(1);
		}
		for (Local_u8Counter=14;Local_u8Counter>=1;Local_u8Counter--)
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
		if (Global_u8Index_Madrb1==0 && Local_u8Counter==0)
		{
			LCD_voidSendCommand(1);
			LCD_voidWriteString("PLAYER TWO WON");
			while(1);
		}
	}
	return 0;
}

void __vector_1(void) __attribute__((signal));
void __vector_1(void)
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

void __vector_2(void) __attribute__((signal));
void __vector_2(void)
{
	LCD_voidGoToXY(15,!Global_u8Index_Madrb2);
	LCD_voidSendData(0b00100000);
	LCD_voidWriteSpecialChar(Global_u8Madrb2,15,Global_u8Index_Madrb2,PATTERN_1);
	switch(Global_u8Index_Madrb2)
	{
	case 0:
		Global_u8Index_Madrb2++;
		break;
	case 1:
		Global_u8Index_Madrb2--;
		break;
	}
}
