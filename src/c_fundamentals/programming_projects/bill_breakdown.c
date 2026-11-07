#include <stdio.h>

#define TWENTY_BILL 20
#define TEN_BILL 10
#define FIVE_BILL 5
#define ONE_BILL 1

int main(void)
{
    int twenty_amout, ten_amount, five_amount, one_amount, remainder;

    printf("Enter an amount: ");
    scanf("%d", &remainder);

    twenty_amout = remainder / TWENTY_BILL;
    remainder = remainder % TWENTY_BILL;

    ten_amount = remainder / TEN_BILL;
    remainder = remainder % TEN_BILL;

    five_amount = remainder / FIVE_BILL;
    remainder = remainder % FIVE_BILL;

    one_amount = remainder / ONE_BILL;

    printf("The breakdown is: %d twenties, %d tens, %d fives, and %d ones.\n", 
        twenty_amout, ten_amount, five_amount, one_amount);
}