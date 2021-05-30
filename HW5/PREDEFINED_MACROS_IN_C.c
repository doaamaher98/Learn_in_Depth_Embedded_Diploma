/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 30/5/2021							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (5) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

void main()
{
	printf("Current date is : %s\n", __DATE__);
	printf("Current time is : %s\n", __TIME__);

	printf("Current line is : %d\n", __LINE__);
	printf("Current file is : %s\n", __FILE__);

	printf("Checking if code follows ANSI C (print non-zero int if yes) : %d", __STDC__);

}