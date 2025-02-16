// C Program to Print All Patterns That Match a Given Pattern From a File
#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("data.txt", "r");
    char line[256], pattern[] = "hello";

    if (!file) {
        printf("Error opening file\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, pattern))
            printf("%s", line);
    }

    fclose(file);
    return 0;
}
