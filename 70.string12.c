// C Program to Remove Leading Zeros
#include <stdio.h>

char* removeLeadingZeros(char str[]) {
    int i = 0;
    while (str[i] == '0') i++;
    return str + i;
}

int main() {
    char str[] = "0001234";
    printf("After removing leading zeros: %s\n", removeLeadingZeros(str));
    return 0;
}
