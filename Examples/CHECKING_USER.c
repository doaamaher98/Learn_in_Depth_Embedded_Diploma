/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 10/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (5) , Assignment (1) */
/*****************************************************/

/* Function to check user or not */
#include "stdio.h"
#include "string.h"


void main()
{
	char user[50],diff[50];
	int check;

	printf("Enter the USERNAME: ");
	fflush(stdin); fflush(stdout);
	gets(user);

	printf("Enter to check it its USERNAME: ");
	fflush(stdin); fflush(stdout);
	gets(diff);

	check = strcmp(user,diff);
	if (check == 0)
	{
		printf("Identical");
	}
	else
		printf("Different");
}