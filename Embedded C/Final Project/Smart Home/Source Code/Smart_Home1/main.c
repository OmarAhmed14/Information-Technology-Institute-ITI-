/*
 * main.c
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

#include "APP_Interface.h"

void Enable (void);

int main (void)
{
	USART_voidInit();

	EXTI_voidGlobalEnable();
	EXTI_voidINT0Init();

	KeyPad_voidInit();

	DIO_voidSetPinDirection(DIO_PORTD,PIN2,INPUT_PIN);
	DIO_voidPullUpPin(DIO_PORTD,PIN2);

	DIO_voidSetPinDirection(DIO_PORTD,PIN0,INPUT_PIN);
	DIO_voidSetPinDirection(DIO_PORTD,PIN1,OUTPUT_PIN);

	DIO_voidSetPortDitection(DIO_PORTB,OUTPUT_PORT);

	EXTI_voidCallBackINT0(&Enable);


	while (1)
	{
		u8 Read = USART_u8ReadData();
		if (Read=='-')
		{
			DIO_voidSetPortValue(DIO_PORTB,THREE);
		}

		else if (Read=='W')
		{
			DIO_voidSetPortValue(DIO_PORTB,TWO);
		}
		else if (Read=='N')
			DIO_voidSetPortValue(DIO_PORTB,ONE);

		else if (Read=='D')
			DIO_voidSetPortValue(DIO_PORTB,LOW);

		else if (Read=='T')
		{
			DIO_voidSetPortValue(DIO_PORTB,	ZERO);
			if(USART_u8ReadData()=='.')
				DIO_voidSetPortValue(DIO_PORTB,LOW);
			EXTI_voidINT0Init();
			continue;
		}

		for (u8 Index=0;Index<8;Index++)
			APP_voidPass_User_checker();
	}

	return 0;
}

void Enable (void)
{
	EXTI_voidINT0End();
	USART_voidWriteData('/');
}
