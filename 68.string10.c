// C Program to Print the First Letter of Each Word
#include <stdio.h>
#include <string.h>

void printFirstLetters(char str[]) {
    if (str[0] != ' ') printf("%c ", str[0]);
    for (int i = 1; str[i]; i++)
        if (str[i - 1] == ' ' && str[i] != ' ') printf("%c ", str[i]);
}

int main() {
    char str[] = "hello world program";
    printFirstLetters(str);
    return 0;
}
