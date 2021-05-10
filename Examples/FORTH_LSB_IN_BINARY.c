/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 10/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (5) , Assignment (1) */
/*****************************************************/

#include "stdio.h"
void main()
{
	int n,c,k;
	printf("Enter an int in decimal no. system : ");
	fflush(stdout);
	scanf("%d",&n);

	printf("%d in binary numer system is : \n",n);

	for (c=31; c>=0 ; c--)
	{
		k= n >> c;
		if (k & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}

	k = n>>3;
	if (k&1)
	{
		printf("\n4th LSB is 1");
	}
	else {
		printf("\n4th LSB is 0");
	}
}