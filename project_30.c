//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include<stdio.h>
int main()
{
    int n;
    int i;
    int reverse = 0 ;
    int reminder;
    printf("enter the number :  ");
    scanf("%d",&n);
    while(n>0)

    {
        reminder=n%10;
        reverse = reverse*10 + reminder ;
        n= n/10;

    }
    printf(" reverse number is : %d",reverse);
    return 0;
}