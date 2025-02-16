//Declare a Two-Dimensional Array of Pointers 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3;
    int cols = 4;

    int **myArray = (int **)malloc(rows * sizeof(int *));

    if (myArray == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    
    for (int i = 0; i < rows; i++) {
        myArray[i] = (int *)malloc(cols * sizeof(int));
        if (myArray[i] == NULL) {
            perror("Memory allocation failed");
            
            for (int j = 0; j < i; j++) {
                free(myArray[j]);
            }
            free(myArray);
            return 1;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            myArray[i][j] = i * cols + j; 
            printf("%d ", myArray[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(myArray[i]); 
    }
    free(myArray);         
    myArray = NULL;       

    return 0;
}