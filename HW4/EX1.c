/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 8/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (5) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

/* Function declarations */
int isPrime (int num);

void printPrimes (int lowerLimit, int upperLimit);

void main()
{
    int lowerLimit, upperLimit;

    printf("Enter two numbers (intervals): ");
    fflush(stdin); fflush(stdout);
    scanf("%d %d", &lowerLimit, &upperLimit);

    printPrimes(lowerLimit, upperLimit);

}

void printPrimes(int lowerLimit, int upperLimit)
{
    printf("Prime numbers between %d to %d are : ", lowerLimit, upperLimit);

    while(lowerLimit <= upperLimit)
    {
        if(isPrime(lowerLimit))
        {
            printf("%d ", lowerLimit);
        }
        lowerLimit++;
    }
}

/**
 * Check whether a number is prime or not.
 * Returns 1 if the number is prime otherwise 0.
 */
int isPrime(int num)
{
    int i;

    for(i=2; i <= num/2; i++)
    {
        /*
         * If the number is divisible by any number
         * other than 1 and self then it is not prime
         */
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

