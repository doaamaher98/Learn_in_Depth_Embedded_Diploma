/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 30/5/2021							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (5) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

struct S_Distance
{
	int ft ;
	float inch;
};

void main()
{
	struct S_Distance d1,d2,sum;

	printf("Enter Information for the 1st distance : \n");
	printf("Enter feet : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&d1.ft);
	printf("Enter inch : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&d1.inch);

	printf("Enter Information for the 2nd distance : \n");
	printf("Enter feet : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&d2.ft);
	printf("Enter inch : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&d2.inch);

	sum.ft = d1.ft + d2.ft;
	sum.inch = d1.inch + d2.inch;

	/* Condition to make sure that when inch>12 it becomes ft */
	if(sum.inch > 12.00)
	{
		sum.inch-=12.00;
		sum.ft++;
	}
	printf("Sum of distances = %d , %f",sum.ft,sum.inch);

}
