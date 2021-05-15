/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 15/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : MidTerm (1)						 */
/*****************************************************/
#include "stdio.h"

void main()
{
	
	int count = 0;
	int number;
	printf("Enter a number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);

	while(number)
	{
		number &= (number -1);
		count ++;
	}

	printf("Total number of 1s is = %d",count);
}