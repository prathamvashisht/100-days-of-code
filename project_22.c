
//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float cp, sp, percentage;

    // Prompt user and take input for Cost Price
    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    // Prompt user and take input for Selling Price
    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    // Determine financial outcome
    if (sp > cp) {
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit %.0f%%\n", percentage);
    } 
    else if (cp > sp) {
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss %.0f%%\n", percentage);
    } 
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
