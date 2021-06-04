/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 3/6/2021							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (8) , Assignment (1) */
/*****************************************************/
#include "stdio.h"
#include "string.h"

/* Function to reverse the string taking a pointer of char type */
void reverseString(char* str)
{
    int length;
    char *begin_ptr, *end_ptr, temp;

    /* Getting the length of the string */
    length = strlen(str);

    /* Set the begin_ptr and end_ptr initially to start of string */
    begin_ptr = str;
    end_ptr = str;

    /* Moving the end_ptr to the last character */
    for (int i = 0 ; i < length-1 ; i++)
    {
    	end_ptr++;
    }

    /* Swapping the char from start and end index using begin_ptr and end_ptr */
    for (int i = 0 ; i < length/2 ; i++)
    {
    	/* Swapping character */
        temp = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = temp;

        /* Updating pointers positions */
        begin_ptr++;
        end_ptr--;
    }
}

/* Main function */
void main()
{
    /* Getting the string */
    char str[100];
    printf("Enter a string: \n");
    gets(str);

    /* Reversing the string */
    reverseString(str);

    /* Printing the result */
    printf("Reverse of the string: %s\n", str);
}