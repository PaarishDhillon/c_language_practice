// To calculate area of shapes in querry using switch case

#include <stdio.h>

int main() {
    int choice;
    float radius, side, length, width, base, height, area;

    printf("Choose a shape:\n");
    printf("1. Circle\n");
    printf("2. Triangle\n");
    printf("3. Square\n");
    printf("4. Rectangle\n");
    printf("5. Parallelogram\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;

        case 2:
            printf("Enter base and height: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle = %.2f\n", area);
            break;

        case 3:
            printf("Enter side: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of Square = %.2f\n", area);
            break;

        case 4:
            printf("Enter length and width: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of Rectangle = %.2f\n", area);
            break;

        case 5:
            printf("Enter base and height: ");
            scanf("%f %f", &base, &height);
            area = base * height;
            printf("Area of Parallelogram = %.2f\n", area);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}