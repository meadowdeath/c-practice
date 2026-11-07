#include <stdio.h>

#define TAX_RATE 1.05f

int main(void)
{
    float price, total_price;

    printf("Enter an amount: ");
    scanf("%f", &price);

    total_price = price * TAX_RATE;

    printf("With tax added: $%.2f\n", total_price);

    return 0;
}