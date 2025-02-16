// Decimal to Binary Conversion
#include <stdio.h>

void decimalToBinary(int num) {
    if (num > 1) {
        decimalToBinary(num / 2);
    }
    printf("%d", num % 2);
}

int main() {
    int decimal = 10;
    printf("Decimal to Binary: ");
    decimalToBinary(decimal);
    printf("\n");
    return 0;
}
