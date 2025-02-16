// Find the Largest Element in an Array using Pointers
#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size]; 

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int *largest = &array[0]; 

    for (int i = 1; i < size; i++) {
        if (array[i] > *largest) { 
            largest = &array[i];   
        }
    }

    printf("The largest element in the array is: %d\n", *largest); 

    return 0;
}