// C Program to Reverse an Array or String
#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int l = 0, r = strlen(str) - 1;
    while (l < r) {
        char temp = str[l];
        str[l++] = str[r];
        str[r--] = temp;
    }
}

int main() {
    char str[] = "hello";
    reverseString(str);
    printf("Reversed String: %s\n", str);
    return 0;
}
