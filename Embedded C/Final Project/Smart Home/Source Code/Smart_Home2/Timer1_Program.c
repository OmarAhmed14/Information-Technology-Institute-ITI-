/*
 * Timer1_Program.c
 *
 *  Created on: Sep 8, 2022
 *      Author: Omar Ahmed
 */

#include "Std_Types.h"
#include "Bit_Math.h"

#include "Timer1_Registers.h"
#include "Timer1_Interface.h"


void PWM_voidInitTimer1()
{
	/*Select PWM non Inverting*/

	Clear_Bit(TCCR1A,TCCR1A_COM1A0);
	Set_Bit(TCCR1A,TCCR1A_COM1A1);

	/*Select Mode 14*/

	Clear_Bit(TCCR1A,TCCR1A_WGM10);
	Set_Bit(TCCR1A,TCCR1A_WGM11);

	Set_Bit(TCC1RB,TCC1RB_WGM12);
	Set_Bit(TCC1RB,TCC1RB_WGM13);

	/*Select prescaler div_8 */

	TCC1RB&=0b11111000;
	TCC1RB|=CLK_DIV_8<<TCC1RB_CS10_CS11_CS12;

	/*Set the number of ticks (Top)*/

	ICR1=20000;

	/*Set the number of ticks of combare match (Compare Value)*/

	//OCR1A=750;

}

void PWM_voidSetCompareMatchValue(u16 Copy_u16value)
{

	/*Set the number of ticks of combare match (Compare Value)*/

	OCR1A=Copy_u16value;
}

