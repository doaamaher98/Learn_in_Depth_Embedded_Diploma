/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 2/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (4) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

void main()
{
	int n,i;
	float arr [100];
	float average,sum=0.0;
	printf("Enter the numbers of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for (i=0 ; i<n ; i++)
	{
	printf("%d. Enter the numbers of data: ",i+1);
	fflush(stdin); fflush(stdout);
	scanf("%f",&arr[i]);
	}
	for (i=0 ; i<n ; i++)
	{
		sum += arr[i];
	}
	average = sum/n;
	printf("Average = %.2f ",average);
}
