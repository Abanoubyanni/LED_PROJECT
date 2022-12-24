#include "GPIO_config.h"

/* the number of array elements is the number of pins you want to config */
/* you can see all enums and the structure implementation in GPIO_config.h file*/


/*
*
*it's an array of structure every element can config one pin in the microcontroller
*note:
*PD4,PD5,PB0 and PB1 are limited to 3.6V if you config them to be input channel
*/



const GPIO_PIN_CONFIG GPIO_ArrOfStruct_PinConfig[NUM_OF_CONFIGURED_PINS]={
																											{PA0,GPIO_enum_DIGITAL_INPUT_OUTPUT,GPIO_enum_INPUT,GPIO_enum_input_PULLED_UP,GPIO_enum_2mA,GPIO_enum_High},
																											{PA1,GPIO_enum_DIGITAL_INPUT_OUTPUT,GPIO_enum_OUTPUT,GPIO_enum_None,GPIO_enum_2mA,GPIO_enum_High}
																																			
																										};
