/*
 * SPI_Master_Interface.h
 *
 *  Created on: Sep 12, 2022
 *      Author: user
 */

#ifndef SPI_MASTER_INTERFACE_H_
#define SPI_MASTER_INTERFACE_H_

void SPI_Master_voidInit(void);

void SPI_Slave_voidInit(void);

u8 SPI_u8Transceive (u8 Copy_u8Data);

#endif /* SPI_MASTER_INTERFACE_H_ */
