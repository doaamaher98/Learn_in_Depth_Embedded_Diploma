/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 10/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (5) , Assignment (1) */
/*****************************************************/

/* Swapping 2 arrays */
#include "stdio.h"

#define ARRAY1_SIZE 	3
#define ARRAY2_SIZE 	3

void main()
{
	int a[ARRAY1_SIZE],b[ARRAY2_SIZE],c[10],i;
	printf("Enter the first array : ");
	fflush(stdin); fflush(stdout);
	for (i=0;i<ARRAY1_SIZE;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Enter the second array : ");
	fflush(stdin); fflush(stdout);
	for (i=0;i<ARRAY2_SIZE;i++)
	{
		scanf("%d",&b[i]);
	}

	printf("\nArray 1 before swapping : ");
	for (i=0;i<ARRAY1_SIZE;i++)
	{
		printf("%d ",a[i]);
	}

	printf("\nArray 2 before swapping : ");
	for (i=0;i<ARRAY2_SIZE;i++)
	{
		printf("%d ",a[i]);
	}

	/* Swapping */
	for (i=0;i<ARRAY1_SIZE;i++)
	{
		c[i] = a[i];
		a[i] = b[i];
		b[i] = c[i];
	}

	printf("\nArray 1 after swapping: ");
	for (i=0; i<ARRAY1_SIZE; i++)
	{
		printf("%d ",a[i]);
	}

	printf("\nArray 2 after swapping: ");
	for (i=0; i<ARRAY2_SIZE; i++)
	{
		printf("%d ",b[i]);
	}
}