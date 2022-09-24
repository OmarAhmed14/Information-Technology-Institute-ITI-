/*
 * LM35.h
 *
 *  Created on: Sep 6, 2022
 *      Author: user
 */

#ifndef LM35_H_
#define LM35_H_

void LM35_voidDisplayBits(ADC_CHANALS_options_t Copy_u8ADCchannel);

void LM35_voidDisplayVolt(f32 Local_f32Volt);

void LM35_voidVoltToTemperature(f32 Copy_f32ADCVolt);

#endif /* LM35_H_ */
