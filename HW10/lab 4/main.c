/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 23/7/2021							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(3) Lesson (4) 				 */
/*****************************************************/

/* Toggling LED in TivaC Board */

/* Defining Registers */
#define SYSCTL_RCG2_R     (*(volatile unsigned long*)0x400FE108)
#define GPIO_PORTF_DIR_R  (*(volatile unsigned long*)0x40025400)
#define GPIO_PORTF_DEN_R  (*(volatile unsigned long*)0x4002551c)
#define GPIO_PORTF_DATA_R (*(volatile unsigned long*)0x400253fc)

void main()
{
	volatile unsigned long delay_count; /*To make sure it won't be deleted during optimization*/
	SYSCTL_RCG2_R = 0x20;
	
	/* Delaying to make sure that the GPIOF is up and running */
	for (delay_count=0; delay_count<200;delay_count++);
	
	GPIO_PORTF_DIR_R |= 1<<3; // Direction is OUTPUT at PORTF3
	GPIO_PORTF_DEN_R |= 1<<3;
	
	while (1)
	{
		GPIO_PORTF_DATA_R |= 1<<3;
		for (delay_count=0; delay_count<200000;delay_count++); /* To be able to see the change */
		GPIO_PORTF_DATA_R &= ~(1<<3);
		for (delay_count=0; delay_count<200000;delay_count++); /* To be able to see the change */

	}
}