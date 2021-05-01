/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 30/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (3) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

/* EX:2 */
void main()
{
	char alphabet;
	printf("Enter an alphabet : ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &alphabet);
if (alphabet == 'a' || alphabet == 'A' ||
	alphabet == 'e' || alphabet == 'E' ||
	alphabet == 'i' || alphabet == 'I' ||
	alphabet == 'o' || alphabet == 'O' ||
	alphabet == 'u' || alphabet == 'U' ||)
	{
		printf("%c is a vowel", alphabet);
	}
	else {
		printf("%c is a consonant", alphabet);
	}
}