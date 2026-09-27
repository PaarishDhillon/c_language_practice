// To grade a student using switch case

#include <stdio.h>

int main() {
    int percentage;

    printf("Enter percentage: ");
    scanf("%d", &percentage);

    switch (percentage / 10) {
        case 10:
        case 9:
            printf("Grade: A+\n");
            break;

        case 8:
            printf("Grade: A\n");
            break;

        case 7:
            printf("Grade: B\n");
            break;

        case 6:
            printf("Grade: C\n");
            break;

        case 5:
            printf("Grade: D\n");
            break;
        case 4:
            printf("Grade: E\n");
            break;

        default:
            if (percentage >= 0 && percentage < 40)
                printf("Grade: F\n");
            else
                printf("Invalid percentage\n");
    }

    return 0;
}