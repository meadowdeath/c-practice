#include <stdio.h>

int main(void)
{
    float x, y;
    int i;

    printf("Enter a float, an integer, and another float: ");
    scanf("%f %d %f", &x, &i, &y);

    printf("x = %f, i = %d, y = %f\n", x, i, y);

    return 0;
}