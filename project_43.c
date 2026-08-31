// Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main()
{
    int n;
    int reminder;
    int result = 0;

    printf("enter the number: ");
    scanf("%d", &n);

    int original = n;

    while (n > 0)
    {
        reminder = n % 10;
        int factorial = 1;

        for (int i = 1; i <= reminder; i++)
        {
            factorial = factorial * i;
        }

        result = result + factorial;
        n = n / 10;
    }

    if (result == original)
    {
        printf("Strong number\n");
    }
    else
    {
        printf("Not strong number\n");
    }

    return 0;
}
