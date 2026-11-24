//  To demonstrate the concept of pointer arithmetic


#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int *p = a;

    printf("Value of *p = %d\n", *p);

    p++;
    printf("After p++, value = %d\n", *p);

    p += 2;
    printf("After p+=2, value = %d\n", *p);

    p--;
    printf("After p--, value = %d\n", *p);

    return 0;
}
