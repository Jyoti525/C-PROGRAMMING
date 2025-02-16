// program to add student information..
#include <stdio.h>
#include <string.h> 
struct Student {
    int rollNumber;
    char name[50]; 
    float marks;
};

int main() {
    
    struct Student student1;

    student1.rollNumber = 101;
    strcpy(student1.name, "Jyoti"); 
    student1.marks = 85.5;

    printf("Student Information:\n");
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks); 
   
    struct Student student2;
    student2.rollNumber = 102;
    strcpy(student2.name, "Sipu");
    student2.marks = 92.0;

    printf("\nAnother Student Information:\n");
    printf("Roll Number: %d\n", student2.rollNumber);
    printf("Name: %s\n", student2.name);
    printf("Marks: %.2f\n", student2.marks);


    return 0;
}