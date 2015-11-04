
//Header for external leds.c
#include "Hal\External_Leds.h"


void Init_Leds()
{
	T_UBYTE lub_count;
	for(lub_count = 0; lub_count <= 11; lub_count++)
	{
		SIU.PCR[lub_count].R = 0x0201;
		SIU.GPDO[lub_count].B.PDO = 1;
	}	
}

void Led_Off(T_SBYTE lsb_led)
{
	SIU.GPDO[lsb_led].B.PDO = 0;
}

void Led_On(T_SBYTE lsb_led)
{
	SIU.GPDO[lsb_led].B.PDO = 1;
}
