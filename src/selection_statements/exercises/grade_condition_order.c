#include <stdio.h>

int main(void)
{

    int score;

    score = 85;

    if (score >= 90)
    {
        printf("Grade: A\n");
    }
    else if (score >= 80)
    {
        printf("Grade: B\n");
    }
    else if (score >= 70)
    {
        printf("Grade: C\n");
    }
    else if (score >= 60)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }

    if (score < 60)
    {
        printf("Grade: F\n");
    }
    else if (score < 70)
    {
        printf("Grade: D\n");
    }
    else if (score < 80)
    {
        printf("Grade: C\n");
    }
    else if (score < 90)
    {
        printf("Grade: B\n");
    }
    else
    {
        printf("Grade: A\n");
    }
    
    return 0;
}