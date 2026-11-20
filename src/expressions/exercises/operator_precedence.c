#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;

    a = 20;
    b = 4;
    c = 3;
    d = 2;
    e = 5;

    {
        int result;

        result = ((a * b) - (c * d)) + e;

        printf("%d\n", result);
    }

    {
        int result;

        result = (((a / b) % c) / d);

        printf("%d\n", result);
    }

    {
        int result;

        result = (((-a) - b) + c) - (+d);

        printf("%d\n", result);
    }

    {
        int result;

        result = ((a * (-b)) / c) - d;

        printf("%d\n", result);
    }

    return 0;
}