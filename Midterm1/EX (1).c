/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 15/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : MidTerm (1)						 */
/*****************************************************/
#include "stdio.h"
void main()
{
	int x[20],i,sum=0,no_dig;
	printf("Enter the no. of digits : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&no_dig);

	printf("Enter a number to sum its digits : ");
	fflush(stdin); fflush(stdout);
	for (i=0;i<no_dig;i++)
	{
		scanf("%d",&x[i]);
	}

	printf("The sum is : ");
	for (i=0;i<no_dig;i++)
	{
		sum+=x[i];
	}
	printf("%d",sum);
}