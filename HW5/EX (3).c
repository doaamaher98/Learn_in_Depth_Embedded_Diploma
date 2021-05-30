/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 30/5/2021							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (5) , Assignment (1) */
/*****************************************************/
#include "stdio.h"

struct S_Complex
{
	float real;
	float imm;
};

struct S_Complex Add(struct S_Complex Complex1,struct S_Complex Complex2);

void main()
{
	struct S_Complex Complex1, Complex2, Sum;

	printf("For 1st Complex number\n");
	printf("Enter real and immaginary respectively : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&Complex1.real,&Complex1.imm);

	printf("For 2nd Complex number\n");
	printf("Enter real and immaginary respectively : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&Complex2.real,&Complex2.imm);

	Sum = Add(Complex1,Complex2);
	printf("Sum = %.3f + %.3f i",Sum.real,Sum.imm);
}

/* Passing struct to function */
struct S_Complex Add(struct S_Complex Complex1,struct S_Complex Complex2)
{
	struct S_Complex Sum;
	Sum.real = Complex1.real + Complex2.real;
	Sum.imm = Complex1.imm   + Complex2.imm;
	return Sum;
}
