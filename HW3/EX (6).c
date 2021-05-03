/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 2/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (4) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

void main()
{
	char strg[100];
	char c;
	int i,count=0;

	printf("Enter a string: ");
	gets(strg);
	printf("\nEnter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	for(i=0; strg[i] !='\0'; i++)
	{
		if ( c== strg[i])
		{
			++count;
		}
	}
	printf("Frequency of %c = %d: ",c,count);
}
