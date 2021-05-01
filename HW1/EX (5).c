/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 30/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (3) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

/* EX:5 */
void main()
{
	char c;
	int ascii;
	printf("Enter a character : ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);
	ascii = (int)c;
	printf("ASCII value of %c = %d", c,ascii);
}
