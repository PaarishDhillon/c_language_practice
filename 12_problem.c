// 12. Program to calculate total marks, average and percentage of a student

#include <stdio.h>

int main()
{
    float marks[5];
    float total = 0, average, percentage;

    
    // Input marks
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks of subject %d:\n", i + 1);
        scanf("%f", &marks[i]);
    }

    // Calculate total
    for (int i = 0; i < 5; i++)
    {
        total = total + marks[i];
    }

    average = total / 5;
    percentage = (total / 500) * 100;

    printf("Total Marks = %.2f\n", total);
    printf("Average = %.2f\n", average);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}