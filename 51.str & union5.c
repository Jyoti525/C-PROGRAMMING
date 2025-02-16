// Store Student Records as Structures and Sort them by Age or ID
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[50];
    int age;
};

int compareByID(const void *a, const void *b) {
    struct Student *studentA = (struct Student *)a;
    struct Student *studentB = (struct Student *)b;
    return studentA->id - studentB->id; 
}

int compareByAge(const void *a, const void *b) {
    struct Student *studentA = (struct Student *)a;
    struct Student *studentB = (struct Student *)b;
    return studentA->age - studentB->age; 
}

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student *students = (struct Student *)malloc(numStudents * sizeof(struct Student));

    if (students == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter information for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name); 
        printf("Age: ");
        scanf("%d", &students[i].age);
    }

    int sortChoice;
    printf("\nSort by:\n1. ID\n2. Age\nEnter your choice: ");
    scanf("%d", &sortChoice);

    if (sortChoice == 1) {
        qsort(students, numStudents, sizeof(struct Student), compareByID);
        printf("\nStudent Records (Sorted by ID):\n");

    } else if (sortChoice == 2) {
        qsort(students, numStudents, sizeof(struct Student), compareByAge);
        printf("\nStudent Records (Sorted by Age):\n");

    } else {
        printf("Invalid sort choice.\n");
        free(students);
        return 1;
    }


    for (int i = 0; i < numStudents; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("\n");
    }

    free(students);

    return 0;
}