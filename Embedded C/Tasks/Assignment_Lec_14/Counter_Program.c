/*
 * Counter_Program.c
 *
 *  Created on: Sep 2, 2022
 *      Author: Omar Ahmed
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_Interface.h"

#include "Key_Pad.Interface.h"

#include "LCD_Interface.h"

#include "LCD_Configure.h"

//#include "KeyPad_Configure.h"

#include <util/delay.h>

u8 GlobalHrs_0=0,GlobalHrs_1=0,GlobalHrs_0_char='0',GlobalHrs_1_char='0';
u8 GlobalMins_0=0,GlobalMins_1=0,GlobalMins_0_char='0',GlobalMins_1_char='0';
u8 GlobalSeconds_0=0,GlobalSeconds_1=0,GlobalSeconds_0_char='0',GlobalSeconds_1_char='0';
u8 Local_u8CountDown1,Local_u8CountDown2,Local_u8CountDown3,Local_u8CountDown4;
u8 Local_u8CountDown5,Local_u8CountDown6;
extern u8 Local_u8HamokshaArrPatterns[];

extern u8 Global_u8ArrowPattern[];
u8 Global_u8Numbers[]={'0','1','2','3','4','5','6','7','8','9'};

void Counter_voidHrs(void)
{
	do{
		for (u8 Local_u8Index=0;Local_u8Index<10;Local_u8Index++)
		{
			if (Global_u8Numbers[Local_u8Index]==KeyPad_u8GetPress())
			{
				LCD_voidGoToXY(4,0);
				LCD_voidSendData(Global_u8Numbers[Local_u8Index]);
				GlobalHrs_0_char=Global_u8Numbers[Local_u8Index];
				GlobalHrs_0 = Local_u8Index;
				break;
			}
		}

		}while(KeyPad_u8GetPress()!='=');

	if(KeyPad_u8GetPress()=='=')
	{
		LCD_voidGoToXY(4,0);
		LCD_voidSendData(GlobalHrs_0_char);
		LCD_voidGoToXY(4,1);
		LCD_voidSendData(0b00100000);
		LCD_voidWriteSpecialChar(Global_u8ArrowPattern,5,1,PATTERN_0);

	do{
			for (u8 Local_u8Index=0;Local_u8Index<10;Local_u8Index++)
			{
				if (Global_u8Numbers[Local_u8Index]==KeyPad_u8GetPress())
				{
					LCD_voidGoToXY(5,0);
					LCD_voidSendData(Global_u8Numbers[Local_u8Index]);
					GlobalHrs_1_char=Global_u8Numbers[Local_u8Index];
					GlobalHrs_1 = Local_u8Index;
					break;

				}
			}

			}while(KeyPad_u8GetPress()!='=');

	if(KeyPad_u8GetPress()=='=')
		{
			LCD_voidGoToXY(5,0);
			LCD_voidSendData(GlobalHrs_1_char);
			LCD_voidGoToXY(5,1);
			LCD_voidSendData(0b00100000);
			LCD_voidWriteSpecialChar(Global_u8ArrowPattern,7,1,PATTERN_0);
		}
	}
}


void Counter_voidMins(void)
{
		do{
			for (u8 Local_u8Index=0;Local_u8Index<10;Local_u8Index++)
			{
				if (Global_u8Numbers[Local_u8Index]==KeyPad_u8GetPress())
				{
					LCD_voidGoToXY(7,0);
					LCD_voidSendData(Global_u8Numbers[Local_u8Index]);
					GlobalMins_0_char=Global_u8Numbers[Local_u8Index];
					GlobalMins_0 = Local_u8Index;
					break;
				}
			}

			}while(KeyPad_u8GetPress()!='=');

		if(KeyPad_u8GetPress()=='=')
		{
			LCD_voidGoToXY(7,0);
			LCD_voidSendData(GlobalMins_0_char);
			LCD_voidGoToXY(7,1);
			LCD_voidSendData(0b00100000);
			LCD_voidWriteSpecialChar(Global_u8ArrowPattern,8,1,PATTERN_0);

		do{
				for (u8 Local_u8Index=0;Local_u8Index<10;Local_u8Index++)
				{
					if (Global_u8Numbers[Local_u8Index]==KeyPad_u8GetPress())
					{
						LCD_voidGoToXY(8,0);
						LCD_voidSendData(Global_u8Numbers[Local_u8Index]);
						GlobalMins_1_char=Global_u8Numbers[Local_u8Index];
						GlobalMins_1 = Local_u8Index;
						break;

					}
				}

				}while(KeyPad_u8GetPress()!='=');

		if(KeyPad_u8GetPress()=='=')
			{
				LCD_voidGoToXY(8,0);
				LCD_voidSendData(GlobalMins_1_char);
				LCD_voidGoToXY(8,1);
				LCD_voidSendData(0b00100000);
				LCD_voidWriteSpecialChar(Global_u8ArrowPattern,10,1,PATTERN_0);
			}
		}
}

void Counter_voidseconds(void)
{
	do{
		for (u8 Local_u8Index=0;Local_u8Index<10;Local_u8Index++)
		{
			if (Global_u8Numbers[Local_u8Index]==KeyPad_u8GetPress())
			{
				LCD_voidGoToXY(10,0);
				LCD_voidSendData(Global_u8Numbers[Local_u8Index]);
				GlobalSeconds_0_char=Global_u8Numbers[Local_u8Index];
				GlobalSeconds_0= Local_u8Index;
				break;
			}
		}

	}while(KeyPad_u8GetPress()!='=');

	if(KeyPad_u8GetPress()=='=')
	{
				LCD_voidGoToXY(10,0);
				LCD_voidSendData(GlobalSeconds_0_char);
				LCD_voidGoToXY(10,1);
				LCD_voidSendData(0b00100000);
				LCD_voidWriteSpecialChar(Global_u8ArrowPattern,11,1,PATTERN_0);

			do{
					for (u8 Local_u8Index=0;Local_u8Index<10;Local_u8Index++)
					{
						if (Global_u8Numbers[Local_u8Index]==KeyPad_u8GetPress())
						{
							LCD_voidGoToXY(11,0);
							LCD_voidSendData(Global_u8Numbers[Local_u8Index]);
							GlobalSeconds_1_char=Global_u8Numbers[Local_u8Index];
							GlobalSeconds_1 = Local_u8Index;

						}
					}

					}while(KeyPad_u8GetPress()!='=');

			if(KeyPad_u8GetPress()=='=')
				{
					LCD_voidGoToXY(11,0);
					LCD_voidSendData(GlobalSeconds_1_char);
					LCD_voidGoToXY(11,1);
					LCD_voidSendData(0b00100000);
					//LCD_voidWriteSpecialChar(Global_u8ArrowPattern,10,1,PATTERN_0);
				}
			}
}


/* **************************Counter down functions******************* */

void Counter_voidDownseconds(void)
{
	Local_u8CountDown1 = GlobalSeconds_1;//9
	Local_u8CountDown2 = GlobalSeconds_0; //5

	while (Local_u8CountDown2>0)
	{
		while (Local_u8CountDown1>0)
			{
				Local_u8CountDown1--;
				LCD_voidGoToXY(11,0);
				LCD_voidWriteNumber(Local_u8CountDown1);
				_delay_ms(100);
			}
			Local_u8CountDown1=9;
			LCD_voidGoToXY(11,0);
			LCD_voidWriteNumber(Local_u8CountDown1);
			Local_u8CountDown2--;
			LCD_voidGoToXY(10,0);
			LCD_voidWriteNumber(Local_u8CountDown2);
			_delay_ms(100);
	}
	while (Local_u8CountDown1>0)
	{
		Local_u8CountDown1--;
		LCD_voidGoToXY(11,0);
		LCD_voidWriteNumber(Local_u8CountDown1);
		_delay_ms(100);
	}
}

void Counter_voidDownMins(void)
{
	Local_u8CountDown3 = GlobalMins_1;
	Local_u8CountDown4 = GlobalMins_0;

	while (Local_u8CountDown1==0 && Local_u8CountDown4>0)
	{
		while (Local_u8CountDown3>0)
		{
			Local_u8CountDown3--;
			LCD_voidGoToXY(8,0);
			LCD_voidWriteNumber(Local_u8CountDown3);
			GlobalSeconds_1=9;
			GlobalSeconds_0=5;
			LCD_voidGoToXY(11,0);
			LCD_voidWriteNumber(9);
			LCD_voidGoToXY(10,0);
			LCD_voidWriteNumber(5);
			_delay_ms(100);
			Counter_voidDownseconds();
		}
			Local_u8CountDown3=9;
			LCD_voidGoToXY(8,0);
			LCD_voidWriteNumber(Local_u8CountDown3);
			Local_u8CountDown4--;
			LCD_voidGoToXY(7,0);
			LCD_voidWriteNumber(Local_u8CountDown4);
			_delay_ms(100);
	}

	while (Local_u8CountDown3>0)
	{
		Local_u8CountDown3--;
		LCD_voidGoToXY(8,0);
		LCD_voidWriteNumber(Local_u8CountDown3);
		GlobalSeconds_1=9;
		GlobalSeconds_0=5;
		LCD_voidGoToXY(11,0);
		LCD_voidWriteNumber(9);
		LCD_voidGoToXY(10,0);
		LCD_voidWriteNumber(5);
		_delay_ms(100);
		Counter_voidDownseconds();
	}
}

void Counter_voidDownHrs(void)
{
	Local_u8CountDown5 = GlobalHrs_1;
	Local_u8CountDown6 = GlobalHrs_0;
	while (Local_u8CountDown1==0 && Local_u8CountDown3==0 && Local_u8CountDown6>0) // 10 59 59
		{
			while (Local_u8CountDown5>0)
			{
				Local_u8CountDown5--;
				LCD_voidGoToXY(5,0);
				LCD_voidWriteNumber(Local_u8CountDown5);
				GlobalSeconds_1=9;
				GlobalSeconds_0=5;
				LCD_voidGoToXY(11,0);
				LCD_voidWriteNumber(9);
				LCD_voidGoToXY(10,0);
				LCD_voidWriteNumber(5);
				GlobalMins_1=9;
				GlobalMins_0=5;
				LCD_voidGoToXY(8,0);
				LCD_voidWriteNumber(9);
				LCD_voidGoToXY(7,0);
				LCD_voidWriteNumber(5);
				_delay_ms(100);
				Counter_voidDownseconds();
				Counter_voidDownMins();
			}
				Local_u8CountDown5=9;
				LCD_voidGoToXY(5,0);
				LCD_voidWriteNumber(Local_u8CountDown5);
				Local_u8CountDown6--;
				LCD_voidGoToXY(4,0);
				LCD_voidWriteNumber(Local_u8CountDown6);
				_delay_ms(100);
		}

		while (Local_u8CountDown5>0)
		{
			Local_u8CountDown5--;
			LCD_voidGoToXY(5,0);
			LCD_voidWriteNumber(Local_u8CountDown5);
			GlobalSeconds_1=9;
			GlobalSeconds_0=5;
			LCD_voidGoToXY(11,0);
			LCD_voidWriteNumber(9);
			LCD_voidGoToXY(10,0);
			LCD_voidWriteNumber(5);
			GlobalMins_1=9;
			GlobalMins_0=5;
			LCD_voidGoToXY(8,0);
			LCD_voidWriteNumber(9);
			LCD_voidGoToXY(7,0);
			LCD_voidWriteNumber(5);
			_delay_ms(100);
			Counter_voidDownseconds();
			Counter_voidDownMins();
		}
}

void Counter_voidTimeOut()
{
	LCD_voidSendCommand(1);
	LCD_voidGoToXY(0,0);
	LCD_voidWriteString("****TIME OUT****");
	LCD_voidGoToXY(0,1);
	LCD_voidWriteSpecialChar(Local_u8HamokshaArrPatterns,0,1,1);

	for (u8 Local_u8_count=0;Local_u8_count<17;Local_u8_count+=2)
	{
		LCD_voidWriteSpecialChar(Local_u8HamokshaArrPatterns,Local_u8_count,1,1);
		_delay_ms(300);
		LCD_voidGoToXY(Local_u8_count,1);
		LCD_voidSendData(0b00100000);
	}

	LCD_voidWriteSpecialChar(Local_u8HamokshaArrPatterns,16,1,1);
}
