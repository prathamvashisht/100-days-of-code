

//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/


#include<stdio.h>
int main()
{
    int n;
    int i;
    int reminder;
    int reverse_number = 0;
   
    printf("enter the the number : ");
    scanf("%d",&n);
     int tm = n;
     if(n<0)
     {
        printf("number is invalid\n");
     }
   while(n>0)
    {
    reminder = n%10;
    reverse_number = reverse_number*10 + reminder;
    n=n/10;
    }
    if( tm == reverse_number )
    {
        printf("the number is plaindrome\n");
    }
    else
    {
         printf("the number is not plaindrome\n");
    }
    return 0;
}