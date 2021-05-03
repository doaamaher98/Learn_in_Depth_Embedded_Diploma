/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 2/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (4) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

void main()
{
	float arr [3] [3];
	int i,j;

	for (i =0; i<3 ; i++)
	{
		for (j=0 ; j<3; j++)
		{
			printf("Enter the item (%d, %d) : ",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f", &arr[i][j]);
		}
	}

	printf("The matrix is :\n");
	for (i =0; i<3 ; i++)
	{
		for (j=0 ; j<3; j++)
		{

			printf("%2.2f \t",arr[i][j]);
		}
		printf("\n");
	}

	printf("\nThe Transpose Matrix : \n");
	for (j =0; j<3 ; j++)
		{
			for (i=0 ; i<3; i++)
			{

				printf("%2.2f \t",arr[i][j]);
			}
			printf("\n");
		}
}
