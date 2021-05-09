/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 8/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (5) , Assignment (1) */
/*****************************************************/
#include "stdio.h"
int Power (int b, int p);

void main ()
{
	int base,power,powerr;

	printf("Enter the base number : ");
    fflush(stdin); fflush(stdout);
	scanf("%d", &base);

	printf("Enter the power number(positive integer): ");
    fflush(stdin); fflush(stdout);
	scanf("%d", &power);

    powerr = Power(base,power);
	printf("%d ^ %d = %d",base , power, powerr );

}

int Power (int b, int p)
{
	if (p != 0)
	{
		return (b * Power (b, p-1) );
	}
	else
	    return 1;
}
