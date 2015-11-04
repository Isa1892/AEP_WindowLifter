/*
 * Functions_main.c
 *
 *  Created on: Nov 4, 2015
 *      Author: Oswaldo Garcia Cervantes / Maria Isamar Saldaña Galvéz
 */

//Function that initialize the function of main

#include "Mal\Functions_main.h"

void General_config()
{
	Init_PButt();                             //Configuration the buttons
	Init_Leds();                             //Configuration the leds
	Init_STM();                             //Configuration the clock
	Led_Off(LED_GREEN_DOWN);               //Off led green at run the window lifter 
	Led_Off(LED_BLUE_UP);                 //Off led blue at run the window lifter
}
