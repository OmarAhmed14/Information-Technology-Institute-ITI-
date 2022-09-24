/*
 * main.c
 *
 *  Created on: Sep 4, 2022
 *      Author: user
 */

#include "Std_Types.h"
#include "Bit_Math.h"

#include "DIO_Interface.h"
#include "STEPPER_Interface.h"
#include "STEPPER_Configure.h"

#include "util/delay.h"


int main(void)
{
	STEPPER_voidInit();

	STEPPER_voidStepsAndDirection(10,1,Counter_Clock_Wise);
	_delay_ms(200);
	STEPPER_voidStepsAndDirection(10,1,Clock_Wise);



	return 0;
}
