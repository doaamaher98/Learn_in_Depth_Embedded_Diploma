/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 2/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (4) , Assignment (1) */
/*****************************************************/
#include "stdio.h"
void main()
{
	float degrees[100];
	int students,i;
	printf("Enter the no. of students : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &students);
	for (i =1; i<=students; i++)
	{
	printf("Enter student %d degrees : ",i);
	fflush(stdin); fflush(stdout);
	scanf("%f", &degrees[i]);
	}

	for (i=1; i<=students; i++)
	{
		printf("Student %d degree is : %f\n",i,degrees[i]);

	}
}