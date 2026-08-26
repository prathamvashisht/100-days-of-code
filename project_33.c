//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/


#include<stdio.h>
int main()
{
    int n;
    int reminder ;
    int reslut = 0 ;
    int temp;
    printf("enter the number : ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        reminder = n%10;
        reslut = reslut + (reminder*reminder*reminder);
        n=n/10;
    }
    printf(" armstrong number is : %d \n ",reslut);
    if(reslut == temp)
    {
        printf("entered number is armstrong");
    }
    else 
    {
        printf("number is not armstrong");
    }
    return 0;
}