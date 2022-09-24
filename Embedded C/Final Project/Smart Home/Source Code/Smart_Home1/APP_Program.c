/*
 * APP_Program.c
 *
 *  Created on: Sep 19, 2022
 *      Author: user
 */

#include "Std_Types.h"
#include "Bit_Math.h"

#include "DIO_Interface.h"

#include "EXTI_Interface.h"

#include "USART_Interface.h"

#include "KeyPad_Interface.h"

#include "util/delay.h"

void APP_voidPass_User_checker (void)
{
	u8 Local_u8PassNumber = KeyPad_u8GetPress();

	while (Local_u8PassNumber<'0' || Local_u8PassNumber>'9')
	{
		Local_u8PassNumber = KeyPad_u8GetPress();
	}

	switch (Local_u8PassNumber)
	{
	case '0':
		USART_voidWriteData('0');
		_delay_ms(30);
		break;
	case '1':
		USART_voidWriteData('1');
		_delay_ms(30);
		break;
	case '2':
		USART_voidWriteData('2');
		_delay_ms(30);
		break;
	case '3':
		USART_voidWriteData('3');
		_delay_ms(30);
		break;
	case '4':
		USART_voidWriteData('4');
		_delay_ms(30);
		break;
	case '5':
		USART_voidWriteData('5');
		_delay_ms(30);
		break;
	case '6':
		USART_voidWriteData('6');
		_delay_ms(30);
		break;
	case '7':
		USART_voidWriteData('7');
		_delay_ms(30);
		break;
	case '8':
		USART_voidWriteData('8');
		_delay_ms(30);
		break;
	case '9':
		USART_voidWriteData('9');
		_delay_ms(30);
		break;
	}
}
