/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 30/5/2021							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (5) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

struct S_Student
{
	char name[50];
	int roll;
	float marks;
};

void main()
{
	struct S_Student Array[10];

	printf("Enter information of students : \n");


	for (int i =0 ; i<10; i++)
	{
		printf("For roll number %d\n",i);
		printf("Enter name : ");
		fflush(stdin); fflush(stdout);
		scanf("%s", Array[i].name);
		printf("Enter marks : ");
		fflush(stdin); fflush(stdout);
		scanf("%f", &Array[i].marks);
	}

	printf("Displaying information of students : \n");
	for (int i=0; i<10;i++)
	{
		printf("For roll number %d\n",i);
		printf("Name : %s\n",Array[i].name);
		printf("Marks : %.2f\n",Array[i].marks);
	}
}
