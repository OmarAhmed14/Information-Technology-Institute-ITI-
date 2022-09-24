/*
 * SPI_Master_Registers.h
 *
 *  Created on: Sep 12, 2022
 *      Author: user
 */

#ifndef SPI_MASTER_REGISTERS_H_
#define SPI_MASTER_REGISTERS_H_

#define SPCR          *((volatile u8*)0x2D)
#define SPCR_SPE       6
#define SPCR_DORD      5
#define SPCR_MSTR      4
#define SPCR_CPOL      3
#define SPCR_CPHA      2
#define SPCR_SPR1      1
#define SPCR_SPR0      0

#define SPSR          *((volatile u8*)0x2E)
#define SPSR_SPIF      7

#define SPDR          *((volatile u8*)0x2F)

#endif /* SPI_MASTER_REGISTERS_H_ */
