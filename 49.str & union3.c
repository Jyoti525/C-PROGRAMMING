// Add N Distances Given in inch-feet System using Structures
#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};

int main() {
    int n;

    printf("Enter the number of distances: ");
    scanf("%d", &n);

    struct Distance distances[n]; 

    
    for (int i = 0; i < n; i++) {
        printf("Enter distance %d (feet inches): ", i + 1);
        scanf("%d %d", &distances[i].feet, &distances[i].inches);
    }

    struct Distance total = {0, 0}; 

    for (int i = 0; i < n; i++) {
        total.feet += distances[i].feet;
        total.inches += distances[i].inches;
    }

    
    total.feet += total.inches / 12; 
    total.inches %= 12;           

    
    printf("\nTotal distance: %d feet %d inches\n", total.feet, total.inches);

    return 0;
}