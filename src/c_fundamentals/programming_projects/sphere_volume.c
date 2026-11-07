#include <stdio.h>

#define SPHERE_VOLUME_COEFFICIENT (4.0f / 3.0f)
#define PI 3.14159265358979323846f

int main(void)
{
    float radius, volume;

    radius = 10.0f; 
    volume = SPHERE_VOLUME_COEFFICIENT * PI * radius * radius * radius; 

    printf("The volume of a sphere with radius %.2f is: %.2f\n", radius, volume);

    return 0;
}