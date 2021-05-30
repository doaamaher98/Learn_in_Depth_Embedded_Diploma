/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 30/5/2021							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (5) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

union job
{
	char name[32];
	float salary;
	int worker_no ;
}u;

struct job1
{
	char name[32];
	float salary;
	int worker_no ;
}s;

void main()
{
	printf("size of union = %d\n",sizeof(u)); /* largest number of bytes  = 32*1       = 32 Bytes */
	printf("size of struct = %d",sizeof(s)); /* their addition            = 32 + 4 + 4 = 40 Bytes */
}