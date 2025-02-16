// C Program to Split a String into a Number of Sub-Strings
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello,World,Example";
    char* token = strtok(str, ",");
    while (token) {
        printf("%s\n", token);
        token = strtok(NULL, ",");
    }
    return 0;
}
