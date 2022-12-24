
#include "STD_TYPES.h"
#include "SYSTICK_interface.h"
#include "SYSTICK_private.h"
#include "SYSTICK_config.h"

static void (* SYSTICK_PF) () = NULL;
// we can support up to 1073 seconds
void SYSTICK_voidStartTimer()
{
	
	
	
	SYSTICK_u32_STCTRL_REG=3;
	
}

void SYSTICK_voidSetPreload (u32 preload )
{
	
SYSTICK_u32_STRELOAD_REG=preload;	
		
}

void SYSTICKvoid_SetCallBack( void (* Copy_PF)() )
{

	SYSTICK_PF=Copy_PF;
	
	
}





void SysTick_Handler ()
{
	
	SYSTICK_PF();
	
}