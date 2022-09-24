/*
 * GPTM_Interface.h
 *
 *  Created on: Sep 7, 2022
 *      Author: user
 */

#ifndef GPTM_INTERFACE_H_
#define GPTM_INTERFACE_H_

typedef enum
{
	No_Clock,
	No_prescalar,
	Clock_source_div_8,
	Clock_source_div_64,
	Clock_source_div_256,
	Clock_source_div_1024,
}Prescaler_Selection;

void GPTM_voidInitTimer0(void);

void GPTM_voidInitCTC0(void);

void SRIG_voidGlopalInterruptEnable(void);

void GPTM_voidPreLoadSet(u8 Copy_u8PreLoad);

void GPTM_voidCTC0CallBack (void(*Copy_PVToFunction)(void));

void GPTM_voidTIMER0CallBack (void(*Copy_PVToFunction)(void));


#endif /* GPTM_INTERFACE_H_ */
