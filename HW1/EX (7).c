/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 30/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (3) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

/* EX:7 */
void main()
{
	float a,b;
	printf("Enter value of a : ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b : ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("After swapping, value of a = %f : ",a);
	printf("\nAfter swapping, value of b = %f : ",b);
}
