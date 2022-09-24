/*
 * main.c
 *
 *  Created on: Sep 19, 2022
 *      Author: user
 */

#include "Std_Types.h"
#include "Bit_Math.h"

#include "DIO_Interface.h"

#include "LM35.h"

#include "ADC_Interface.h"

#include "USART_Interface.h"

#include "Timer1_Interface.h"

#include "LCD_Interface.h"

#include "LCD_Configure.h"

#include "util/delay.h"

#include "APP_Interface.h"

u8 Global_u8Motor[8]={17,27,27,21,17,17,17,17};

int main (void)
{
	ADC_voidInit();
	LCD_voidConfigDirection();
	LCD_voidInit();

	USART_voidInit();

	DIO_voidSetPinDirection(DIO_PORTD,PIN0,INPUT_PIN);
	DIO_voidSetPinDirection(DIO_PORTD,PIN1,OUTPUT_PIN);

	DIO_voidSetPinDirection(DIO_PORTD,PIN5,OUTPUT_PIN);

	DIO_voidSetPinDirection(DIO_PORTD,PIN0,INPUT_PIN);
	DIO_voidSetPinDirection(DIO_PORTD,PIN1,INPUT_PIN);

	DIO_voidSetPinDirection(DIO_PORTA,PIN3,OUTPUT_PIN);

	DIO_voidSetPortDitection(DIO_PORTB,OUTPUT_PORT);

	u8 Local_u8Read,Local_ArrUser[5]={"1234"},Local_ArrPass[5]={"5678"};
	u8 Local_ArrUserIN[5],Local_ArrPassIN[5],Local_u8Flag=1,flag=0;
	while (1)
	{
		u8 Flag2=1;
		Local_u8Read=USART_u8ReadData();

		if (Local_u8Read == '/')
		{
			 LCD_voidSendCommand(0b00000001);
			 _delay_ms(20);
		     LCD_voidWriteString("Welcome to the");
		     LCD_voidGoToXY(3,1);
		     LCD_voidWriteString("Smart Home");
		     _delay_ms(5000);
		     LCD_voidSendCommand(0b00000001);
		     _delay_ms(200);

		     do{
		     LCD_voidSendCommand(0b00000001);
		     LCD_voidWriteString("Enter User:");

		     if (flag==0)
		    	 USART_voidWriteData('-');


		     for (u8 Index=0; Index<4;Index++)
		     {
		    	 u8 Read=USART_u8ReadData();
		    	 APP_voidUser_Reciever(Read);
		    	 Local_ArrUserIN[Index]=Read;
		     }
		     _delay_ms(1000);

		     LCD_voidSendCommand(1);
		     LCD_voidWriteString("Enter Password:");

		     for (u8 Index=0; Index<4;Index++)
		     {
		    	 u8 Read=USART_u8ReadData();
		    	 APP_voidPass_Reciever(Read);
		    	 Local_ArrPassIN[Index]=Read;
		     }
		     _delay_ms(1000);

		     if (!APP_u8UserCheck(Local_ArrPassIN,Local_ArrPass)
		    		 || !APP_u8UserCheck(Local_ArrUserIN,Local_ArrUser))
		     {
		    	 if (flag==2)              //three
		    	 {
		    		 USART_voidWriteData('T');
		    		 LCD_voidSendCommand(1);
		    		 LCD_voidWriteString("System Locked");
		    		 _delay_ms(250);
		    		 USART_voidWriteData('.');
		    		 LCD_voidSendCommand(1);
		    		 flag=0;
		    		 Flag2=0;
		    		 _delay_ms(1000);
		    		 break;
		    	 }
		    	 else
		    	 {
		    		 LCD_voidSendCommand(1);
		    		 LCD_voidWriteString("Wrong Data");
		    		 LCD_voidGoToXY(0,1);
		    		 LCD_voidWriteString("Try Again");
		    		 if (flag==0){
		    			 USART_voidWriteData('W');flag++;} // one time
		    		 else if (flag==1){USART_voidWriteData('N');flag++;}// two
		    		 _delay_ms(1000);
		    	 }
		     }
		     else
		    	 Local_u8Flag=0;

		     }while (Local_u8Flag);

		     if (Flag2==0)
		    	 continue;
		     else
		     {
		    	 USART_voidWriteData('D');
		    	 LCD_voidSendCommand(1);
		    	 LCD_voidWriteString("OPening Door...");
		    	 _delay_ms(200);
		    	 PWM_voidInitTimer1();
		    	 for (u16 Local_u16Index=751;Local_u16Index<=1250;Local_u16Index++)
		    	 {
		    		 PWM_voidSetCompareMatchValue(Local_u16Index);
		    		 _delay_ms(1);
		    	 }
		    	 LCD_voidSendCommand(1);
		    	 LCD_voidWriteString("Door Opened");
		    	 _delay_ms(250);
		    	 LCD_voidSendCommand(1);
		    	 while (1)
		    	 {
		    		 u8 LEDS;
		    		 u16 Local_u16ADC1Val = ADC_u16Read(ADC1);

		    		 f32 Local_f32ADC1Val=ADC_f32ADCtoVolt (Local_u16ADC1Val);

		    		 LCD_voidGoToXY(0,0);
		    		 LCD_voidWriteString("TemP: ");
		    		 f32 TemP=LM35_voidVoltToTemperature(Local_f32ADC1Val);
		    		 if (TemP>=26.00)
		    		 {
		    			 DIO_voidSetPinValue(DIO_PORTA,PIN3,HIGH);
		    			 //LCD_voidGoToXY(15,0);
		    			 LCD_voidWriteSpecialChar(Global_u8Motor,15,0,PATTERN_0);
		    		 }
		    		 else
		    		 {
		    			 DIO_voidSetPinValue(DIO_PORTA,PIN3,LOW);
		    			 LCD_voidGoToXY(15,0);
		    			 LCD_voidSendData(0b00010000);
		    		 }

		    		 u16 Local_u16ADC0Val = ADC_u16Read(ADC0);

		    		 f32 Local_f32ADC0Val= ADC_f32ADCtoVolt (Local_u16ADC0Val);
		    		 LCD_voidGoToXY(0,1);
		    		LCD_voidWriteString("LEDS: ");
		    			 if (Local_f32ADC0Val>=4.6)
		    			 {
		    				 DIO_voidSetPortValue(DIO_PORTB,0B11111111);
		    				 LEDS=8;}
		    			 else if (Local_f32ADC0Val<=0.3)
		    			 {
		    				 DIO_voidSetPortValue(DIO_PORTB,0B0);
		    				 LEDS=0;
		    			 }
		    			 else if (Local_f32ADC0Val>=0.31 && Local_f32ADC0Val<=0.5)
		    			 {
		    				 DIO_voidSetPortValue(DIO_PORTB,0B00000001);
		    				 LEDS=1;
		    			 }
		    			 else if (Local_f32ADC0Val>=0.51 && Local_f32ADC0Val<=0.9)
		    			 {
		    				 DIO_voidSetPortValue(DIO_PORTB,0B00000011);
		    				 LEDS=2;
		    			 }
		    			 else if (Local_f32ADC0Val>=0.91 && Local_f32ADC0Val<=1.7)
		    			 {
		    				 DIO_voidSetPortValue(DIO_PORTB,0B00000111);
		    				 LEDS=3;
		    			 }
		    			 else if (Local_f32ADC0Val>=1.71 && Local_f32ADC0Val<=2.6)
		    			 {
		    				 DIO_voidSetPortValue(DIO_PORTB,0B00001111);
		    				 LEDS=4;
		    			 }
		    			 else if (Local_f32ADC0Val>=2.61 && Local_f32ADC0Val<=3.4)
		    			 {
		    				 DIO_voidSetPortValue(DIO_PORTB,0B00011111);
		    				 LEDS=5;
		    			 }
		    			 else if (Local_f32ADC0Val>=3.41 && Local_f32ADC0Val<=4.2)
		    			 {
		    				 DIO_voidSetPortValue(DIO_PORTB,0B00111111);
		    				 LEDS=6;
		    			 }
		    			 else if (Local_f32ADC0Val>=4.21 && Local_f32ADC0Val<4.6)
		    			 {
		    				 DIO_voidSetPortValue(DIO_PORTB,0B01111111);
		    				 LEDS=7;
		    			 }
		    			 LCD_voidWriteNumber(LEDS);
		    	 }
		     }
		}
	}

	return 0;
}


