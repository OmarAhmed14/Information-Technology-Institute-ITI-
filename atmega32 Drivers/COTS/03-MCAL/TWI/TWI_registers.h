/*
 * TWI_registers.h
 *
 *  Created on: Sep 13, 2022
 *      Author: Omar Ahmed
 */

#ifndef TWI_REGISTERS_H_
#define TWI_REGISTERS_H_

#define TWBR      *((volatile u8*)0x20)

#define TWCR      *((volatile u8*)0x56)

#define TWCR_TWINT    7
#define TWCR_TWEA     6
#define TWCR_TWSTA    5
#define TWCR_TWSTO    4
#define TWCR_TWEN     2

#define TWSR      *((volatile u8*)0x21)

#define TWSR_TWPS0    0
#define TWSR_TWPS1    1

#define TWDR      *((volatile u8*)0x23)

#define TWAR      *((volatile u8*)0x22)
#define TWAR_TWGCE    0

#endif /* TWI_REGISTERS_H_ */
