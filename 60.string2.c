// C Program to Add Two Binary Strings
#include <stdio.h>
#include <string.h>

void addBinary(char a[], char b[]) {
    int i = strlen(a) - 1, j = strlen(b) - 1, carry = 0;
    char result[100] = "";
    int k = 99; 

    result[k--] = '\0';

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        result[k--] = (sum % 2) + '0';
        carry = sum / 2;
    }

    printf("Sum of Binary Strings: %s\n", &result[k + 1]);
}

int main() {
    char bin1[] = "1101";
    char bin2[] = "1011";
    addBinary(bin1, bin2);
    return 0;
}
