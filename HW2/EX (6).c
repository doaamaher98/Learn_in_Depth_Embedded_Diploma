/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 30/4/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (3) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

/* EX:6 */
void main()
{
	int x,i,sum=0;
	printf("Enter an integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);
	for (i=0 ; i<=x ; i++)
	{
		sum+=i;
	}
	printf("Sum = %d", sum);
	
}
