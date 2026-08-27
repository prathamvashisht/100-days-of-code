// Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("enter the both the numbers( EX : 12 14 ) :    ");

    if (scanf("%d %d", &num1, &num2) == 2)
    {

        int smallest = (num1 < num2) ? num1 : num2;
        int hcf = 1;

        for (int i = 1; i <= smallest; i++)
        {

            if (num1 % i == 0 && num2 % i == 0)
            {
                hcf = i;
            }
        }

        printf("%d\n", hcf);
    }

    return 0;
}
