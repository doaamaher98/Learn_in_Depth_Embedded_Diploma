/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 30/4/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (3) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

/* EX:5 */
void main()
{
	char character,ascii;
	int i;
	printf("Enter a character : ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &character);
	ascii = (int)character;

	if ( (ascii >= 65 && ascii <=97) ||
		 (ascii >= 97 && ascii <= 122) )
	{
		printf("%c is an Alphabet ",character);
	}
	else {
		printf("%c is not Alphabet ",character);

	}
}
