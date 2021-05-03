/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 2/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (4) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

void main()
{
	float arr [100][100];
	int i,j,row,col;
	printf("Enter rows and column : ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &row,&col);

	printf("Enter elements of matrix : \n");

	for (i =0; i<row ; i++)
	{
		for (j=0 ; j<col; j++)
		{
			printf("Enter elements of matrix a%d%d: ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &arr[i][j]);
		}
	}

	printf("Entered Matrix:\n");
	for (i =0; i<row ; i++)
	{
		for (j=0 ; j<col; j++)
		{

			printf("%2.2f \t",arr[i][j]);
		}
		printf("\n");
	}

	printf("\nTranspose Matrix : \n");
	for (j =0; j<row ; j++)
		{
			for (i=0 ; i<col; i++)
			{

				printf("%.2f \t",arr[i][j]);
			}
			printf("\n");
		}
}
