//Add Two Complex Numbers by Passing Structure to a Function
#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex sum;
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;
    return sum;
}

int main() {
    struct Complex complex1, complex2, result;

    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &complex1.real, &complex1.imaginary);

    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &complex2.real, &complex2.imaginary);

    result = addComplex(complex1, complex2);

    printf("\nSum of the two complex numbers: %.2f + %.2fi\n", result.real, result.imaginary);

    return 0;
}