/*
 * DIO_config.h
 *
 * Created: 11/7/2022 1:53:28 AM
 *  Author: Abanoub yanni
 */ 


#ifndef GPIO_CONFIG_H_
#define GPIO_CONFIG_H_

#define NUM_OF_CONFIGURED_PINS   2

/* every pin has a unique enum */
typedef enum 	
{
	PA0,PA1,PA2,PA3,PA4,PA5,PA6,PA7,
	PB0,PB1,PB2,PB3,PB4,PB5,PB6,PB7,
	PC0,PC1,PC2,PC3,PC4,PC5,PC6,PC7,
	PD0,PD1,PD2,PD3,PD4,PD5,PD6,PD7,
	PE0,PE1,PE2,PE3,PE4,PE5,
	PF0,PF1,PF2,PF3,PF4
	
}GPIO_PINID;
	
/* Functionality of the channel */
typedef enum 
{
	GPIO_enum_DIGITAL_INPUT_OUTPUT,GPIO_enum_ALTERNATIVE_FUNC
}GPIO_Mode;

/* Direction types */
typedef enum
{
	GPIO_enum_INPUT,GPIO_enum_OUTPUT
	
}GPIO_Direction;

/* output high or low */
typedef enum {

	GPIO_enum_High,
	GPIO_enum_Low
	
}GPIO_levelType;

typedef enum
{
	GPIO_enum_input_PULLED_UP,
	GPIO_enum_input_PULLED_DOWN,
	GPIO_enum_output_OPEN_DRAIN,
	GPIO_enum_None
	
	
}GPIO_PinInernalAttachType;

typedef enum 
{
	GPIO_enum_2mA,
	GPIO_enum_4mA,
	GPIO_enum_8mA
	
}GPIO_pinOutputCurrent;

typedef struct 
{
	GPIO_PINID PIN_ID; //ok
	GPIO_Mode PIN_MODE; //
	GPIO_Direction PIN_DIRECTION;
	GPIO_PinInernalAttachType PIN_ATTACH;
	GPIO_pinOutputCurrent PIN_CURRENT;
	GPIO_levelType PIN_LEVEL;
	
	
	
}GPIO_PIN_CONFIG;




#endif /* GPIO_CONFIG_H_ */
