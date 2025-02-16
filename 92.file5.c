// C Program to Copy One File into Another File
#include <stdio.h>

int main() {
    FILE *src = fopen("source.txt", "r");
    FILE *dest = fopen("destination.txt", "w");
    char ch;

    if (!src || !dest) {
        printf("Error opening files\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    printf("File copied successfully\n");
    fclose(src);
    fclose(dest);
    return 0;
}
