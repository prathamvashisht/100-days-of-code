
//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, si, ci;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual rate of interest (in %): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Simple Interest Formula: (P * R * T) / 100
    si = (principal * rate * time) / 100;

    // Compound Interest Formula: P * (1 + R/100)^T - P
    ci = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest = %f\n", si);
    printf("Compound Interest = %f\n", ci);

    return 0;
}

