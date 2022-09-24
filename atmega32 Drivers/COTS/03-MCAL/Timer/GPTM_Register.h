/*
 * GPTM_Register.h
 *
 *  Created on: Sep 7, 2022
 *      Author: user
 */

#ifndef GPTM_REGISTER_H_
#define GPTM_REGISTER_H_

#define TCCR0      *((volatile u8*)0x53)
#define TCCR0_WGM01                3
#define TCCR0_WGM00                6
#define TCCR0_CS00_CS01_CS02       0

#define TCNT0      *((volatile u8*)0x52)

#define OCR0       *((volatile u8*)0x5C)

#define TIMSK0     *((volatile u8*)0x59)
#define TIMSK0_TOIE0      0
#define TIMSK0_OCIE0      1

#define TIFR0      *((volatile u8*)0x58)
#define TIFR0_TOV0        0

#define SRIG      *((volatile u8*)0x5F)
#define SRIG_I             7

#define NULL     0

#endif /* GPTM_REGISTER_H_ */
