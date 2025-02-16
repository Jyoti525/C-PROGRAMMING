#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

void printMatrix(int mat[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int determinant(int mat[SIZE][SIZE]) {
    return mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) -
           mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) +
           mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
}

int trace(int mat[SIZE][SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) sum += mat[i][i];
    return sum;
}

void addMatrices(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int res[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void multiplyMatrices(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int res[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            res[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printBoundary(int mat[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i == 0 || i == SIZE - 1 || j == 0 || j == SIZE - 1) {
                printf("%d ", mat[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void interchangeRows(int mat[SIZE][SIZE]) {
    for (int j = 0; j < SIZE; j++) {
        int temp = mat[0][j];
        mat[0][j] = mat[SIZE - 1][j];
        mat[SIZE - 1][j] = temp;
    }
}

void interchangeColumns(int mat[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        int temp = mat[i][0];
        mat[i][0] = mat[i][SIZE - 1];
        mat[i][SIZE - 1] = temp;
    }
}

int sumDiagonals(int mat[SIZE][SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += mat[i][i] + mat[i][SIZE - i - 1];
    }
    return sum;
}

int main() {
    int choice;
    int mat1[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[SIZE][SIZE] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int res[SIZE][SIZE];

    printf("Choose an operation:\n");
    printf("1. Find Determinant\n2. Find Trace\n3. Add Matrices\n4. Multiply Matrices\n5. Print Boundary Elements\n6. Sum of Diagonals\n7. Interchange First and Last Row\n8. Interchange First and Last Column\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Determinant: %d\n", determinant(mat1));
            break;
        case 2:
            printf("Trace: %d\n", trace(mat1));
            break;
        case 3:
            addMatrices(mat1, mat2, res);
            printMatrix(res);
            break;
        case 4:
            multiplyMatrices(mat1, mat2, res);
            printMatrix(res);
            break;
        case 5:
            printBoundary(mat1);
            break;
        case 6:
            printf("Sum of Diagonals: %d\n", sumDiagonals(mat1));
            break;
        case 7:
            interchangeRows(mat1);
            printMatrix(mat1);
            break;
        case 8:
            interchangeColumns(mat1);
            printMatrix(mat1);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
