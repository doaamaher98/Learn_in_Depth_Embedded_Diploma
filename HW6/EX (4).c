/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 3/6/2021							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (8) , Assignment (1) */
/*****************************************************/
#include "stdio.h"
#include "string.h"

void main()
{
	int array[15],no;
	int *ptr;
	ptr = &array[0];

	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&no);

	printf("Input %d number of elements in the array : \n",no);
	for (int i =0; i<no ; i++)
	{
		printf("element - %d : ",i);
		fflush(stdin); fflush(stdout);
		scanf("%d",ptr);
		ptr++;
	}

	printf("------------------------------\n");
	printf("Reversed : \n");
	printf("------------------------------\n");

	ptr = &array[no-1];
	for (int i =no; i>0 ; i--)
	{
		printf("element - %d : %d \n",i, *ptr);
		ptr--;
	}
}