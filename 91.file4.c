// C Program to Compare Two Files and Report Mismatches
#include <stdio.h>

int main() {
    FILE *file1 = fopen("file1.txt", "r");
    FILE *file2 = fopen("file2.txt", "r");
    char ch1, ch2;
    int pos = 0, mismatch = 0;

    if (!file1 || !file2) {
        printf("Error opening files\n");
        return 1;
    }

    while ((ch1 = fgetc(file1)) != EOF && (ch2 = fgetc(file2)) != EOF) {
        pos++;
        if (ch1 != ch2) {
            printf("Mismatch at position %d: '%c' vs '%c'\n", pos, ch1, ch2);
            mismatch = 1;
        }
    }

    fclose(file1);
    fclose(file2);

    if (!mismatch)
        printf("Files are identical\n");

    return 0;
}
