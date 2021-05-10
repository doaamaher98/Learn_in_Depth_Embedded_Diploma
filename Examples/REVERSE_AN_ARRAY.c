/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 10/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (5) , Assignment (1) */
/*****************************************************/
#include "stdio.h"
void main()
{
  int n, c, d, a[100], b[100];

  printf("Enter the number of elements in array\n");
  scanf("%d", &n);

  printf("Input: ");

  for (c = 0; c < n ; c++)
    {
	  scanf("%d", &a[c]);
    }


  for (c = n - 1, d = 0; c >= 0; c--, d++)
    {
	  b[d] = a[c];
    }


  for (c = 0; c < n; c++)
    {
	  a[c] = b[c];
    }

  printf("Ouput : ");

  for (c = 0; c < n; c++)
    {
	  printf("%d ", a[c]);
    }
}