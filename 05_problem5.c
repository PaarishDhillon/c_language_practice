// 5. Program to create a basic calculator  

#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (op == '+')
    {
        printf("Result = %d\n", a + b);
    }
    else if (op == '-')
    {
        printf("Result = %d\n", a - b);
    }
    else if (op == '*')
    {
        printf("Result = %d\n", a * b);
    }
    else if (op == '/')
    {
        if (b != 0)
            printf("Result = %.2f\n", (float)a / b);
        else
            printf("Division by zero is not possible.\n");
    }
    else if (op == '%')
    {
        if (b != 0)
            printf("Result = %d\n", a % b);
        else
            printf("Modulo by zero is not possible.\n");
    }
    else
    {
        printf("Invalid operator.\n");
    }

    return 0;
}