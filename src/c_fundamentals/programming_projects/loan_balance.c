#include <stdio.h>

#define MONTHS_IN_YEAR 12
#define PERCENTAGE_CONVERSION 100.0f
#define LOAN_BASE 1.0f

int main(void)
{
    float loan_amount, interest_rate, monthly_payment, balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    balance = loan_amount;

    balance = balance * (LOAN_BASE + (interest_rate / PERCENTAGE_CONVERSION) / MONTHS_IN_YEAR) - monthly_payment;
    printf("Balance remaining after first payment: %.2f\n", balance);

    balance = balance * (LOAN_BASE + (interest_rate / PERCENTAGE_CONVERSION) / MONTHS_IN_YEAR) - monthly_payment;
    printf("Balance remaining after second payment: %.2f\n", balance);

    balance = balance * (LOAN_BASE + (interest_rate / PERCENTAGE_CONVERSION) / MONTHS_IN_YEAR) - monthly_payment;
    printf("Balance remaining after third payment: %.2f\n", balance);
}