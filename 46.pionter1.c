// Return a Pointer from a Function
#include <stdio.h>
#include <stdlib.h>

int *createAndReturnInteger(int value) {

    int *ptr = (int *)malloc(sizeof(int));

    if (ptr == NULL) {
        perror("Memory allocation failed"); 
        exit(1);                             
    }

    
    *ptr = value;  

    return ptr; 
}

int main() {
    int *myPointer;

    myPointer = createAndReturnInteger(42); 

    if (myPointer != NULL) { 
        printf("The value at the address is: %d\n", *myPointer); 

        free(myPointer); 
        myPointer = NULL; 
    }


    return 0;
}