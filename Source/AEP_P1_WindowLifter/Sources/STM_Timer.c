
//Header for timer
#include "Mal\STM_Timer.h"


void Init_STM()
{
	STM.CNT.R = 0; 
	STM.CH[TM_1MS].CMP.R = 0x9C401;			//1msec
	STM.CH[TM_1MS].CCR.B.CEN = 1;
	STM.CH[TM_400MS].CMP.R = 0x186A001;		//400ms
	STM.CH[TM_400MS].CCR.B.CEN = 1;
	STM.CH[TM_500MS].CMP.R = 0x1E84801;		//500ms
	STM.CH[TM_500MS].CCR.B.CEN = 1;
	STM.CH[TM_5S].CMP.R = 0x1312D001;		//5 sec
	STM.CH[TM_5S].CCR.B.CEN = 1;
	STM.CR.B.FRZ = 1;//0
	STM.CR.B.CPS = 0;
	STM.CR.B.TEN = 1;

}

void Restart_STM(T_UBYTE lub_channel)
{
	STM.CNT.R = 0; 							//Init in 0
	STM.CH[lub_channel].CIR.B.CIF = 1;		//Clean flag
}

T_UBYTE Flag_STM(T_UBYTE lub_channel)
{
	return STM.CH[lub_channel].CIR.B.CIF;
}
