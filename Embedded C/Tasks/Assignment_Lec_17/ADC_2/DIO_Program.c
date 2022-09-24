/*
 ************ Author : Omar Ahmed ****************
 ************ Date : 30-8-2022 *******************
 */
#include "Std_Types.h"
#include "Bit_Math.h"

#include "DIO_Registers.h"
#include "DIO_Interface.h"

void DIO_voidSetPortDitection(u8 Copy_u8Port , u8 Copy_u8Direction)
{
	switch (Copy_u8Port)
	{
		case DIO_PORTA:
			DDRA = Copy_u8Direction;
			break;

		case DIO_PORTB:
			DDRB = Copy_u8Direction;
			break;

		case DIO_PORTC:
			DDRC = Copy_u8Direction;
			break;

		case DIO_PORTD:
			DDRD = Copy_u8Direction;
			break;

		default:
			break;
	}

}
void DIO_voidSetPinDirection(u8 Copy_u8Port ,u8 Copy_u8Pin, u8 Copy_u8Direction)
{
	if (Copy_u8Direction == OUTPUT_PIN)
	{
		switch (Copy_u8Port)
		{
		case DIO_PORTA:
		Set_Bit (DDRA,Copy_u8Pin);
		break;

		case DIO_PORTB:
			Set_Bit (DDRB,Copy_u8Pin);
			break;

		case DIO_PORTC:
			Set_Bit (DDRC,Copy_u8Pin);
			break;

		case DIO_PORTD:
			Set_Bit (DDRD,Copy_u8Pin);
			break;

		default:
			break;
		}
	}
	else if (Copy_u8Direction == INPUT_PIN)
	{
		switch (Copy_u8Port)
		{
		case DIO_PORTA:
			Clear_Bit (DDRA,Copy_u8Pin);
			break;

		case DIO_PORTB:
			Clear_Bit (DDRB,Copy_u8Pin);
			break;

		case DIO_PORTC:
			Clear_Bit (DDRC,Copy_u8Pin);
			break;

		case DIO_PORTD:
			Clear_Bit (DDRD,Copy_u8Pin);
			break;

		default:
			break;
		}
	}

}


void DIO_voidSetPortValue(u8 Copy_u8Port , u8 Copy_u8Value)
{
	switch (Copy_u8Port)
		{
			case DIO_PORTA:
			PORTA = Copy_u8Value;
			break;

			case DIO_PORTB:
				PORTB = Copy_u8Value;
				break;

			case DIO_PORTC:
				PORTC = Copy_u8Value;
				break;

			case DIO_PORTD:
				PORTD = Copy_u8Value;
				break;

			default:
				break;
		}
}

void DIO_voidSetPinValue(u8 Copy_u8Port ,u8 Copy_u8Pin, u8 Copy_u8Value)
{
	if (Copy_u8Value == HIGH)
		{
			switch (Copy_u8Port)
			{
			case DIO_PORTA:
			Set_Bit (PORTA,Copy_u8Pin);
			break;

			case DIO_PORTB:
				Set_Bit (PORTB,Copy_u8Pin);
				break;

			case DIO_PORTC:
				Set_Bit (PORTC,Copy_u8Pin);
				break;

			case DIO_PORTD:
				Set_Bit (PORTD,Copy_u8Pin);
				break;

			default:
				break;
			}
		}
		else if (Copy_u8Value == LOW)
		{
			switch (Copy_u8Port)
			{
			case DIO_PORTA:
				Clear_Bit (PORTA,Copy_u8Pin);
				break;

			case DIO_PORTB:
				Clear_Bit (PORTB,Copy_u8Pin);
				break;

			case DIO_PORTC:
				Clear_Bit (PORTC,Copy_u8Pin);
				break;

			case DIO_PORTD:
				Clear_Bit (PORTD,Copy_u8Pin);
				break;

			default:
				break;
			}
		}
}

u8 DIO_u8GetPinValue(u8 Copy_u8Port ,u8 Copy_u8Pin)
{
	u8 Local_u8ReturnValuePin;
	switch (Copy_u8Port)
		{
			case DIO_PORTA:
				Local_u8ReturnValuePin= Get_Bit(PINA,Copy_u8Pin);
			break;

			case DIO_PORTB:
				Local_u8ReturnValuePin= Get_Bit(PINB,Copy_u8Pin);
				break;

			case DIO_PORTC:
				Local_u8ReturnValuePin= Get_Bit(PINC,Copy_u8Pin);
				break;

			case DIO_PORTD:
				Local_u8ReturnValuePin= Get_Bit(PIND,Copy_u8Pin);
				break;

			default:
				break;
		}
	return Local_u8ReturnValuePin;
}

void DIO_voidPullUpPin(u8 Copy_u8Port ,u8 Copy_u8Pin)
{
	switch (Copy_u8Port)
			{
			case DIO_PORTA:
				Set_Bit (PORTA,Copy_u8Pin);
				break;

			case DIO_PORTB:
				Set_Bit (PORTB,Copy_u8Pin);;
				break;

			case DIO_PORTC:
				Set_Bit (PORTC,Copy_u8Pin);;
				break;

			case DIO_PORTD:
				Set_Bit (PORTD,Copy_u8Pin);;
				break;

			default:
				break;
			}
}


