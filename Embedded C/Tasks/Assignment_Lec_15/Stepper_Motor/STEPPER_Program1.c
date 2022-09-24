/*
 * STEPPER_Program1.c
 *
 *  Created on: Sep 5, 2022
 *      Author: user
 */


#include "Std_Types.h"
#include "Bit_Math.h"

#include "DIO_Interface.h"
#include "STEPPER_Interface.h"
#include "STEPPER_Configure.h"
#include "util/delay.h"




void STEPPER_voidInit()
{
	DIO_voidSetPinDirection(Port_Stepper,Pin_CoilA,OUTPUT_PIN);
	DIO_voidSetPinDirection(Port_Stepper,Pin_CoilB,OUTPUT_PIN);
	DIO_voidSetPinDirection(Port_Stepper,Pin_CoilC,OUTPUT_PIN);
	DIO_voidSetPinDirection(Port_Stepper,Pin_CoilD,OUTPUT_PIN);
}

void STEPPER_voidStepsAndDirection(u8 Copy_u8NumberOfSteps,u8 Copy_u8StepResolution,u8 Copy_u8Ditection )
{
	u8 Local_u8Pin=0,Local_u8Pin2=3;
	u16 Local_u16Total=Copy_u8NumberOfSteps*Copy_u8StepResolution,STEPS=0;

	DIO_voidSetPinValue(Port_Stepper,Pin_CoilA,LOW);
	DIO_voidSetPinValue(Port_Stepper,Pin_CoilB,LOW);
	DIO_voidSetPinValue(Port_Stepper,Pin_CoilC,LOW);
	DIO_voidSetPinValue(Port_Stepper,Pin_CoilD,LOW);

	switch (Copy_u8Ditection)
	{
	case Clock_Wise:
		while (STEPS!=Local_u16Total) //4
		{
			DIO_voidSetPinValue(Port_Stepper,Local_u8Pin,HIGH);
			DIO_voidSetPinValue(Port_Stepper,Local_u8Pin+1,HIGH);
			_delay_ms(200);
			STEPS++; //1 2 3
			if (STEPS==Local_u16Total)
				break;
			Local_u8Pin++; //3
			DIO_voidSetPinValue(Port_Stepper,Local_u8Pin-1,LOW);
			if (Local_u8Pin==3)
			{
				Local_u8Pin=0;
				DIO_voidSetPinValue(Port_Stepper,Local_u8Pin,HIGH);
				_delay_ms(200);
				STEPS++; // 4
				if (STEPS==Local_u16Total)
					break;
				DIO_voidSetPinValue(Port_Stepper,Pin_CoilD,LOW);
			}
		}
		break;

	case Counter_Clock_Wise:
		while (STEPS!=Local_u16Total)
		{
			DIO_voidSetPinValue(Port_Stepper,Local_u8Pin2,HIGH);
			DIO_voidSetPinValue(Port_Stepper,Local_u8Pin2-1,HIGH);
			_delay_ms(200);
			STEPS++;
			if (STEPS==Local_u16Total)
				break;
			Local_u8Pin2--;
			DIO_voidSetPinValue(Port_Stepper,Local_u8Pin2+1,LOW);
			if (Local_u8Pin2==0)
			{
				Local_u8Pin2=3;
				DIO_voidSetPinValue(Port_Stepper,Local_u8Pin2,HIGH);
				_delay_ms(200);
				STEPS++;
				if (STEPS==Local_u16Total)
					break;
				DIO_voidSetPinValue(Port_Stepper,Pin_CoilA,LOW);
			}
		}
		break;

	default:
		break;
	}
}
