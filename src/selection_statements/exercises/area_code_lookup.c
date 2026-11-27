#include <stdio.h>

int main(void)
{
    int area_code;

    printf("Telephone area codes in the state of Georgia.\n");

    printf("%-12s %s\n", "Area Code", "City");
    printf("%-12d %s\n", 229, "Albany");
    printf("%-12d %s\n", 404, "Atlanta");
    printf("%-12d %s\n", 470, "Atlanta");
    printf("%-12d %s\n", 478, "Macon");
    printf("%-12d %s\n", 678, "Atlanta");
    printf("%-12d %s\n", 706, "Columbus");
    printf("%-12d %s\n", 762, "Columbus");
    printf("%-12d %s\n", 770, "Atlanta");
    printf("%-12d %s\n", 912, "Savannah");

    printf("Enter a Georgia area code: ");
    if (scanf("%d", &area_code) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    switch (area_code)
    {
        case 229:
            printf("Albany\n");
            break;
        case 404: 
        case 470: 
        case 678: 
        case 770:
            printf("Atlanta\n");
            break;
        case 478:
            printf("Macon\n");
            break;
        case 706: 
        case 762:
            printf("Columbus\n");
            break;
        case 912:
            printf("Savannah\n");
            break;
        default:
            printf("Area code not recognized.\n");
    }

    return 0;
}