/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 2/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (4) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

void main()
{
	int arr[100];
	int i, size, num, pos;

	/* Input size of the array */
	printf("Enter no. of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &size);

	/* Input elements in array */
	for(i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}

	/* Input new element and position to insert */
	printf("Enter element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);

	printf("Enter the location : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &pos);

	/* If position of element is not valid */
	if(pos > size+1 || pos <= 0)
	{
		printf("Invalid position! Please enter position between 1 to %d", size);
	}
	else
	{
		/* Make room for new array element by shifting to right */
		for(i=size; i>=pos; i--)
		{
			arr[i] = arr[i-1];
		}

		/* Insert new element at given position and increment size */
		arr[pos-1] = num;
		size++;

		/* Print array after insert operation */
		for(i=0; i<size; i++)
		{
			printf("%d ", arr[i]);
		}
	}
}
