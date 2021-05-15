/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 15/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : MidTerm (1)						 */
/*****************************************************/
#include "stdio.h"
#include "string.h"

void main()
{
	int i,len;
	char string [100];
	printf("Enter the string: \n");
	gets(string);
	len = strlen(string)-1;
	printf("Reverse string is: ");
	for (i= len; i>=0; i--)
	{
		printf("%c",string[i]);
	}
}