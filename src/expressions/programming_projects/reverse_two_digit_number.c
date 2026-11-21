#include <stdio.h>

#define TENS_PLACE 10
#define DECIMAL_BASE 10

int main(void)
{
    int number, tens, units;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    tens = number / TENS_PLACE;
    units = number % DECIMAL_BASE;

    printf("The reversal is: %d%d\n", units, tens);

    return 0;
}