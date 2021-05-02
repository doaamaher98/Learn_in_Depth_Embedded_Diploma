/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 2/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (3) , Assignment (1) */
/*****************************************************/

/* Program to demonstrate the working of continue statement in C programming */
#include "stdio.h"
void main()
{
	float num,product=1,n;
	int i;
	printf("Enter no. of ints to get mult");
	fflush(stdin); fflush(stdout);
	scanf("%f", &n);
	for (i=1 ; i<=n ; i++)
	{
		printf("Enter no. :");
		fflush(stdin); fflush(stdout);
		scanf("%f", &num);
		if (num == 0 )
		{
			continue;
		}
		else {
			product *=num;
		}
	}
	printf("product = %.2f", product);
}