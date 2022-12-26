
#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"
#include "STD_TYPES.h"


//void GPIO_voidInit(GPIO_PIN_CONFIG* Copy_PArrOfStruct)
//{
//	
//	uint8 counter=0;
//	for(counter=0;counter< NUM_OF_CONFIGURED_PINS;counter++)
//	{
//		/*PORTA*/
//		if((Copy_PArrOfStruct+counter)->PIN_ID>=0 && (Copy_PArrOfStruct+counter)->PIN_ID<8)
//		{
//							/* turn on the clk for this port */
//			SET_BIT(GPIO_u32_RCGCGPIO_REG,0);
//			
//							/* is this digital */
//			if(!((Copy_PArrOfStruct+counter)->PIN_MODE))
//			{
//							/* YES digital i/o */
//				CLR_BIT(GPIO_u32_GPIOFSEL_PORTA_REG,(Copy_PArrOfStruct+counter)->PIN_ID);
//				SET_BIT(GPIO_u32_GPIODEN_PORTA_REG,(Copy_PArrOfStruct+counter)->PIN_ID);
//							/* set the direction */
//			//if it's output
//				if((Copy_PArrOfStruct+counter)->PIN_DIRECTION)
//				{
//					SET_BIT(GPIO_u32_GPIODIR_PORTA_REG,(Copy_PArrOfStruct+counter)->PIN_ID);
//										/* output high or low */
//					if((Copy_PArrOfStruct+counter)->PIN_LEVEL == GPIO_enum_High)
//						SET_BIT(GPIO_u32_GPIODATA_PORTA_REG,(Copy_PArrOfStruct+counter)->PIN_ID);
//					else if ((Copy_PArrOfStruct+counter)->PIN_LEVEL == GPIO_enum_Low)
//						CLR_BIT(GPIO_u32_GPIODATA_PORTA_REG,(Copy_PArrOfStruct+counter)->PIN_ID);
//					/* what is the output current  */
//					switch((Copy_PArrOfStruct+counter)->PIN_CURRENT)
//					{
//						case GPIO_enum_2mA:
//							SET_BIT(GPIO_u32_GPIODR2R_PORTA_REG,(Copy_PArrOfStruct+counter)->PIN_ID);
//							break;
//						case GPIO_enum_4mA:
//							SET_BIT(GPIO_u32_GPIODR4R_PORTA_REG,(Copy_PArrOfStruct+counter)->PIN_ID);
//							break;
//						case GPIO_enum_8mA:
//							SET_BIT(GPIO_u32_GPIODR8R_PORTA_REG,(Copy_PArrOfStruct+counter)->PIN_ID);
//							break;
//						
//					
//					}
//					// TO DO output open drain
//				}
//				//if it's input
//				else if(!((Copy_PArrOfStruct+counter)->PIN_DIRECTION))
//				{
//					CLR_BIT(GPIO_u32_GPIODIR_PORTA_REG,(Copy_PArrOfStruct+counter)->PIN_ID);
//										/*input Pull_up or Pull_down  */
//					
//					if((Copy_PArrOfStruct+counter)->PIN_ATTACH==GPIO_enum_input_PULLED_UP)
//					{
//						SET_BIT(GPIO_u32_GPIOPUR_PORTA_REG,(Copy_PArrOfStruct+counter)->PIN_ID);
//						
//					}
//					else if((Copy_PArrOfStruct+counter)->PIN_ATTACH==GPIO_enum_input_PULLED_DOWN)
//					{
//						SET_BIT(GPIO_u32_GPIOPDR_PORTA_REG,(Copy_PArrOfStruct+counter)->PIN_ID);
//					}
//						
//				}
//				
//				
//												
//			}
//			else if((Copy_PArrOfStruct+counter)->PIN_MODE)
//			{
//				SET_BIT(GPIO_u32_GPIOFSEL_PORTA_REG,(Copy_PArrOfStruct+counter)->PIN_ID);
//				//TO DO Alternative function
//			}
//			
//			
//		}
//		/*PORTB*/
//		else if((Copy_PArrOfStruct+counter)->PIN_ID>=8 && (Copy_PArrOfStruct+counter)->PIN_ID<16)
//		{
//			
//							/* turn on the clk for this port */
//			SET_BIT(GPIO_u32_RCGCGPIO_REG,1);
//			
//							/* is this digital */
//			if((Copy_PArrOfStruct+counter)->PIN_MODE==GPIO_enum_DIGITAL_INPUT_OUTPUT)
//			{
//							/* YES digital i/o */
//				CLR_BIT(GPIO_u32_GPIOFSEL_PORTB_REG,(((Copy_PArrOfStruct+counter)->PIN_ID)%8));
//				SET_BIT(GPIO_u32_GPIODEN_PORTB_REG,(((Copy_PArrOfStruct+counter)->PIN_ID)%8));
//							/* set the direction */
//			//if it's output
//				if((Copy_PArrOfStruct+counter)->PIN_DIRECTION==GPIO_enum_OUTPUT)
//				{
//					SET_BIT(GPIO_u32_GPIODIR_PORTB_REG,(((Copy_PArrOfStruct+counter)->PIN_ID)%8));
//										/* output high or low */
//					if((Copy_PArrOfStruct+counter)->PIN_LEVEL == GPIO_enum_High)
//						SET_BIT(GPIO_u32_GPIODATA_PORTB_REG,(((Copy_PArrOfStruct+counter)->PIN_ID)%8));
//					else if ((Copy_PArrOfStruct+counter)->PIN_LEVEL == GPIO_enum_Low)
//						CLR_BIT(GPIO_u32_GPIODATA_PORTB_REG,(((Copy_PArrOfStruct+counter)->PIN_ID)%8));
//					/* what is the output current  */
//					switch((Copy_PArrOfStruct+counter)->PIN_CURRENT)
//					{
//						case GPIO_enum_2mA:
//							SET_BIT(GPIO_u32_GPIODR2R_PORTB_REG,(((Copy_PArrOfStruct+counter)->PIN_ID)%8));
//							break;
//						case GPIO_enum_4mA:
//							SET_BIT(GPIO_u32_GPIODR4R_PORTB_REG,(((Copy_PArrOfStruct+counter)->PIN_ID)%8));
//							break;
//						case GPIO_enum_8mA:
//							SET_BIT(GPIO_u32_GPIODR8R_PORTB_REG,(((Copy_PArrOfStruct+counter)->PIN_ID)%8));
//							break;
//						
//					
//					}
//					// TO DO output open drain
//				}
//				//if it's input
//				else if((Copy_PArrOfStruct+counter)->PIN_DIRECTION==GPIO_enum_INPUT)
//				{
//					CLR_BIT(GPIO_u32_GPIODIR_PORTB_REG,(((Copy_PArrOfStruct+counter)->PIN_ID)%8));
//										/*input Pull_up or Pull_down  */
//					if((Copy_PArrOfStruct+counter)->PIN_ATTACH==GPIO_enum_input_PULLED_UP)
//					{
//						SET_BIT(GPIO_u32_GPIOPUR_PORTB_REG,(((Copy_PArrOfStruct+counter)->PIN_ID)%8));
//						
//					}
//					else if((Copy_PArrOfStruct+counter)->PIN_ATTACH==GPIO_enum_input_PULLED_DOWN)
//					{
//						SET_BIT(GPIO_u32_GPIOPDR_PORTB_REG,(((Copy_PArrOfStruct+counter)->PIN_ID)%8));
//					}
//						
//				}
//				
//				
//												
//			}
//			else if((Copy_PArrOfStruct+counter)->PIN_MODE)
//			{
//				SET_BIT(GPIO_u32_GPIOFSEL_PORTB_REG,(((Copy_PArrOfStruct+counter)->PIN_ID)%8));
//				//TO DO Alternative function
//			}
//			
//			
//		}
//		/*PORTC*/
//		else if((Copy_PArrOfStruct+counter)->PIN_ID>=16 && (Copy_PArrOfStruct+counter)->PIN_ID<24)
//		{
//			//TO DO
//		}
//		/*PORTD*/
//		else if((Copy_PArrOfStruct+counter)->PIN_ID>=24 && (Copy_PArrOfStruct+counter)->PIN_ID<32)
//		{
//			//TO DO
//		}
//		/*PORTE*/
//		else if((Copy_PArrOfStruct+counter)->PIN_ID>=32 && (Copy_PArrOfStruct+counter)->PIN_ID<38)
//		{
//			//TO DO
//		}
//		/*PORTF*/
//		else if((Copy_PArrOfStruct+counter)->PIN_ID>=38 && (Copy_PArrOfStruct+counter)->PIN_ID<43)
//		{
//			//TO DO
//		}
//		
//	
//	}
//	
//
//	
//}

void DIO_WriteChannel(uint8 PortId,uint8 ChannelId,DIO_config config)
{
	/*PORTA*/
		switch(PortId)
		{
			case DIO_uint8_PORTA:
											/* turn on the clk for this port */
			SET_BIT(GPIO_u32_RCGCGPIO_REG,0);
			/* set as digital i/o */
				CLR_BIT(GPIO_u32_GPIOFSEL_PORTA_REG,ChannelId);
				SET_BIT(GPIO_u32_GPIODEN_PORTA_REG,ChannelId);
			switch (config)
			{
				case DIO_enum_OUTPUT_HIGH:
					SET_BIT(GPIO_u32_GPIODIR_PORTA_REG,ChannelId);
					SET_BIT(GPIO_u32_GPIODATA_PORTA_REG,ChannelId);
					break;
				
				case DIO_enum_OUTPUT_LOW:
					SET_BIT(GPIO_u32_GPIODIR_PORTA_REG,ChannelId);
					CLR_BIT(GPIO_u32_GPIODATA_PORTA_REG,ChannelId);
		  	break;
				case DIO_enum_INPUT_PULL_UP:
					CLR_BIT(GPIO_u32_GPIODIR_PORTA_REG,ChannelId);
				  SET_BIT(GPIO_u32_GPIOPUR_PORTA_REG,ChannelId);
					break;
				
				case DIO_enum_INPUT_PULL_DOWN:
					CLR_BIT(GPIO_u32_GPIODIR_PORTA_REG,ChannelId);
				  SET_BIT(GPIO_u32_GPIOPDR_PORTA_REG,ChannelId);	
					break;				
				case DIO_enum_OPEN_DRAIN:
				//TO DO
					break;
			}
				break;
			case DIO_uint8_PORTB:
											/* turn on the clk for this port */
			SET_BIT(GPIO_u32_RCGCGPIO_REG,1);
			/* set as digital i/o */
				CLR_BIT(GPIO_u32_GPIOFSEL_PORTB_REG,ChannelId);
				SET_BIT(GPIO_u32_GPIODEN_PORTB_REG,ChannelId);
			switch (config)
			{
				case DIO_enum_OUTPUT_HIGH:
					SET_BIT(GPIO_u32_GPIODIR_PORTB_REG,ChannelId);
					SET_BIT(GPIO_u32_GPIODATA_PORTB_REG,ChannelId);
					break;
				
				case DIO_enum_OUTPUT_LOW:
					SET_BIT(GPIO_u32_GPIODIR_PORTB_REG,ChannelId);
					CLR_BIT(GPIO_u32_GPIODATA_PORTB_REG,ChannelId);
		  	break;
				case DIO_enum_INPUT_PULL_UP:
					CLR_BIT(GPIO_u32_GPIODIR_PORTB_REG,ChannelId);
				  SET_BIT(GPIO_u32_GPIOPUR_PORTB_REG,ChannelId);
					break;
				
				case DIO_enum_INPUT_PULL_DOWN:
					CLR_BIT(GPIO_u32_GPIODIR_PORTB_REG,ChannelId);
				  SET_BIT(GPIO_u32_GPIOPDR_PORTB_REG,ChannelId);	
					break;				
				case DIO_enum_OPEN_DRAIN:
				//TO DO
					break;
			}
				break;
			case DIO_uint8_PORTC:
											/* turn on the clk for this port */
			SET_BIT(GPIO_u32_RCGCGPIO_REG,2);
			/* set as digital i/o */
				CLR_BIT(GPIO_u32_GPIOFSEL_PORTC_REG,ChannelId);
				SET_BIT(GPIO_u32_GPIODEN_PORTC_REG,ChannelId);
			switch (config)
			{
				case DIO_enum_OUTPUT_HIGH:
					SET_BIT(GPIO_u32_GPIODIR_PORTC_REG,ChannelId);
					SET_BIT(GPIO_u32_GPIODATA_PORTC_REG,ChannelId);
					break;
				
				case DIO_enum_OUTPUT_LOW:
					SET_BIT(GPIO_u32_GPIODIR_PORTC_REG,ChannelId);
					CLR_BIT(GPIO_u32_GPIODATA_PORTC_REG,ChannelId);
		  	break;
				case DIO_enum_INPUT_PULL_UP:
					CLR_BIT(GPIO_u32_GPIODIR_PORTC_REG,ChannelId);
				  SET_BIT(GPIO_u32_GPIOPUR_PORTC_REG,ChannelId);
					break;
				
				case DIO_enum_INPUT_PULL_DOWN:
					CLR_BIT(GPIO_u32_GPIODIR_PORTC_REG,ChannelId);
				  SET_BIT(GPIO_u32_GPIOPDR_PORTC_REG,ChannelId);	
					break;				
				case DIO_enum_OPEN_DRAIN:
				//TO DO
					break;
			}
				break;
			case DIO_uint8_PORTD:
											/* turn on the clk for this port */
			SET_BIT(GPIO_u32_RCGCGPIO_REG,3);
			/* set as digital i/o */
				CLR_BIT(GPIO_u32_GPIOFSEL_PORTD_REG,ChannelId);
				SET_BIT(GPIO_u32_GPIODEN_PORTD_REG,ChannelId);
			switch (config)
			{
				case DIO_enum_OUTPUT_HIGH:
					SET_BIT(GPIO_u32_GPIODIR_PORTD_REG,ChannelId);
					SET_BIT(GPIO_u32_GPIODATA_PORTD_REG,ChannelId);
					break;
				
				case DIO_enum_OUTPUT_LOW:
					SET_BIT(GPIO_u32_GPIODIR_PORTD_REG,ChannelId);
					CLR_BIT(GPIO_u32_GPIODATA_PORTD_REG,ChannelId);
		  	break;
				case DIO_enum_INPUT_PULL_UP:
					CLR_BIT(GPIO_u32_GPIODIR_PORTD_REG,ChannelId);
				  SET_BIT(GPIO_u32_GPIOPUR_PORTD_REG,ChannelId);
					break;
				
				case DIO_enum_INPUT_PULL_DOWN:
					CLR_BIT(GPIO_u32_GPIODIR_PORTD_REG,ChannelId);
				  SET_BIT(GPIO_u32_GPIOPDR_PORTD_REG,ChannelId);	
					break;				
				case DIO_enum_OPEN_DRAIN:
				//TO DO
					break;
			}
				break;
			case DIO_uint8_PORTE:
											/* turn on the clk for this port */
			SET_BIT(GPIO_u32_RCGCGPIO_REG,4);
			/* set as digital i/o */
				CLR_BIT(GPIO_u32_GPIOFSEL_PORTE_REG,ChannelId);
				SET_BIT(GPIO_u32_GPIODEN_PORTE_REG,ChannelId);
			switch (config)
			{
				case DIO_enum_OUTPUT_HIGH:
					SET_BIT(GPIO_u32_GPIODIR_PORTE_REG,ChannelId);
					SET_BIT(GPIO_u32_GPIODATA_PORTE_REG,ChannelId);
					break;
				
				case DIO_enum_OUTPUT_LOW:
					SET_BIT(GPIO_u32_GPIODIR_PORTE_REG,ChannelId);
					CLR_BIT(GPIO_u32_GPIODATA_PORTE_REG,ChannelId);
		  	break;
				case DIO_enum_INPUT_PULL_UP:
					CLR_BIT(GPIO_u32_GPIODIR_PORTE_REG,ChannelId);
				  SET_BIT(GPIO_u32_GPIOPUR_PORTE_REG,ChannelId);
					break;
				
				case DIO_enum_INPUT_PULL_DOWN:
					CLR_BIT(GPIO_u32_GPIODIR_PORTE_REG,ChannelId);
				  SET_BIT(GPIO_u32_GPIOPDR_PORTE_REG,ChannelId);	
					break;				
				case DIO_enum_OPEN_DRAIN:
				//TO DO
					break;
			}
				break;
			case DIO_uint8_PORTF:
											/* turn on the clk for this port */
			SET_BIT(GPIO_u32_RCGCGPIO_REG,5);
			/* set as digital i/o */
				CLR_BIT(GPIO_u32_GPIOFSEL_PORTF_REG,ChannelId);
				SET_BIT(GPIO_u32_GPIODEN_PORTF_REG,ChannelId);
			switch (config)
			{
				case DIO_enum_OUTPUT_HIGH:
					SET_BIT(GPIO_u32_GPIODIR_PORTF_REG,ChannelId);
					SET_BIT(GPIO_u32_GPIODATA_PORTF_REG,ChannelId);
					break;
				
				case DIO_enum_OUTPUT_LOW:
					SET_BIT(GPIO_u32_GPIODIR_PORTF_REG,ChannelId);
					CLR_BIT(GPIO_u32_GPIODATA_PORTF_REG,ChannelId);
		  	break;
				case DIO_enum_INPUT_PULL_UP:
					CLR_BIT(GPIO_u32_GPIODIR_PORTF_REG,ChannelId);
				  SET_BIT(GPIO_u32_GPIOPUR_PORTF_REG,ChannelId);
					break;
				
				case DIO_enum_INPUT_PULL_DOWN:
					CLR_BIT(GPIO_u32_GPIODIR_PORTF_REG,ChannelId);
				  SET_BIT(GPIO_u32_GPIOPDR_PORTF_REG,ChannelId);	
					break;				
				case DIO_enum_OPEN_DRAIN:
				//TO DO
					break;
			}
				break;
			
		}
	
	
}






//DIO_config DIO_ReadChannel(uint8 PortId,uint8 ChannelId)
//{
//	//TO DO
//}
