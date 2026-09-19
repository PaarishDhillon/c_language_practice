// To display use of ternary operator along with logical operator

#include <stdio.h>

int main()
{
    int age, marks;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%d", &marks);

    (age >= 18 && marks >= 40)
        ? printf("Eligible\n")
        : printf("Not Eligible\n");

    return 0;
}