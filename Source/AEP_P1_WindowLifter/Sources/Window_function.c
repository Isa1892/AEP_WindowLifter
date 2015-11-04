
//Headers of window function 
#include "Application\Window_function.h"


T_SBYTE rub_Led = 0;

void Motion_window()
{
	T_UBYTE lub_validPress = 0;

	/* Evaluate press down */
	if( !PButt_Press(PBUTT_DOWN) )
	{
		lub_validPress = Valid_Press(PBUTT_DOWN);
		if( lub_validPress == 1 )
		{
			Motion_Window_Down(PBUTT_DOWN);
			
		}
		lub_validPress = 0;
	}
	/* Evaluate press up */
	if( !PButt_Press(PBUTT_UP) )
	{
		Led_Off(LED_GREEN_DOWN);
		lub_validPress = Valid_Press(PBUTT_UP);
		if( lub_validPress == 1 )
		{
			Motion_Window_Up(PBUTT_UP);
		}
		lub_validPress = 0;
	}
	
}

void Motion_Window_Up()
{
	
	Restart_STM(TM_500MS);
	Led_Off(LED_GREEN_DOWN);
	while( !Flag_STM(TM_500MS) );
	/*Evaluate auto/manual press*/
	if( !PButt_Press(PBUTT_UP) && PButt_Press(PBUTT_DOWN))
	{
		Led_On(LED_BLUE_UP);
		Mov_Manual_Up();
	}
	else
	{
		Led_On(LED_BLUE_UP);
		Mov_Auto_Up();
	}
	Led_Off(LED_BLUE_UP);
}

void Motion_Window_Down()
{
	
	Restart_STM(TM_500MS);
	while( !Flag_STM(TM_500MS) );
	
	if( !PButt_Press(PBUTT_DOWN) &&  PButt_Press(PBUTT_UP))
	{
		Led_On(LED_GREEN_DOWN);
		Mov_Manual_Down();
		
	}
	else
	{
		Led_On(LED_GREEN_DOWN);
		Mov_Auto_Down();

	}
	Led_Off(LED_GREEN_DOWN);
}

void Mov_Manual_Up()
{	
	T_UBYTE lub_apinch = 0;
	do
	{
		Led_Off(LED_GREEN_DOWN);
		Led_On(rub_Led);
		Restart_STM(TM_400MS);
		while( !Flag_STM(TM_400MS) );
		rub_Led--;
		if( !PButt_Press(PBUTT_APINCH) )
		{
		  rub_Led = Mov_Anti_Pinch(rub_Led);
		  lub_apinch = 1;
		}
	}while( !PButt_Press(PBUTT_UP) && rub_Led >= 0 && PButt_Press(PBUTT_DOWN));
	lub_apinch = 0;
}

void Mov_Auto_Up()
{
	T_UBYTE lub_apinch = 0;
	Led_Off(LED_GREEN_DOWN);
	do
	{
		Led_Off(LED_GREEN_DOWN);
		Led_On(rub_Led);
		Restart_STM(TM_400MS);
		while( !Flag_STM(TM_400MS) );
		rub_Led--;
		if( !PButt_Press(PBUTT_APINCH) )//revisar antipinch
		{
		  rub_Led = Mov_Anti_Pinch(rub_Led);
		  lub_apinch = 1;
		}
	}while( rub_Led >= 0 && lub_apinch == 0 && PButt_Press(PBUTT_DOWN));
	lub_apinch = 0;
}
void Mov_Manual_Down()
{
	do
	{
		Led_Off(rub_Led);
		Restart_STM(TM_400MS);
		while( !Flag_STM(TM_400MS) );
		rub_Led++;
	}while( !PButt_Press(PBUTT_DOWN) && rub_Led <= 9 && PButt_Press(PBUTT_UP));

}
void Mov_Auto_Down()
{
	//
	do{
		Led_Off(rub_Led);
		Restart_STM(TM_400MS);
		while( !Flag_STM(TM_400MS) );
		rub_Led++;
	}while( rub_Led <= 9 && PButt_Press(PBUTT_UP));
}
T_SBYTE Mov_Anti_Pinch(T_SBYTE lsb_led)
{
	Led_On(LED_GREEN_DOWN);
	Led_Off(LED_BLUE_UP);
	//
	do
	{
		Led_Off(lsb_led);
		Restart_STM(TM_400MS);
		while( !Flag_STM(TM_400MS) );
		lsb_led++;
	}while(lsb_led <= 9);
	Led_Off (LED_GREEN_DOWN);
	Restart_STM(TM_5S);
	while( !Flag_STM(TM_5S) );
	return lsb_led;
}

