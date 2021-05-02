/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 30/4/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (3) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

/* EX:4 */
void main()
{
	float x,y,multip;
	printf("Enter two numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%f \n %f", &x, &y);
	multip = x*y;
	printf("Product : %f", multip);
}
