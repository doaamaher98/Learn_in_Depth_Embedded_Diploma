/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 10/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (5) , Assignment (1) */
/*****************************************************/

/* Priting the last occurance of a number */
#include "stdio.h"
int last_occurance(int arr[],int size);

void main()
{
	int arr[100],size,i;
	printf("Enter Array size : ");
	fflush(stdout);
	scanf("%d",&size);
	
	for (i=0;i<size;i++)
	{
		printf("Element %d : ",i+1);
		fflush(stdout);
		scanf("%d",&arr[i]);
	}
	
	int last = last_occurance(arr,size);
	printf("Last Occurance is : %d ",last);
	
}

int last_occurance(int arr[],int size)
{
	int i,key;
	printf("Enter the number you want to get it's last occurance : ");
	fflush(stdout);
	scanf("%d",&key);
	
	for(i=size;i>0;i--)
	{
		if (arr[i] == key)
		{
			return i+1;
		}
	}
	return -1;
}

