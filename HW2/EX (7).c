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
	int num,i,fact=1;
	printf("Enter an integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);
	if (num==0)
	{
		printf("Factorial = 1");
	}
	else if (num <0 )
	{
		printf("Error!!! Factorial of negative number does not exist");
	}
	else
	{
		for (i=1 ; i<=num ; i++)
		{
			fact *=i;
		}
		printf("Factorial = %d \n",fact);
	}
}