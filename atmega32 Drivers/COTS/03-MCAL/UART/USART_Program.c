/*
 * USART_Program.c
 *
 *  Created on: Sep 11, 2022
 *      Author: user
 */

#include "Std_Types.h"
#include "Bit_Math.h"

#include "USART_Interface.h"
#include "USART_Registers.h"

void USART_voidInit()
{
	/*Select Character Size in bit 2*/
	Clear_Bit(UCSRB,UCSRB_UCSZ2);

	/*Select UCSRC ,
	 * select Asynchronous ,
	 * no parity ,
	 * 1 stop bit ,
	 * 8 bit data ,
	 * no clock Polarity*/
	 UCSRC = 0b10000110;

	 /*Select Baud Rate 9600 bps*/
	 UBRRL=51;

	 /*Enable Tx , Rx*/
	 Set_Bit(UCSRB,UCSRB_TXEN);
	 Set_Bit(UCSRB,UCSRB_RXEN);

}

void USART_voidWriteData(u8 Copy_u8Data)
{
	/*Waiting until Transmit Buffer will be empty and ready for new data*/
	while (Get_Bit(UCSRA,UCSRA_UDRE)!=1);

	/*Put New Data*/
		UDR=Copy_u8Data;
}

u8 USART_u8ReadData()
{
	/*Waiting until Receive Buffer to finish receiving and to be ready for new data*/
	while (Get_Bit(UCSRA,UCSRA_RXC)!=1);

	/*Read New Data*/
		return UDR;
}



