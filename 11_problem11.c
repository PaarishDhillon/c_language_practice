// 11. Program to calculate Simple Interest and Compound Interest

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    float principal, rate, time;
    float si, ci, amount;
    char choice[10];

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    printf("Do you want to calculate Simple Interest or Compound Interest? (Enter 'simple' or 'compound'): ");
    scanf("%s", choice);

    if (strcmp(choice, "simple") == 0)
    {
        // Simple Interest
        si = (principal * rate * time) / 100;
        printf("Simple Interest = %.2f\n", si);

    }
    
    else if (strcmp(choice, "compound") == 0)
    {
        // Compound Interest
        amount = principal * pow((1 + (rate / 100)), time);
        ci = amount - principal;
        printf("Compound Interest = %.2f\n", ci);
    }
    else
    {
        printf("Invalid choice. Please enter 'simple' or 'compound'.\n");
    }

    return 0;
}