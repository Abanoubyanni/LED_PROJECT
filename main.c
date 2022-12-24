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
extern GPIO_ArrOfStruct_PinConfig[NUM_OF_CONFIGURED_PINS];
void pwm_led();
uint8 flag=0;

int main ()
{

	
	DIO_WriteChannel(DIO_uint8_PORTA,DIO_uint8_PIN4,DIO_enum_OUTPUT_HIGH);
	
//GPIO_voidInit((GPIO_PIN_CONFIG*)GPIO_ArrOfStruct_PinConfig);	
	calc();
	SYSTICKvoid_SetCallBack(pwm_led);
	
	
	

while(1)
{
	
	if (flag==0)
	{
		SYSTICK_voidSetPreload(overflow_on);
	}
	else
	{
	SYSTICK_voidSetPreload(overflow_off);
		
	}
	
	
}
return 0;


}



void pwm_led(){


if(flag==0)
{
	counter_on--;
	if (counter_on==0){
	
	DIO_WriteChannel(DIO_uint8_PORTA,DIO_uint8_PIN4,DIO_enum_OUTPUT_LOW);
	counter_on=overflow_on;
	flag=1;
	}
	
}
else
{
	counter_off--;
if(counter_off==0){
	DIO_WriteChannel(DIO_uint8_PORTA,DIO_uint8_PIN4,DIO_enum_OUTPUT_HIGH);
	counter_off=overflow_off;
	flag=0;
}

}
	

	
	
}