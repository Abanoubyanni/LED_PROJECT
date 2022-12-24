/*
 * DIO_interface.h
 *
 *  Author: ABANOUB IBRAHIM YANNI
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include "STD_TYPES.h"
#include "GPIO_config.h"

/* API_types */
//DIO_channelType

//DIO_PortType


//DIO_LevelType
typedef enum {


DIO_enum_OUTPUT_HIGH,     	
DIO_enum_OUTPUT_LOW ,     
DIO_enum_INPUT_PULL_UP	,	
DIO_enum_INPUT_PULL_DOWN	,
DIO_enum_OPEN_DRAIN		

}DIO_config;


//DIO_PortLevelType




/* MACROS FOR PORT ID */
#define DIO_uint8_PORTA   0 
#define DIO_uint8_PORTB   1
#define DIO_uint8_PORTC   2
#define DIO_uint8_PORTD   3
#define DIO_uint8_PORTE   4
#define DIO_uint8_PORTF   5


/* MACROS FOR PIN ID */

#define DIO_uint8_PIN0    0
#define DIO_uint8_PIN1    1
#define DIO_uint8_PIN2    2
#define DIO_uint8_PIN3    3
#define DIO_uint8_PIN4    4
#define DIO_uint8_PIN5    5
#define DIO_uint8_PIN6    6
#define DIO_uint8_PIN7    7




/* API_Functions */

/* pointer of an array to struct and every struct is a configuration of one pin */
void GPIO_voidInit(GPIO_PIN_CONFIG* Copy_PArrOfStruct);

DIO_config DIO_ReadChannel(uint8 PortId,uint8 ChannelId);
void DIO_WriteChannel(uint8 PortId,uint8 ChannelId,DIO_config config);




#endif 