/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 30/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (3) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

/* EX:4 */
void main()
{
	float num;
	printf("Enter a number : ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &num);
	if (num > 0)
	{
		printf("%f is positive ", num);
	}
	else if (num == 0)
	{
		printf("You entered zero");
	}
	else {
		printf("%f is negative ", num);
	}
	
}