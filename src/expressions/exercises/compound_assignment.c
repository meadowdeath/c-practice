#include <stdio.h>

int main(void)
{
    {
        int i, j;

        i = 7;
        j = 8;
        
        i *= j + 1;

        printf("%d %d", i, j);
    }

    {
        int i, j, k;

        i = j = k = 1;

        i  += j += k;

        printf("%d %d %d", i, j, k);
    }

    {
        int i, j, k;

        i = 1;
        j = 2;
        k = 3;

        i  -= j -= k;   

        printf("%d %d %d", i, j, k);
    }

    {
        int i, j, k;

        i = 2;
        j = 1;
        k = 0;

        i  *= j *= k;   

        printf("%d %d %d", i, j, k);
    }

    return 0;
}