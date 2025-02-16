// Read/Write Structure to a File 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[50];
    int age;
};

int main() {
    int numStudents;
    char filename[100]; 

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

    printf("\nEnter the filename to save the student data: ");
    scanf("%s", filename);

    
    FILE *outfile = fopen(filename, "wb"); 

    if (outfile == NULL) {
        perror("Error opening file for writing");
        free(students);
        return 1;
    }

    fwrite(&numStudents, sizeof(int), 1, outfile); 
    fwrite(students, sizeof(struct Student), numStudents, outfile); 

    fclose(outfile);
    free(students);

    printf("Student data saved to %s\n", filename);


    printf("\n--- Reading from the file ---\n");

    int readNumStudents;
    struct Student *readStudents;

    FILE *infile = fopen(filename, "rb"); 
    if (infile == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    fread(&readNumStudents, sizeof(int), 1, infile); 

    readStudents = (struct Student *)malloc(readNumStudents * sizeof(struct Student));
    if (readStudents == NULL) {
        perror("Memory allocation failed (reading)");
        fclose(infile);
        return 1;
    }

    fread(readStudents, sizeof(struct Student), readNumStudents, infile);

    fclose(infile);

    printf("Number of students read from file: %d\n", readNumStudents);
    for (int i = 0; i < readNumStudents; i++) {
        printf("ID: %d\n", readStudents[i].id);
        printf("Name: %s\n", readStudents[i].name);
        printf("Age: %d\n", readStudents[i].age);
        printf("\n");
    }

    free(readStudents);


    return 0;
}