/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 8/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (5) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

void reverseSentence();

int main() 
{
    printf("Enter a sentence: ");
	
    reverseSentence();
	
    return 0;
}

void reverseSentence() 
{
    char c;
    scanf("%c", &c);
	
    if (c != '\n') 
	{
        reverseSentence();
        printf("%c", c);
    }
}

