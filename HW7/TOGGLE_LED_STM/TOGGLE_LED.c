/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 17/7/2021							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(3) Lesson (1) 				 */
/*****************************************************/

/* TOGGLING PIN 13 ON STM32 uC */
#include "stdint.h"

/* Registers Addresses */
#define RCC_BASE 	0x40021000
#define PORTA_BASE	0x40018000

#define RCC_APB2ENR *(volatile uint32_t *)(RCC_BASE + 0x18)
#define GPIOA_CRH 	*(volatile uint32_t *)(PORTA_BASE + 0x04)
#define GPIOA_ODR 	*(volatile uint32_t *)(RCC_BASE + 0x0C)

int main(void)
{
	RCC_APB2ENR |= 1<<2;

	GPIOA_CRH &= 0xff0fffff;
	GPIOA_CRH |= 0x00200000;

	while(1)
	{
		GPIOA_ODR |= 1<<13; //Setting pin 13 [ON]
		// delaying
		for (int i =0; i<5000 ;i++);
		GPIOA_ODR &= ~(1<<13); //Resetting pin 13 [OFF]
	}


	return 0;
}