/*****************************************************/
/* Name        : Doaa Mohamed Maher 				 */
/* Date 	   : 10/5/2020							 */
/* Version     : 1.0								 */
/* Unit/Assign : Unit(2) Lesson (5) , Assignment (1) */
/*****************************************************/
#include <stdio.h>

unsigned str_to_decimal(const char *s)
{
    const char *digits = "0123456789";
    int result = 0;

    for (; *s; ++s) {
        int digit_val;

        /* Find the index of the digit (equivalent to its numeric value) */
        for (digit_val = 0; digits[digit_val]; ++digit_val) {
            if (digits[digit_val] == *s)
                break;
        }

        /* Only process recognized digits */
        if (digits[digit_val])
            result = 10 * result + digit_val;
    }

    return result;
}

int main(void)
{
    printf("0x%X\n", str_to_decimal("64357"));
}