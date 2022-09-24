/*
 * SPI_Master_Program.c
 *
 *  Created on: Sep 12, 2022
 *      Author: user
 */

#include "Std_Types.h"
#include "Bit_Math.h"

#include "SPI_Master_Registers.h"
#include "SPI_Master_Interface.h"


void SPI_Master_voidInit(void)
{
	/*Data Order LSB is Shiftted First*/
	Clear_Bit(SPCR,SPCR_DORD);

	/*Master Select*/
	Set_Bit(SPCR,SPCR_MSTR);

	/*fclk/64 with no double speed*/
	Clear_Bit(SPCR,SPCR_SPR0);
	Set_Bit(SPCR,SPCR_SPR1);

	/*Enable SPI*/
	Set_Bit(SPCR,SPCR_SPE);
}

void SPI_Slave_voidInit(void)
{
	/*Data Order LSB is Shiftted First*/
	Clear_Bit(SPCR,SPCR_DORD);

	/*Slave Select*/
	Clear_Bit(SPCR,SPCR_MSTR);

	/*Enable SPI*/
	Set_Bit(SPCR,SPCR_SPE);
}

u8 SPI_u8Transceive (u8 Copy_u8Data)
{
	SPDR = Copy_u8Data;
	while (!Get_Bit(SPSR,SPSR_SPIF));
	return SPDR;
}
