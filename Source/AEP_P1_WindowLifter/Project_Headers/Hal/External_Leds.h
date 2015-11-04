/*
 * External_Leds.h
 *
 *  Created on: Nov 3, 2015
 *      Author: Isa
 */

#ifndef EXTERNAL_LEDS_H_
#define EXTERNAL_LEDS_H_

#define LED_GREEN_DOWN 10
#define LED_BLUE_UP 11

//HEaders used for HAl_headers.c
#include "Mal\Mal_headers.h"

void Init_Leds();
void Led_Off(signed char);
void Led_On(signed char);

#endif /* EXTERNAL_LEDS_H_ */
