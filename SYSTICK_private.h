
#ifndef SYSTICK_PRIVATE_H_


#define SYSTICK_BADE											0xE000E000

#define SYSTICK_u32_STCTRL_REG 		  *((volatile u32*) (SYSTICK_BADE+0X10))	
#define SYSTICK_u32_STRELOAD_REG 		  *((volatile u32*) (SYSTICK_BADE+0X14))		// 24 BIT REGISTER
#define SYSTICK_u32_STCURRENT_REG 		  *((volatile u32*) (SYSTICK_BADE+0X18) )	// 24 BIT REGISTER









#define SYSTICK_PRIVATE_H_
#endif 
