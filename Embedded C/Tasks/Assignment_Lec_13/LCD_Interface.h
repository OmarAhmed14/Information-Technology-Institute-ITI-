/*
 ************ Author : Omar Ahmed ****************
 ************ Date : 31-8-2022 *******************
 *************************************************
 */

#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_

void LCD_voidSendCommand (u8 Copy_u8Command);

void LCD_voidSendData (u8 Copy_u8Data);

void LCD_voidInit ();

void LCD_voidConfigDirection();

void LCD_voidWriteString(s8 *Copy_u8String);

void LCD_voidWriteNumber(u8 Copy_u8Number);

#endif /* LCD_INTERFACE_H_ */
