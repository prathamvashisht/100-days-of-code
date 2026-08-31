
//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/


#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    
    // Prompt the user for input
    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }
    
    // Loop to calculate the sum of the series
    for (int i = 0; i < n; i++) {
        // First term is a special case (1), subsequent terms follow (2i + 1) / (2i + 2)
        if (i == 0) {
            sum += 1.0;
        } else {
            double numerator = 2.0 * i + 1.0;
            double denominator = 2.0 * i + 2.0;
            sum += numerator / denominator;
        }
    }
    
    // Print the result rounded to one decimal place to match the sample output
    printf("Approximate sum: %.1f\n", sum);
    
    return 0;
}
