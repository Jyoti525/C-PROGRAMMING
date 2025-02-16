// C Program to Append the Content of One Text File to Another
#include <stdio.h>

int main() {
    FILE *src = fopen("file1.txt", "r");
    FILE *dest = fopen("file2.txt", "a");
    char ch;

    if (!src || !dest) {
        printf("Error opening files\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    printf("Content appended successfully\n");
    fclose(src);
    fclose(dest);
    return 0;
}
