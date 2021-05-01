/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 30/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (3) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

/* EX:6 */
void main()
{
	float a,b,temp=0;
	printf("Enter value of a : ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b : ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &b);
	temp = a;
	a = b;
	b= temp;
	printf("After swapping, value of a = %f : ",a);
	printf("\nAfter swapping, value of b = %f : ",b);
}