/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 3/6/2021							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (8) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

void main()
{
	int m;
	int *ab;

	m = 29;
	printf("Value of m is : %d \n",m);
	printf("Address of m is : %p \n",&m);

	printf("---------------------------\n");

	ab = &m;
	printf("Value of ab pointer is : %d \n",*ab);
	printf("Address of ab pointer is : %p \n",ab);

	printf("---------------------------\n");


	/* Changing m value to 34 */
	m = 34;
	printf("After changing the value of m to 34 : \n  ");
	printf("Value of ab pointer is : %d \n",*ab);
	printf("  Address of ab pointer is : %p \n",ab);

	printf("---------------------------\n");


	/* Changing the value of pointer to 7 */
	*ab = 7;
	printf("After changing the value of ab pointer to 7 : \n ");
	printf("Value of m is : %d \n",m);
	printf(" Address of m is : %p \n",&m);
}
