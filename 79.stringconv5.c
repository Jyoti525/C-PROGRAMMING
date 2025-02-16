// Long to String Conversion
#include <stdio.h>

int main() {
    long num = 987654321;
    char str[20];
    sprintf(str, "%ld", num);
    printf("Long as string: %s\n", str);
    return 0;
}
