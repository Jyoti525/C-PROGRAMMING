// C Program to Add or Concatenate Two Strings
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "World!";
    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);
    return 0;
}
