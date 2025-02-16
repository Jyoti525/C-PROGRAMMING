// Boolean to String Conversion
#include <stdio.h>

const char* boolToString(int boolean) {
    return boolean ? "true" : "false";
}

int main() {
    int boolean = 1;
    printf("Boolean as string: %s\n", boolToString(boolean));
    return 0;
}
