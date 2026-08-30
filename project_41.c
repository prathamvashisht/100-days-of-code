//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main()
{
    int n;
    int last_digit;
    int first_digit;
    int divisior = 1;
    int orignal_number;
    int middle_part;
    int swapped_number;
    printf("enter the number :  ");
    scanf("%d", &n);
    orignal_number = n;
    last_digit = n % 10;
    int temp = n;
    while (temp >= 10)
    {
        temp = temp / 10;
        divisior = divisior * 10;
      
    }
    first_digit = temp;
     
    middle_part = (orignal_number%divisior)/10;
    swapped_number =(last_digit*divisior)+ (middle_part*10)+first_digit;
    printf("the swapped number is {(if the number is 1010 it will be represented by 11 insted of 0011)} :  %d",swapped_number);
    return 0;





}