// To implement a stack using an array with push, pop and display operations

#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int value) {
    if (top == SIZE - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = value;
}

void pop() {
    if (top == -1)
        printf("Stack Underflow\n");
    else
        printf("Popped: %d\n", stack[top--]);
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }

    for (int i = top; i >= 0; i--)
        printf("%d ", stack[i]);

    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    pop();

    display();

    return 0;
}