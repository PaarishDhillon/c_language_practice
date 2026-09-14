// 6. Program to calculate the area of a square using the power function

#include <stdio.h>
#include <math.h>

int main()
{
    float side, area;

    printf("Enter side of square: ");
    scanf("%f", &side);

    area = pow(side, 2);

    printf("Area of square = %.2f\n", area);

    return 0;
}