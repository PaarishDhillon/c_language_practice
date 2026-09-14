// 4. Program to calculate the volume of a sphere (radius given = 12)

#include <stdio.h>

int main()
{
    float radius = 12, volume;
    float pi = 3.14159;

    volume = (4.0 / 3.0) * pi * radius * radius * radius;

    printf("Volume of sphere = %.2f\n", volume);

    return 0;
}