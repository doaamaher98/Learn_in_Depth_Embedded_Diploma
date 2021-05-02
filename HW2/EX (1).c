/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 30/4/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (3) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

/* EX:1 */
void main()
{
	int a;
	printf("Enter an integer you want to check : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("%d is even",a);
	}
	else {
		printf("%d is odd",a);
	}	
}
