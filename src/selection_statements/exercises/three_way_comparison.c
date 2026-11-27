#include <stdio.h>

int main(void)
{
    {
        int i, j, k;

        i = 5;
        j = 3;

        k = i > j ? 1 : (j > i ? -1 : 0);
    
        printf("%d\n", k);
    }

    {
        int i, j, k;

        i = 3;
        j = 5;

        k = i > j ? 1 : (j > i ? -1 : 0);
    
        printf("%d\n", k);
    }

    {
        int i, j, k;

        i = 4;
        j = 4;

        k = i > j ? 1 : (j > i ? -1 : 0);
    
        printf("%d\n", k);
    }

    return 0;

}