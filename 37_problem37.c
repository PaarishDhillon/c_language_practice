//  To print employee data using a union and use type def also

#include <stdio.h>
#include <string.h>

typedef union Employee {
    int id;
    float salary;
    char name[30];
} Employee;

int main() {
    Employee e;

    e.id = 101;
    printf("Employee ID: %d\n", e.id);

    e.salary = 25000.50;
    printf("Salary: %.2f\n", e.salary);

    strcpy(e.name, "Rahul");
    printf("Name: %s\n", e.name);

    return 0;
}
