/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 15/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : MidTerm (1)						 */
/*****************************************************/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	srand ( time(NULL) );
	int myArray[5] = {4,8,2,5,9};
	int randomIndex = rand() % 5;
	int randomValue = myArray[randomIndex];
	printf("Random element is : %d", randomValue);
	return 0;
}
