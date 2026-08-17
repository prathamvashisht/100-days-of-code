
//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main() {
    char ch;

    // Read a single character from the user
    printf("  Enter the chracter :  ");
    scanf("%c", &ch);

    // Check conditions for each character category
    if (ch >= 'A' && ch <= 'Z') {
        printf("Output: Uppercase alphabet\n");
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("Output: Lowercase alphabet\n");
    } 
    else if (ch >= '0' && ch <= '9') {
        printf("Output: Digit\n");
    } 
    else {
        printf("Output: Special character\n");
    }

    return 0;
}
