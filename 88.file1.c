// create a temporary file
#include <stdio.h>

int main() {
    FILE *tmp = tmpfile();
    if (!tmp) {
        printf("Failed to create temporary file\n");
        return 1;
    }
    fprintf(tmp, "This is a temporary file.\n");
    printf("Temporary file created successfully.\n");
    fclose(tmp);
    return 0;
}
