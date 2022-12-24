


/*
 * DIO_private.h
 *
 * Created: 8/30/2022 1:53:18 AM
 *  Author: Abanoub ibrahim Yanni
 */ 


#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_
#include "STD_TYPES.h"
/* IT IS THE MACROS OF ALL DIO REGISTERS WE NEED */

#define GPIO_PORTA_BASE     0x40004000
#define GPIO_PORTB_BASE     0x40005000
#define GPIO_PORTC_BASE     0x40006000
#define GPIO_PORTD_BASE     0x40007000
#define GPIO_PORTE_BASE     0x40024000
#define GPIO_PORTF_BASE     0x40025000


/* clock for GPIO peripheral */
/*
 * set bit0 -> Enable clock to PORTA
 * set bit1 -> Enable clock to PORTB
 *						.
 *						.
 * set bit5 -> Enable clock to PORTF
 */

//#define TURN_ON_PORTA_CLK 					1
//#define TURN_ON_PORTB_CLK 					2
//#define TURN_ON_PORTC_CLK 					4
//#define TURN_ON_PORTD_CLK 					8
//#define TURN_ON_PORTE_CLK 					16
//#define TURN_ON_PORTF_CLK 					32


#define GPIO_u32_RCGCGPIO_REG 		 *((volatile u32*) (0x400FE608) )       


/* PORTA registers */
#define GPIO_u32_GPIODATA_PORTA_REG 		 *((volatile u32*) (GPIO_PORTA_BASE+0X3FC) )		
#define GPIO_u32_GPIODIR_PORTA_REG  		 *((volatile u32*) (GPIO_PORTA_BASE+0X400) )  
#define GPIO_u32_GPIOFSEL_PORTA_REG 		 *((volatile u32*) (GPIO_PORTA_BASE+0X420) ) //Alternative function select  GPIO->clear  
#define GPIO_u32_GPIODR2R_PORTA_REG 		 *((volatile u32*) (GPIO_PORTA_BASE+0X500) ) // drive 2 mA   setbit->2mA  and clear by hardware 4&8 mA 
#define GPIO_u32_GPIODR4R_PORTA_REG 		 *((volatile u32*) (GPIO_PORTA_BASE+0X504) )
#define GPIO_u32_GPIODR8R_PORTA_REG 		 *((volatile u32*) (GPIO_PORTA_BASE+0X508) )
#define GPIO_u32_GPIOODR_PORTA_REG  		 *((volatile u32*) (GPIO_PORTA_BASE+0X50C) ) // open drain select set-> open drain enable 
#define GPIO_u32_GPIOPUR_PORTA_REG  		 *((volatile u32*) (GPIO_PORTA_BASE+0X510) )  //set->pull_up	
#define GPIO_u32_GPIOPDR_PORTA_REG  		 *((volatile u32*) (GPIO_PORTA_BASE+0X514) )
#define GPIO_u32_GPIODEN_PORTA_REG  		 *((volatile u32*) (GPIO_PORTA_BASE+0X51C) )  // set to be digital i/o   
	

/* PORTB registers */ 
#define GPIO_u32_GPIODATA_PORTB_REG 		 *((volatile u32*) (GPIO_PORTB_BASE+0X3FC) )
#define GPIO_u32_GPIODIR_PORTB_REG  		 *((volatile u32*) (GPIO_PORTB_BASE+0X400) )
#define GPIO_u32_GPIOFSEL_PORTB_REG 		 *((volatile u32*) (GPIO_PORTB_BASE+0X420) ) //Alternative function select  GPIO->clear
#define GPIO_u32_GPIODR2R_PORTB_REG 		 *((volatile u32*) (GPIO_PORTB_BASE+0X500) ) // drive 2 mA   setbit->2mA  and clear by hardware 4&8 mA
#define GPIO_u32_GPIODR4R_PORTB_REG 		 *((volatile u32*) (GPIO_PORTB_BASE+0X504) )
#define GPIO_u32_GPIODR8R_PORTB_REG 		 *((volatile u32*) (GPIO_PORTB_BASE+0X508) )
#define GPIO_u32_GPIOODR_PORTB_REG  		 *((volatile u32*) (GPIO_PORTB_BASE+0X50C) ) // open drain select set-> open drain enable
#define GPIO_u32_GPIOPUR_PORTB_REG  		 *((volatile u32*) (GPIO_PORTB_BASE+0X510) )  //set->pull_up	
#define GPIO_u32_GPIOPDR_PORTB_REG  		 *((volatile u32*) (GPIO_PORTB_BASE+0X514) )
#define GPIO_u32_GPIODEN_PORTB_REG  		 *((volatile u32*) (GPIO_PORTB_BASE+0X51C) )  // set to be digital i/o

/* PORTC registers */ 
#define GPIO_u32_GPIODATA_PORTC_REG 		 *((volatile u32*) (GPIO_PORTC_BASE+0X3FC) )
#define GPIO_u32_GPIODIR_PORTC_REG  		 *((volatile u32*) (GPIO_PORTC_BASE+0X400) )
#define GPIO_u32_GPIOFSEL_PORTC_REG 		 *((volatile u32*) (GPIO_PORTC_BASE+0X420) ) //Alternative function select  GPIO->clear
#define GPIO_u32_GPIODR2R_PORTC_REG 		 *((volatile u32*) (GPIO_PORTC_BASE+0X500) ) // drive 2 mA   setbit->2mA  and clear by hardware 4&8 mA
#define GPIO_u32_GPIODR4R_PORTC_REG 		 *((volatile u32*) (GPIO_PORTC_BASE+0X504) )
#define GPIO_u32_GPIODR8R_PORTC_REG 		 *((volatile u32*) (GPIO_PORTC_BASE+0X508) )
#define GPIO_u32_GPIOODR_PORTC_REG  		 *((volatile u32*) (GPIO_PORTC_BASE+0X50C) ) // open drain select set-> open drain enable
#define GPIO_u32_GPIOPUR_PORTC_REG  		 *((volatile u32*) (GPIO_PORTC_BASE+0X510) )  //set->pull_up	
#define GPIO_u32_GPIOPDR_PORTC_REG  		 *((volatile u32*) (GPIO_PORTC_BASE+0X514) )
#define GPIO_u32_GPIODEN_PORTC_REG  		 *((volatile u32*) (GPIO_PORTC_BASE+0X51C) )  // set to be digital i/o

/* PORTD registers */ 
#define GPIO_u32_GPIODATA_PORTD_REG 		 *((volatile u32*) (GPIO_PORTD_BASE+0X3FC) )
#define GPIO_u32_GPIODIR_PORTD_REG  		 *((volatile u32*) (GPIO_PORTD_BASE+0X400) )
#define GPIO_u32_GPIOFSEL_PORTD_REG 		 *((volatile u32*) (GPIO_PORTD_BASE+0X420) ) //Alternative function select  GPIO->clear
#define GPIO_u32_GPIODR2R_PORTD_REG 		 *((volatile u32*) (GPIO_PORTD_BASE+0X500) ) // drive 2 mA   setbit->2mA  and clear by hardware 4&8 mA
#define GPIO_u32_GPIODR4R_PORTD_REG 		 *((volatile u32*) (GPIO_PORTD_BASE+0X504) )
#define GPIO_u32_GPIODR8R_PORTD_REG 		 *((volatile u32*) (GPIO_PORTD_BASE+0X508) )
#define GPIO_u32_GPIOODR_PORTD_REG  		 *((volatile u32*) (GPIO_PORTD_BASE+0X50C) ) // open drain select set-> open drain enable
#define GPIO_u32_GPIOPUR_PORTD_REG  		 *((volatile u32*) (GPIO_PORTD_BASE+0X510) )  //set->pull_up	
#define GPIO_u32_GPIOPDR_PORTD_REG  		 *((volatile u32*) (GPIO_PORTD_BASE+0X514) )
#define GPIO_u32_GPIODEN_PORTD_REG  		 *((volatile u32*) (GPIO_PORTD_BASE+0X51C) )  // set to be digital i/o

/* PORTE registers */ 
#define GPIO_u32_GPIODATA_PORTE_REG 		 *((volatile u32*) (GPIO_PORTE_BASE+0X3FC) )
#define GPIO_u32_GPIODIR_PORTE_REG  		 *((volatile u32*) (GPIO_PORTE_BASE+0X400) )
#define GPIO_u32_GPIOFSEL_PORTE_REG 		 *((volatile u32*) (GPIO_PORTE_BASE+0X420) ) //Alternative function select  GPIO->clear
#define GPIO_u32_GPIODR2R_PORTE_REG 		 *((volatile u32*) (GPIO_PORTE_BASE+0X500) ) // drive 2 mA   setbit->2mA  and clear by hardware 4&8 mA
#define GPIO_u32_GPIODR4R_PORTE_REG 		 *((volatile u32*) (GPIO_PORTE_BASE+0X504) )
#define GPIO_u32_GPIODR8R_PORTE_REG 		 *((volatile u32*) (GPIO_PORTE_BASE+0X508) )
#define GPIO_u32_GPIOODR_PORTE_REG  		 *((volatile u32*) (GPIO_PORTE_BASE+0X50C) ) // open drain select set-> open drain enable
#define GPIO_u32_GPIOPUR_PORTE_REG  		 *((volatile u32*) (GPIO_PORTE_BASE+0X510) )  //set->pull_up	
#define GPIO_u32_GPIOPDR_PORTE_REG  		 *((volatile u32*) (GPIO_PORTE_BASE+0X514) )
#define GPIO_u32_GPIODEN_PORTE_REG  		 *((volatile u32*) (GPIO_PORTE_BASE+0X51C) )  // set to be digital i/o

/* PORTF registers */ 
#define GPIO_u32_GPIODATA_PORTF_REG 		 *((volatile u32*) (GPIO_PORTF_BASE+0X3FC) )
#define GPIO_u32_GPIODIR_PORTF_REG  		 *((volatile u32*) (GPIO_PORTF_BASE+0X400) )
#define GPIO_u32_GPIOFSEL_PORTF_REG 		 *((volatile u32*) (GPIO_PORTF_BASE+0X420) ) //Alternative function select  GPIO->clear
#define GPIO_u32_GPIODR2R_PORTF_REG 		 *((volatile u32*) (GPIO_PORTF_BASE+0X500) ) // drive 2 mA   setbit->2mA  and clear by hardware 4&8 mA
#define GPIO_u32_GPIODR4R_PORTF_REG 		 *((volatile u32*) (GPIO_PORTF_BASE+0X504) )
#define GPIO_u32_GPIODR8R_PORTF_REG 		 *((volatile u32*) (GPIO_PORTF_BASE+0X508) )
#define GPIO_u32_GPIOODR_PORTF_REG  		 *((volatile u32*) (GPIO_PORTF_BASE+0X50C) ) // open drain select set-> open drain enable
#define GPIO_u32_GPIOPUR_PORTF_REG  		 *((volatile u32*) (GPIO_PORTF_BASE+0X510) )  //set->pull_up	
#define GPIO_u32_GPIOPDR_PORTF_REG  		 *((volatile u32*) (GPIO_PORTF_BASE+0X514) )
#define GPIO_u32_GPIODEN_PORTF_REG  		 *((volatile u32*) (GPIO_PORTF_BASE+0X51C) )  // set to be digital i/o


#define DIO_PRIVATE_uint8_CONC(b0,b1,b2,b3,b4,b5,b6,b7)		DIO_PRIVATE_uint8_CONC_HELP(b0,b1,b2,b3,b4,b5,b6,b7)

#define DIO_PRIVATE_uint8_CONC_HELP(b0,b1,b2,b3,b4,b5,b6,b7)		0b##b7##b6##b5##b4##b3##b2##b1##b0

#endif /* DIO_PRIVATE_H_ */