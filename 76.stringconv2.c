// Float to String Conversion
#include <stdio.h>

int main() {
    float num = 3.1415;
    char str[20];
    sprintf(str, "%f", num);
    printf("Float as string: %s\n", str);
    return 0;
}
