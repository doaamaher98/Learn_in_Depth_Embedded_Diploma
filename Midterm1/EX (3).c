/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 15/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : MidTerm (1)						 */
/*****************************************************/
#include "stdio.h"

int isPrime (int num);

void printPrimes (int n1, int n2);

void main()
{
    int n1, n2;

    printf("Enter two numbers (intervals): ");
    fflush(stdin); fflush(stdout);
    scanf("%d %d", &n1, &n2);

    printPrimes(n1, n2);

}

void printPrimes(int n1, int n2)
{
    printf("Prime numbers between %d to %d are : ", n1, n2);

    while(n1 <= n2)
    {
        if(isPrime(n1))
        {
            printf("%d ", n1);
        }
        n1++;
    }
}

int isPrime(int num)
{
    int i;

    for(i=2; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}