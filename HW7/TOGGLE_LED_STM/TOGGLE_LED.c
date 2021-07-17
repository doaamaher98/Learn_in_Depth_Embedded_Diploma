/*****************************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 17/7/2021					 */
/* Version     : 1.0						 */
/* Unit/Assign : Unit(3) Lesson (1) 				 */
/*****************************************************************/

/* TOGGLING PIN 13 ON STM32 uC */

#include "stdint.h"
typedef unsigned int vuint32_t;

/* Registers Addresses */
#define RCC_BASE 		0x40021000
#define GPIOA_BASE 		0x40010800
#define RCC_APB2ENR		*(vuint32_t *)(RCC_BASE   + 0x18)
#define GPIOA_CRH		*(vuint32_t *)(GPIOA_BASE + 0x04)
#define GPIOA_ODR		*(vuint32_t *)(GPIOA_BASE + 0x0C)


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
		for (int i =0; i<50000 ;i++);
	}

	return 0;
}
