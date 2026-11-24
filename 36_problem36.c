//  To use a structure and a structure pointer as arguments in a function


#include <stdio.h>

struct Student {
    int roll;
    char name[30];
};

void display(struct Student s) {
    printf("Using Structure:\n");
    printf("Roll: %d\nName: %s\n", s.roll, s.name);
}

void displayPointer(struct Student *p) {
    printf("\nUsing Structure Pointer:\n");
    printf("Roll: %d\nName: %s\n", p->roll, p->name);
}

int main() {
    struct Student s = {1, "Paarish"};

    display(s);
    displayPointer(&s);

    return 0;
}