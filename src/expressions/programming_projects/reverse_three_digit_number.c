#include <stdio.h>

#define HUNDREDS_PLACE 100
#define DECIMAL_BASE 10

int main(void)
{
    int number, hundreds, tens, units;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    hundreds = number / HUNDREDS_PLACE;
    tens = (number / DECIMAL_BASE) % DECIMAL_BASE;
    units = number % DECIMAL_BASE;

    printf("The reversal is: %d%d%d\n", units, tens, hundreds);

    return 0;
}