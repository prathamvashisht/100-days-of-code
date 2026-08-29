// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
int main()
{
    int n;
    int reminder;
    int result = 1; // Start at 1 to find the highest place value

    printf("enter the binary number : ");
    scanf("%d", &n);

    // Step 1: Find the size of the number (e.g., for 1010, result becomes 1000)
    while (result <= n / 10)
    {
        result = result * 10;
    }

    printf(" the compliant is : ");

    // Step 2: Your exact loop, running from left to right
    while (result > 0)
    {
        reminder = (n / result) % 10; // Extracts the leftmost digit

        if (reminder == 1)
        {
            reminder = 0;
        }
        else if (reminder == 0)
        {
            reminder = 1;
        }

        printf("%d", reminder); // Prints each correct bit immediately
        
        result = result / 10;   // Moves to the next digit to the right
    }

    printf("\n");
    return 0;
}
