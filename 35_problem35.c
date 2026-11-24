// To print student data using a structure

#include <stdio.h>
#include <string.h>

struct Student{
    int RollNo;
    char Name[50];
    char Class[10];
    char Section;
};

int main()
{
    struct Student s1;
    strcpy(s1.Name, "Paarish Dhillon");
    s1.RollNo = 3;
    strcpy(s1.Class, "CSE");
    s1.Section = 'B';

    printf("Name: %s\n",s1.Name);  
    printf("Class: %s\n",s1.Class);  
    printf("Section: %c\n",s1.Section);  
    printf("Roll Number: %d\n",s1.RollNo);  
    return 0;
}