/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 10/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (5) , Assignment (1) */
/*****************************************************/

/* Checking if a given number is a power of 3 */
#include "stdio.h"

int checkPowerof3(unsigned n);



void main()
{
	unsigned n;
	printf("Enter a number : ");
	fflush(stdout);
	scanf("%d",&n);
	checkPowerof3(n) ? printf("%d --> Is a power of 3",n): printf("%d --> isn't a power of 3",n);
}

int checkPowerof3(unsigned n)
{
	/* find log3(n) */
	double i = log(n)/log(3);
	/* return true if log3(n) is \n integer */
	return i == trunc(i);
}