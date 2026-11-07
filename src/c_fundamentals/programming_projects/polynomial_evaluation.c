#include <stdio.h>

int main(void)
{
    float x, polynomial;

    printf("Enter the 'x' value: ");
    scanf("%f", &x);

    // Applying Horner’s Rule
    polynomial = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("The value of the 3 * x^5 + 2 * x^4 - 5 * x^3 - x^2 + 7 * x - 6 polynomial is: %.2f\n", polynomial);

    return 0;
}