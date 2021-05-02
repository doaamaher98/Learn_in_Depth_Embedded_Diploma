/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 2/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (3) , Assignment (1) */
/*****************************************************/

/* C program to demonstrate the working of break statement
by terminating a loop, if user inputs negative number*/ 

#include "stdio.h"
void main()
{
	float num, average, sum;
	int i,n;
	printf("Maximum no. of inputs\n");
	scanf("%d",&n);
	for(i=1;i<=n; ++i) { 
		printf("Enter n%d: ",i);
		fflush(stdin); fflush(stdout);
		scanf("%f", &num);
		if(num<0.0)
		{ 
			break; 
		} 
	sum=sum+num; 
	}
	average=sum/(i-1);
	printf("Average=%.2f", average);
}