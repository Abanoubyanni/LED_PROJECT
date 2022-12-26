#ifndef SYSTICK_INTERFACE_H_
#define SYSTICK_INTERFACE_H_




#include "STD_TYPES.h"


void SYSTICK_voidInit();




void SYSTICK_voidSetPreload (u32 preload );
void SYSTICK_voidStartTimer();
void SYSTICKvoid_SetCallBack( void (* Copy_PF)() );

void SYSTICK_voidRestartcounting();
#endif 



