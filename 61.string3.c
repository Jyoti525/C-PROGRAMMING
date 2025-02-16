// C Program to Get a Non-Repeating Character From the Given String
#include <stdio.h>
#include <string.h>

char firstNonRepeating(char str[]) {
    int count[256] = {0};
    for (int i = 0; str[i]; i++) count[str[i]]++;

    for (int i = 0; str[i]; i++)
        if (count[str[i]] == 1) return str[i];

    return '\0'; 
}

int main() {
    char str[] = "swiss";
    char result = firstNonRepeating(str);
    if (result) printf("First non-repeating character: %c\n", result);
    else printf("No non-repeating character found.\n");
    return 0;
}
