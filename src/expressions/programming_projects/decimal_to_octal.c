#include <stdio.h>

#define OCTAL_BASE 8

int main(void)
{
    int number, digit_1, digit_2, digit_3, digit_4, digit_5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    digit_1 = number % OCTAL_BASE;
    number = number / OCTAL_BASE;

    digit_2 = number % OCTAL_BASE;
    number = number / OCTAL_BASE;

    digit_3 = number % OCTAL_BASE;
    number = number / OCTAL_BASE;

    digit_4 = number % OCTAL_BASE;
    number = number / OCTAL_BASE;

    digit_5 = number % OCTAL_BASE;

    printf("In octal, your number is: %d%d%d%d%d\n", digit_5, digit_4, digit_3, digit_2, digit_1);

    return 0;
}