/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 30/5/2021							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (5) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

#define Pi 3.14
#define Area(r) (Pi * r * r)

void main()
{
	float Area,radius;
	printf("Enter the radius : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&radius);
	Area= Area(radius);
	printf("Area = %.2f",Area);
}