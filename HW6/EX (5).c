/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 3/6/2021							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (8) , Assignment (1) */
/*****************************************************/
#include "stdio.h"
#include "string.h"

struct S_Employee
{
	char *name;
	int id;
};

void main()
{
	static struct S_Employee Employee1 = {"Mohamed",1005}, Employee2 = {"Mahmoud",1006};
	struct S_Employee (*arr[]) = {&Employee1, &Employee2};
	struct S_Employee (*(*ptr)[2]) =&arr;

	printf("Employee Name : %s \n",(**(*ptr+1)).name);

	printf("Employee ID : %d \n",(*(*ptr+1)) ->id);

}