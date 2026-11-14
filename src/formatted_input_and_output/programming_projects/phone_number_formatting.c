#include <stdio.h>

int main(void)
{
    int area_number, exchange_code, subscriber_number;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf(" (%d) %d - %d", &area_number, &exchange_code, &subscriber_number);

    printf("You entered %d.%d.%d\n", area_number, exchange_code, subscriber_number);

    return 0;
}