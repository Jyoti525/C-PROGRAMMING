// C Program to Check for Pangram String
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPangram(char str[]) {
    int alpha[26] = {0};
    for (int i = 0; str[i]; i++)
        if (isalpha(str[i])) alpha[tolower(str[i]) - 'a'] = 1;

    for (int i = 0; i < 26; i++)
        if (!alpha[i]) return 0;

    return 1;
}

int main() {
    char str[] = "The quick brown fox jumps over the lazy dog";
    printf("The string is %s a pangram\n", isPangram(str) ? "" : "not");
    return 0;
}
