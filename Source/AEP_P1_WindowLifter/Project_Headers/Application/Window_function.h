/*
 * Window_function.h
 *
 *  Created on: Nov 3, 2015
 *      Author: Isa
 */

#ifndef WINDOW_FUNCTION_H_
#define WINDOW_FUNCTION_H_

#include "stdtypedef.h"
#include "Hal\Internal_PButt.h"
#include "Hal\External_Leds.h"
#include "Mal\STM_Timer.h"
#include "stdtypedef.h"
#include "Mal\MPC5606B.h"

//Functions of Window_function
void Motion_window();
void Motion_Window_Down();
void Motion_Window_Up();
void Mov_Manual_Up();
void Mov_Auto_Up();
void Mov_Manual_Down();
void Mov_Auto_Down();
T_SBYTE Mov_Anti_Pinch(T_SBYTE);


#endif /* WINDOW_FUNCTION_H_ */
