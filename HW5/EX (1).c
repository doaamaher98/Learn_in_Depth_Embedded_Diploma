/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 30/5/2021							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (5) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

struct S_Student
{
	char name [50];
	int roll;
	float marks;
};

void main()
{
	struct S_Student x;
	printf("Enter information of students \n");

	printf("Enter name : ");
	fflush(stdin); fflush(stdout);
	scanf("%s",x.name);

	printf("Enter roll number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x.roll);

	printf("Enter marks : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x.marks);

	printf("Displaying Information : \n");
	printf("Name : %s\n",x.name);
	printf("Roll : %d\n",x.roll);
	printf("Marks : %f",x.marks);
}
