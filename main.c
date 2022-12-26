#include "GPIO_interface.h"
#include "STD_TYPES.h"
#include "SYSTICK_interface.h"
#include "SYSTICK_private.h"
#include "app.h"
/*
*
*			0x40000000, 0x400FFFFF
*
*/
//extern GPIO_ArrOfStruct_PinConfig[NUM_OF_CONFIGURED_PINS];
void pwm_led();
uint8 flag=0;

int main ()
{

	
	DIO_WriteChannel(DIO_uint8_PORTA,DIO_uint8_PIN4,DIO_enum_OUTPUT_HIGH);
	

	calc();
	SYSTICKvoid_SetCallBack(pwm_led);
	
	
	SYSTICK_voidSetPreload(preload_on_value);
	
	
	SYSTICK_voidStartTimer();
	

while(1)
{
	
	
	
}
return 0;


}



void pwm_led(){


if(flag==0)
{
	counter_on--;
	if (counter_on==0){
	
	DIO_WriteChannel(DIO_uint8_PORTA,DIO_uint8_PIN4,DIO_enum_OUTPUT_LOW);
	SYSTICK_voidSetPreload(Num_Off_ticks);
	SYSTICK_voidRestartcounting();
	counter_on=overflow_on;
	flag=1;
	}
	
}
else
{
	counter_off--;
if(counter_off==0){
	DIO_WriteChannel(DIO_uint8_PORTA,DIO_uint8_PIN4,DIO_enum_OUTPUT_HIGH);
	SYSTICK_voidSetPreload(preload_on_value);
	SYSTICK_voidRestartcounting();
	counter_off=overflow_off;
	flag=0;
}

}
	

}