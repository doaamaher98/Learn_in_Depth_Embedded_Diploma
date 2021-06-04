/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 3/6/2021							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (8) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

void main()
{
	/* Declaring an array of chars having 27 letters of alphabet */
	char alphabet[27];
	/* Declaring a pointer of char type (1Byte) */
	char *C_ptr;

	/* Pointer to first element of the array ==> alphabet[0] */
	C_ptr = alphabet;

	/* For loop for pointing at letters starting from 'A' and saving values to C_ptr then
	 * incrementing it to get to next letter,...							 */
	for (int i=0;i<26;i++)
	{
		*C_ptr = 'A' + i;
		C_ptr++;
	}

	C_ptr = alphabet;

	/* Printing the *C_ptr contents */
	printf("Alphabets are : \n");

	for (int i=0;i<26;i++)
	{
		printf("%c ",*C_ptr);
		C_ptr++;
	}
}
