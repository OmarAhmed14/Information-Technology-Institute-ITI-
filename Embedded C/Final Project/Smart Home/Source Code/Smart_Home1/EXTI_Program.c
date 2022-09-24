/*
 * EXTI_Program.c
 *
 *  Created on: Sep 5, 2022
 *      Author: user
 */

#include "Std_Types.h"
#include "Bit_Math.h"

#include "EXTI_Registers.h"
#include "EXTI_Interface.h"

void (*EXTI_pvCallBackFuncINT0) (void) = NULL;

void EXTI_voidINT0Init(void)
{
	Clear_Bit(MCUCR,MCUCR_ISC00);
	Set_Bit(MCUCR,MCUCR_ISC01);

	Set_Bit(GICR,GICR_INT0);
}

void EXTI_voidINT0End(void)
{
	Clear_Bit(GICR,GICR_INT0);
}

void EXTI_voidINT1Init(void)
{
	Clear_Bit(MCUCR,MCUCR_ISC10);
	Set_Bit(MCUCR,MCUCR_ISC11);

	Set_Bit(GICR,GICR_INT1);
}

void EXTI_voidINT2Init(void)
{
	Clear_Bit(MCUCSR,MCUCSR_ISC2);
	Set_Bit(GICR,GICR_INT2);
}

void EXTI_voidGlobalEnable(void)
{
	/*Enable Global Interrupt*/
	Set_Bit(SREG,SREG_I);
}

void EXTI_voidGlobalDisable(void)
{
	/*Disable Global Interrupt*/
	Clear_Bit(SREG,SREG_I);
}

void EXTI_voidCallBackINT0(void(*Copy_pv0function)(void))
{
    EXTI_pvCallBackFuncINT0 = Copy_pv0function;
}

void __vector_1(void) __attribute__((signal));
void __vector_1(void)
{
    if(EXTI_pvCallBackFuncINT0 != NULL)
    {
        EXTI_pvCallBackFuncINT0();
    }

}
