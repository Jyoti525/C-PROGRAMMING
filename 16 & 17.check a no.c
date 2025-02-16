// 16..to check a no. positive,negative or zero.
#include <stdio.h>
int main() {
    double num; 
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num > 0)
        printf("The number is Positive.\n");
    else if (num < 0)
        printf("The number is Negative.\n");
    else
        printf("The number is Zero.\n");

// 17..check a no. even or odd.
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%2==0){
        printf("no. is eeven.");
    }else{
        printf("no. is odd.");
    }

    return 0;
}
