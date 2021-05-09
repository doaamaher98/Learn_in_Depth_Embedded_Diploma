/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 8/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (5) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

long int factrotial(int n);

void main() 
{
	int n;
	
	printf("Enter a positive integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	
	printf("Factorial of %d = %ld", n, factrotial(n));
}

long int factrotial(int n) 
{
	if (n>=1)
		return n*factrotial(n-1);
	else
		return 1;
}

