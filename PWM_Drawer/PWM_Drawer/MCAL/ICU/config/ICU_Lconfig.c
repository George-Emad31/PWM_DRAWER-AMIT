/*
 * ICU_Lconfig.c
 *
 * Created: 1/1/2023
 *  Author: George Emad Shoukry
 */ 

#include "ICU.h"

const ICU_ConfigurationType gStrICU_Config = 
{
	ICU_TIMER_1,
	ICU_PRESCALE_8,
	ICU_TRIGGER_FALLING_EDGE,
	ICU_INTERRUPT_DISABLED
};