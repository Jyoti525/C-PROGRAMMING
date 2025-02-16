// C Program to Insert a String into Another String
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello World!";
    char str2[] = "Beautiful ";
    memmove(str1 + 6 + strlen(str2), str1 + 6, strlen(str1) - 5);
    memcpy(str1 + 6, str2, strlen(str2));
    printf("After Insertion: %s\n", str1);
    return 0;
}
