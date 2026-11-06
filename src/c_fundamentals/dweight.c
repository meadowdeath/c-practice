/* Computes the dimensional weight of a box */
#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void) 
{
    int height = 8, length = 12, width = 10; 
    int volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", height, length, width);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND);

    return 0;
}