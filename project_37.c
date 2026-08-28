// Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>
int main()
{
    int n1, n2;
    int i;
    int lcm;
    int max;
    printf("enter the number (ex: 12 16):");
    scanf("%d %d", &n1, &n2);
    if (n1 == 0 || n2 == 0)
    {
        printf("entered output is invalid ");
    }
    else
    {
        if (n1 > n2)
        {
            max = n1;
        }
        else
        {
            max = n2;
        }
        for (int i=max; i <= n1*n2; i++)
        {
            if(i%n1==0 && i%n2==0)
            {
                lcm =i;
                 
            }
        }
        printf("lcm is : %d",lcm);
    }
    return 0;
}