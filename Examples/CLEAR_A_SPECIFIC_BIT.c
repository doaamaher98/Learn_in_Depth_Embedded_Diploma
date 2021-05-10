/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 10/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (5) , Assignment (1) */
/*****************************************************/

/* Function to clear bit */
int clear_specific_bit(int n,int bit);

void main()
{
	int n,bit;
	printf("Enter a number : ");
	fflush(stdout);
	scanf("%d",&n);

	printf("Enter bit position : ");
	fflush(stdout);
	scanf("%d",&bit);

	printf("Result = %d",clear_specific_bit(n,bit));

}

int clear_specific_bit(int n,int bit)
{
	return n &= ~(1<<bit);
}
