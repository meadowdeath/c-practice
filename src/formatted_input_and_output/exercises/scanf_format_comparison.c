#include <stdio.h>

int main(void)
{
    // Exercise 3(a): "%d" vs " %d"
    {
        int a, b;

        printf("Exercise 3(a)\n");

        printf("Enter an integer (%%d): ");
        scanf("%d", &a);

        printf("Enter an integer ( %%d): ");
        scanf(" %d", &b);

        printf("Results: %d, %d\n\n", a, b);
    }

    // Exercise 3(b): "%d-%d-%d" vs "%d -%d -%d"
    {
        int a, b, c;

        printf("Exercise 3(b)\n");

        printf("Enter three integers (%%d-%%d-%%d): ");
        scanf("%d-%d-%d", &a, &b, &c);

        printf("Results: %d, %d, %d\n", a, b, c);
    }

    // Exercise 3(d): "%f,%f" vs "%f, %f"
    {
        float x, y;

        printf("\nExercise 3(d)\n");

        printf("Enter two floats separated by a comma: ");
        scanf("%f,%f", &x, &y);

        printf("Results: %f, %f\n", x, y);
    }

    // Exercise 3(c): "%f" vs "%f "
    {
        float x, y;

        printf("\nExercise 3(c)\n");

        printf("Enter a float (%%f): ");
        scanf("%f", &x);

        printf("Enter a float (%%f ): ");
        scanf("%f ", &y);

        printf("Results: %f, %f\n", x, y);
    }

    return 0;
}