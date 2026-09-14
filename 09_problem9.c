// 9. Program to calculate the volume of a sphere

#include <stdio.h>

int main()
{
    float radius, volume;
    float pi = 3.14159;

    printf("Enter radius of sphere: ");
    scanf("%f", &radius);

    volume = (4.0 / 3.0) * pi * radius * radius * radius;

    printf("Volume of sphere = %.2f\n", volume);

    return 0;
}