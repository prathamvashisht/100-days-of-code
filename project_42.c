// Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
int main()
{
    int n;
    int total_sum = 0;
    int orignal_num;+
    printf("enter the number : ");
    scanf("%d", &n);
    orignal_num = n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("divisors of number %d  is = %d \n", n, i);
            total_sum += i;
        }
    }
    printf("total sum is %d\n", total_sum);

    if (total_sum == orignal_num)
    {
        printf(" %d is  a perfect number ", n);
    }
    else
    {
        printf("%d is not perfect number", n);
    }
    return 0;
}