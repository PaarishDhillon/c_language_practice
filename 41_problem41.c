// To demonstrate the use of pointers for dynamic allocation using Malloc, calloc, realloc and free functions

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, *temp;
    int n = 3;

    // malloc
    p = (int *)malloc(n * sizeof(int));

    if (p == NULL)
        return 1;

    printf("Enter 3 numbers:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &p[i]);

    // calloc
    temp = (int *)calloc(3, sizeof(int));

    printf("calloc values: ");
    for (int i = 0; i < 3; i++)
        printf("%d ", temp[i]);

    // realloc
    p = (int *)realloc(p, 5 * sizeof(int));

    if (p == NULL)
        return 1;

    printf("\nEnter 2 more numbers:\n");
    for (int i = 3; i < 5; i++)
        scanf("%d", &p[i]);

    printf("All numbers: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", p[i]);

    // free
    free(p);
    free(temp);

    return 0;
}