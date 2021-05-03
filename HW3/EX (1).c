/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 2/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (4) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

void main()
{
	float arra [2][2];
	float arrb [2][2];
	float sum[2][2];
	int i,j;

	printf("Enter the elements of 1st matrix \n");
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			printf("Enter a%d%d : ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%2f",&arra[i][j]);
		}
	}
	printf("Enter the elements of 2nd matrix \n");
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			printf("Enter b%d%d : ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%2f",&arrb[i][j]);
		}
	}


	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			sum[i][j] = arra[i][j] + arrb[i][j];
		}
	}


	printf("Sum of Matrix : \n");
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			printf("%0.1f \t", sum[i][j]);

		}
		printf("\n");

	}
}
