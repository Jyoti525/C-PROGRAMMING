// C Program to Reverse a String Using Recursion
#include <stdio.h>
#include <string.h>

void reverseRecursively(char str[], int l, int r) {
    if (l >= r) return;
    char temp = str[l];
    str[l] = str[r];
    str[r] = temp;
    reverseRecursively(str, l + 1, r - 1);
}

int main() {
    char str[] = "hello";
    reverseRecursively(str, 0, strlen(str) - 1);
    printf("Reversed String: %s\n", str);
    return 0;
}
