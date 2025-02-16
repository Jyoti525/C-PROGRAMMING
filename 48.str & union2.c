// Store Student Records as Structures and Sort them by Name
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 


struct Student {
    int rollNumber;
    char name[50];
    float marks;
};


int compareByName(const void *a, const void *b) {
    struct Student *studentA = (struct Student *)a;
    struct Student *studentB = (struct Student *)b;
    return strcmp(studentA->name, studentB->name); 
}

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student *students = (struct Student *)malloc(numStudents * sizeof(struct Student));

    if (students == NULL) {
        perror("Memory allocation failed");
        return 1; 

    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter information for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name); 
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    qsort(students, numStudents, sizeof(struct Student), compareByName);

    printf("\nStudent Records (Sorted by Name):\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    free(students);

    return 0;
}