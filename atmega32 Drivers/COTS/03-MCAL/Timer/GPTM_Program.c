/*
 * GPTM_Program.c
 *
 *  Created on: Sep 7, 2022
 *      Author: user
 */
#include "Std_Types.h"
#include "Bit_Math.h"

#include "GPTM_Register.h"
#include "GPTM_Interface.h"

void (*Glocal_PVCallBackFunTIMER0)(void) =NULL;
void (*Glocal_PVCallBackFunCTC0)(void) =NULL;

void GPTM_voidInitTimer0(void)
{
	/*Select Normal Mode*/
	Clear_Bit(TCCR0,TCCR0_WGM01);
	Clear_Bit(TCCR0,TCCR0_WGM00);

	/*Timer Clock = Clock Source / 8 (Prescaler)*/
	TCCR0 &=0b11111000;
	TCCR0|=Clock_source_div_8<<TCCR0_CS00_CS01_CS02;

	/*Preload Value =192*/
	TCNT0=192;

	/*Enable Timer Interrupt*/
	Set_Bit(TIMSK0,TIMSK0_TOIE0);
}

void GPTM_voidInitCTC0(void)
{
	/*Select CTC Mode*/
		Set_Bit(TCCR0,TCCR0_WGM01);
		Clear_Bit(TCCR0,TCCR0_WGM00);

		/*Timer Clock = Clock Source / 8 (Prescaler)*/
		TCCR0 &=0b11111000;
		TCCR0|=Clock_source_div_8<<TCCR0_CS00_CS01_CS02;

		/*Max Value =199*/
		OCR0=199;

		/*Enable CTC Interrupt*/
		Set_Bit(TIMSK0,TIMSK0_OCIE0);
}

void SRIG_voidGlopalInterruptEnable(void)
{
	/* Interrupt Global Enable */
	Set_Bit(SRIG,SRIG_I);
}

void GPTM_voidPreLoadSet(u8 Copy_u8PreLoad)
{
	/*Preload Value =192*/
	TCNT0=Copy_u8PreLoad;
}

void __vector_11(void) __attribute__((signal));
void __vector_11(void)
{
	if (Glocal_PVCallBackFunTIMER0 !=NULL)
	{
		Glocal_PVCallBackFunTIMER0();
	}
}

void GPTM_voidTIMER0CallBack (void(*Copy_PVToFunction)(void))
{
	Glocal_PVCallBackFunTIMER0=Copy_PVToFunction;
}

void __vector_10(void) __attribute__((signal));
void __vector_10(void)
{
	if (Glocal_PVCallBackFunCTC0 !=NULL)
	{
		Glocal_PVCallBackFunCTC0();
	}
}

void GPTM_voidCTC0CallBack (void(*Copy_PVToFunction)(void))
{
	Glocal_PVCallBackFunCTC0=Copy_PVToFunction;
}
