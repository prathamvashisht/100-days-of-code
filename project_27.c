// Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;
    int current_odd = 1;

    printf("Input: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        sum += current_odd;
        current_odd += 2;
    }

    printf("Output: %d\n", sum);

    return 0;
}
