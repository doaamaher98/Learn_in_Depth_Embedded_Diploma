/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 15/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : MidTerm (1)						 */
/*****************************************************/
#include "stdio.h"

int maxOnes(int arr[]);

int main()
{
	int arr[5]={0,1,1,1,0};
	int res;
	res = maxOnes(arr);
	printf("%d",res);

}

int maxOnes(int arr[])
{
	int count = 0;
	int max = 0;
	for(int i = 0; i < 5; i++){
		if(arr[i] == 0)
			count = 0;
		else
			count++;
		max = count > max ? count : max;
	}
	return max;
}
