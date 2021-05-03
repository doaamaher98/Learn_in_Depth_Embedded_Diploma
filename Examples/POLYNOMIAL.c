/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 2/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (4) , Assignment (1) */
/*****************************************************/
#include "stdio.h"
void main()
{
	float x[5] = {5,16,22,3.5,15};
	float y;
	int i;

	for (i=0; i<= 4 ; i++)
	{
		y= 5 * x[i] * x[i] + 3 * x[i] + 2 ;
		printf("y(%f) = %f \n", x[i],y);
	}
}
