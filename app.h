#ifndef APP_H_
#define APP_H_

#include "STD_TYPES.h"

#define SYSTICK_TIME_ON_IN_SECONDS     1
#define SYSTICK_TIME_OFF_IN_SECONDS    2


uint8 counter_on=0;
uint8 counter_off=0;
u32 Num_On_ticks = SYSTICK_TIME_ON_IN_SECONDS*4000000;
u32 Num_Off_ticks =SYSTICK_TIME_OFF_IN_SECONDS*4000000;

uint8 overflow_on=0;
u32 preload_on_value;
uint8 overflow_off=0;
u32 preload_off_value;

void calc()
{
if (SYSTICK_TIME_ON_IN_SECONDS<=4)
	{
		overflow_on=1;
		preload_on_value=Num_On_ticks;
	
	}
	else
	{
	 overflow_on=Num_On_ticks/16777215;
	 overflow_on++;
	 preload_on_value=Num_On_ticks/overflow_on;
		
	}
	
	if (SYSTICK_TIME_OFF_IN_SECONDS<=4)
	{
		overflow_off=1;
		preload_off_value=Num_Off_ticks;
	
	}
	else
	{
	 overflow_off=Num_Off_ticks/16777215;
	 overflow_off++;
	 preload_off_value=Num_Off_ticks/overflow_on;
		
	}
	
	
counter_on=overflow_on;
counter_off=overflow_off;
}









#endif