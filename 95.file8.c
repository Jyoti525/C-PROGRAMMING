// C Program to Read Content From One File and Write it Into Another File
#include <stdio.h>

int main() {
    FILE *src = fopen("input.txt", "r");
    FILE *dest = fopen("output.txt", "w");
    char ch;

    if (!src || !dest) {
        printf("Error opening files\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    printf("Content written to new file\n");
    fclose(src);
    fclose(dest);
    return 0;
}
