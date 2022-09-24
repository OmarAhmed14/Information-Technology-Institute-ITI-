/*
 * STEPPER_Configure.h
 *
 *  Created on: Sep 4, 2022
 *      Author: user
 */

#ifndef STEPPER_CONFIGURE_H_
#define STEPPER_CONFIGURE_H_

/* Direction*/

#define Clock_Wise             0
#define Counter_Clock_Wise     1

/* Port of coils */

#define Port_Stepper    DIO_PORTD

/* Pins of coils */

#define Pin_CoilA       PIN0
#define Pin_CoilB       PIN1
#define Pin_CoilC       PIN2
#define Pin_CoilD       PIN3

#endif /* STEPPER_CONFIGURE_H_ */
