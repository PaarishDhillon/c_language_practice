// To identify if a person is eligible to vote or not using switch case

#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    switch (age >= 18) {
        case 1:
            printf("Eligible to vote.\n");
            break;

        case 0:
            printf("Not eligible to vote.\n");
            break;
    }

    return 0;
}