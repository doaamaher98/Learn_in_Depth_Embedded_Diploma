/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 15/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : MidTerm (1)						 */
/*****************************************************/
#include "stdio.h"

int reverse_function(int num);
int sum=0,rem;

void main()
{
	int num,reverse_number;

	//User would input the number
	printf("Enter any number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	//Calling user defined function to perform reverse
	reverse_number=reverse_function(num);
	printf("After reverse the no is : %d",reverse_number);
}

int reverse_function(int num)
{

	if(num)
	{
		rem=num%10;
		sum=sum*10+rem;
		reverse_function(num/10);
	}
	else
	{
		return sum;
	}
	return sum;
}
