/*
 * Key_Pad.Interface.h
 *
 *  Created on: Sep 1, 2022
 *      Author: user
 */

#ifndef KEY_PAD_INTERFACE_H_
#define KEY_PAD_INTERFACE_H_

u8 KeyPad_u8ReadButton(u8 Copy_u8Line);

void KeyPad_voidInit(void);

void KeyPad_voidSelectLine(u8 Copy_u8Line);

u8 KeyPad_u8GetPress(void);

#endif /* KEY_PAD_INTERFACE_H_ */
