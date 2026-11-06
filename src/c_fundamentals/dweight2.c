/* Computes the dimensional weight of a
   box from input provided by the user */

#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void)
{
    int height, length, width, volume, weight;

    printf("Enter the height of the box: ");
    scanf("%d", &height);

    printf("Enter the length of the box: ");
    scanf("%d", &length);

    printf("Enter the width of the box: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND; // Round up to the nearest pound

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}