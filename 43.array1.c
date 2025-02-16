#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void print2DArray(int arr[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int findLargest(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void findMinMax(int arr[], int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) *max = arr[i];
        if (arr[i] < *min) *min = arr[i];
    }
}

int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

double calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
}

void bubbleSort(int arr[], int size) {
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

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) minIndex = j;
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++) L[i] = arr[left + i];
    for (j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];
    i = 0; j = 0; k = left;
    while (i < n1 && j < n2) arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void sortDescending(int arr[], int size) {
    bubbleSort(arr, size);
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int arr[10] = {34, 7, 23, 32, 5, 62, 32, 23, 67, 45};
    int choice, min, max, key;

    printf("Choose an operation:\n");
    printf("1. Print 2D Array\n2. Find Largest Element\n3. Find Min and Max\n4. Binary Search\n5. Calculate Average\n6. Bubble Sort\n7. Merge Sort\n8. Selection Sort\n9. Insertion Sort\n10. Sort in Descending Order\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            { int arr2D[2][10] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};
            print2DArray(arr2D, 2, 5); }
            break;
        case 2:
            printf("Largest: %d\n", findLargest(arr, 10));
            break;
        case 3:
            findMinMax(arr, 10, &min, &max);
            printf("Min: %d, Max: %d\n", min, max);
            break;
        case 4:
            printf("Enter element to search: ");
            scanf("%d", &key);
            int res = binarySearch(arr, 10, key);
            printf(res != -1 ? "Found at index %d\n" : "Not found\n", res);
            break;
        case 5:
            printf("Average: %.2f\n", calculateAverage(arr, 10));
            break;
        case 6:
            bubbleSort(arr, 10);
            printArray(arr, 10);
            break;
        case 7:
            mergeSort(arr, 0, 9);
            printArray(arr, 10);
            break;
        case 8:
            selectionSort(arr, 10);
            printArray(arr, 10);
            break;
        case 9:
            insertionSort(arr, 10);
            printArray(arr, 10);
            break;
        case 10:
            sortDescending(arr, 10);
            printArray(arr, 10);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
