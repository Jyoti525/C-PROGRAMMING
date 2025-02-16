// C Program to Compare Two Strings Lexicographically
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "banana";
    printf("Lexicographical comparison: %d\n", strcmp(str1, str2));
    return 0;
}
