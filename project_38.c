//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/


#include<stdio.h>
int main()
{
    int n;
    int sum =0;
    int reminder;
    printf("enter the number : ");
    scanf("%d",&n);
    while(n>0)
    {
        reminder = n%10;
        sum = sum + reminder;
        n=n/10;
    }
    printf("sum is : %d ",sum);
    return 0;
} 