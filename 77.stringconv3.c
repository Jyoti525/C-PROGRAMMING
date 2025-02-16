// Double to String Conversion
#include <stdio.h>

int main() {
    double num = 3.1415926535;
    char str[30];
    sprintf(str, "%lf", num);
    printf("Double as string: %s\n", str);
    return 0;
}
