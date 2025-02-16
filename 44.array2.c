#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int removeDuplicates(int arr[], int size) {
    int j = 0;
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[size - 1];
    return j;
}

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    for (int i = 0; i < size1; i++) merged[i] = arr1[i];
    for (int i = 0; i < size2; i++) merged[size1 + i] = arr2[i];
}

int removeOccurrences(int arr[], int size, int key) {
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != key) arr[j++] = arr[i];
    }
    return j;
}

void findCommonElements(int arr1[], int size1, int arr2[], int size2) {
    printf("Common elements: ");
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");
}

void copyArray(int source[], int destination[], int size) {
    for (int i = 0; i < size; i++) destination[i] = source[i];
}

void rotateArray(int arr[], int size, int steps) {
    steps %= size;
    int temp[steps];
    for (int i = 0; i < steps; i++) temp[i] = arr[i];
    for (int i = 0; i < size - steps; i++) arr[i] = arr[i + steps];
    for (int i = 0; i < steps; i++) arr[size - steps + i] = temp[i];
}

void sort2DArrayRows(int arr[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) sortAscending(arr[i], cols);
}

int areMatricesEqual(int mat1[][10], int mat2[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat1[i][j] != mat2[i][j]) return 0;
        }
    }
    return 1;
}

void findTranspose(int mat[][10], int trans[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            trans[j][i] = mat[i][j];
        }
    }
}

int main() {
    int choice;
    printf("Choose an operation:\n");
    printf("1. Sort Array in Ascending Order\n2. Remove Duplicates\n3. Merge Two Arrays\n4. Remove All Occurrences\n5. Find Common Elements\n6. Copy Array\n7. Rotate Array\n8. Sort 2D Array Rows\n9. Check Matrix Equality\n10. Find Transpose\n");
    scanf("%d", &choice);
    
    int arr1[10] = {10, 20, 20, 30, 40, 50, 50, 60, 70, 80};
    int arr2[5] = {30, 40, 50, 90, 100};
    int merged[15];
    int key;

    switch (choice) {
        case 1:
            sortAscending(arr1, 10);
            printArray(arr1, 10);
            break;
        case 2:
            printArray(arr1, removeDuplicates(arr1, 10));
            break;
        case 3:
            mergeArrays(arr1, 10, arr2, 5, merged);
            printArray(merged, 15);
            break;
        case 4:
            printf("Enter element to remove: ");
            scanf("%d", &key);
            printArray(arr1, removeOccurrences(arr1, 10, key));
            break;
        case 5:
            findCommonElements(arr1, 10, arr2, 5);
            break;
        case 6:
            copyArray(arr1, arr2, 10);
            printArray(arr2, 10);
            break;
        case 7:
            rotateArray(arr1, 10, 3);
            printArray(arr1, 10);
            break;
        case 8:
            { int mat[2][10] = {{9, 3, 5}, {7, 1, 2}};
            sort2DArrayRows(mat, 2, 3); }
            break;
        case 9:
            { int mat1[2][10] = {{1, 2}, {3, 4}}, mat2[2][10] = {{1, 2}, {3, 4}};
            printf(areMatricesEqual(mat1, mat2, 2, 2) ? "Equal\n" : "Not Equal\n"); }
            break;
        case 10:
            { int mat[2][10] = {{1, 2}, {3, 4}}, trans[10][10];
            findTranspose(mat, trans, 2, 2); }
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
