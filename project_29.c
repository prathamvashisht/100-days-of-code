//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include<stdio.h>
int main()
{
    int n;
    int i;
    int factorial =1;
    printf("enter the number :  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     factorial= factorial * i;  
    }  
       printf("factorial of the number is: %d ",factorial );
    
    return 0;
}