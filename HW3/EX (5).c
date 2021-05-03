/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 2/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (4) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

void main()
{
	int n,i,search,arr[100];
	printf("Enter no of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter the elements to be searched: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &search);
	for(i=0; i<n; i++)
	{
		if (arr[i] == search){
			printf("Number found at the location %d",i+1);
		}
	}
}
