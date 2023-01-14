/*
 * PWM_Lconfig.c
 *
 * Created: 1/1/2023
 *  Author: George Emad Shoukry
 */ 

#include "PWM.h"

const PWM_ConfigurationType gaStrPWM_Config[NUM_OPERATING_PWM_CHANNELS] = 
{
	{
		PWM_TIMER_0_CHANNEL,
		PWM_FAST,
		PWM_PRESCALE_8,
		PWM_INVERTED,
		256U,
		4U,
		25U
	}
};