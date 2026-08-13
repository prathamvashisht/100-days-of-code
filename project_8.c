//Q8: Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n, sum = 0;

   
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n < 1) 
    {
        printf("Error: Natural numbers start from 1.\n");
        return 1; 
    }

    
    for (int i = 1; i <= n; i++) 
    {
        sum += i;
    }

   
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
