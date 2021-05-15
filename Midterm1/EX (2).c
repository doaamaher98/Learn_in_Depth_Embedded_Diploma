/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 15/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : MidTerm (1)						 */
/*****************************************************/
#include "stdio.h"
#include "math.h"

void main()
{
	int x;
	float res;
	printf("Enter the number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	res = sqrt(x);
	printf("It's Square root is : %d",res);
}