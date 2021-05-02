/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 30/4/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (3) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

/* EX:3 */
void main()
{
	float a,b,c;
	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f \n %f \n %f", &a,&b,&c);
	if (a>b && a>c)
	{
		printf("Largest number = %f", a);
	}
	else if (b>a && b>c)
		{
			printf("Largest number = %f", b);
		}
	else if (c>a && c>b)
	{
		printf("Largest number = %f", c);
	}
		
}
