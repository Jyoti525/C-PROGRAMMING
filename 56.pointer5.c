// C Program to Sort a 2D Array of Strings
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareStrings(const void *a, const void *b) {
    const char *str1 = *(const char **)a;  
    const char *str2 = *(const char **)b;
    return strcmp(str1, str2);
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns (max string length): ");
    scanf("%d", &cols);

    char **stringArray = (char **)malloc(rows * sizeof(char *));

    if (stringArray == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        stringArray[i] = (char *)malloc(cols * sizeof(char)); 
        if (stringArray[i] == NULL) {
            perror("Memory allocation failed");
            
            for (int j = 0; j < i; j++) {
                free(stringArray[j]);
            }
            free(stringArray);
            return 1;
        }

        printf("Enter string for row %d: ", i + 1);
        scanf(" %[^\n]s", stringArray[i]); 
    }

    qsort(stringArray, rows, sizeof(char *), compareStrings);

    printf("\nSorted strings:\n");
    for (int i = 0; i < rows; i++) {
        printf("%s\n", stringArray[i]);
    }

    for (int i = 0; i < rows; i++) {
        free(stringArray[i]); 
    }
    free(stringArray);     
    stringArray = NULL;

    return 0;
}