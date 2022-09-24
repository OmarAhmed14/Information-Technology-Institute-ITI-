/*
 * ADC_Program.c
 *
 *  Created on: Sep 6, 2022
 *      Author: user
 */
#include "Std_Types.h"
#include "Bit_Math.h"

#include "ADC_Registers.h"
#include "ADC_Interface.h"

void ADC_voidInit(void)
{
	ADMUX=AREF<<6;
	ADMUX|=ADCLEFT_ADJUSTMENT_OFF<<5;
	Set_Bit(ADCSRA,ADCSRA_ADATE);
	Set_Bit(ADCSRA,ADCSRA_ADEN);
	ADCSRA|=DIV_64<<0;
	Set_Bit(ADCSRA,ADCSRA_ADIF);
}

u16 ADC_u16Read(ADC_CHANALS_options_t Copy_u8ADCchannel)
{
	ADMUX|=Copy_u8ADCchannel<<0;
	Set_Bit(ADCSRA,ADCSRA_ADSC);
	while (!Get_Bit(ADCSRA,ADCSRA_ADIF));
	Set_Bit(ADCSRA,ADCSRA_ADIF);
	return ADCLH;
}

f32 ADC_f32ADCtoVolt(u16 Copy_u16ADCVal)
{
	f32 ADC_Localf32Volt = (Copy_u16ADCVal/1024.0)*VREF;
	return ADC_Localf32Volt;
}
