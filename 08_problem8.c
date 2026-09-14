// 8. Program to calculate the volume of a cylinder

#include <stdio.h>

int main()
{
    float radius, height, volume;
    float pi = 3.14159;

    printf("Enter radius of cylinder: ");
    scanf("%f", &radius);

    printf("Enter height of cylinder: ");
    scanf("%f", &height);

    volume = pi * radius * radius * height;

    printf("Volume of cylinder = %.2f\n", volume);

    return 0;
}