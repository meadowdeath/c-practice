#include <stdio.h>

#define TWO_DIGIT_MIN 10
#define THREE_DIGIT_MIN 100
#define FOUR_DIGIT_MIN 1000
#define FIVE_DIGIT_MIN 10000

int main(void)
{
    int number, total_digits;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (number < 0 || number >= FIVE_DIGIT_MIN)
    {
        printf("Please enter a number between 0 and 9999.\n");
        return 1;
    }

    if (number < TWO_DIGIT_MIN)
    {
        total_digits = 1;
    }
    else if (number < THREE_DIGIT_MIN)
    {
        total_digits = 2;
    }
    else if (number < FOUR_DIGIT_MIN)
    {
        total_digits = 3;
    }
    else
    {
        total_digits = 4;
    }

    printf("The number %d has %d digit%s.\n",
           number, total_digits, total_digits == 1 ? "" : "s");

    return 0;
}