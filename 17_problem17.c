#include <stdio.h>

int main() {
    int a = 10, b = 5;

    printf("(a > 5 && b < 10) = %d\n", (a > 5 && b < 10));
    printf("(a > 15 || b < 10) = %d\n", (a > 15 || b < 10));
    printf("!(a > 5) = %d\n", !(a > 5));

    return 0;
}