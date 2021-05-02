/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 30/4/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (3) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

/* EX:8 */
void main()
{
	float a,b;
	char operator;
	float sum,mult,div,sub;

	printf("Enter an operator either + or - or * or / : ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &operator);
	printf("Enter two operands : ");
	fflush(stdin); fflush(stdout);
	scanf("%f \n %f", &a,&b);

	sum = a+b;
	sub = a-b;
	mult= a*b;
	div = a/b;

	switch (operator)
	{
		case '+' :
		{
			printf("%f + %f = %f", a,b,sum);
		} break;
		case '-' :
		{
			printf("%f - %f = %f", a,b,sub);
		} break;
		case '*' :
		{
			printf("%f * %f = %f", a,b,mult);
		} break;
		case '/' :
		{
			printf("%f / %f = %f", a,b,div);
		} break;
		default :
		printf("Wrong operand!");
	}
}
