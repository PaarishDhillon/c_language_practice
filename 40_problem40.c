// To access an array using a pointer

#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;

    printf("Array elements are:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}