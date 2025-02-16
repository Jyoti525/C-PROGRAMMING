#include <stdio.h>
#include <math.h>  

int main() {
    double principal, rate, time, compound_interest, amount;
    printf("Enter Principal amount: ");
    scanf("%lf", &principal);

    printf("Enter Rate of Interest (per annum): ");
    scanf("%lf", &rate);

    printf("Enter Time (in years): ");
    scanf("%lf", &time);

    amount = principal * pow((1 + rate / 100), time);
    
    compound_interest = amount - principal;

    printf("Compound Interest = %.2f\n", compound_interest);
    printf("Total Amount = %.2f\n", amount);

    return 0;
}
