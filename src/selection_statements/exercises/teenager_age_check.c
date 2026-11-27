#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int age;
    bool teenager;

    age = 15;
    teenager = age >= 13 && age <= 19;

    printf("Age: %d, Teenager: %s\n", 
            age, teenager ? "true" : "false");

    return 0;
}