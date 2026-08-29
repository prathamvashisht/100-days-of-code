// Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main()
{
    int n;
    int reminder;
    int product = 1;
    printf("enter the number :  ");
    scanf("%d", &n);
    while (n > 0)
    {
        reminder = n % 10;
        if (reminder % 2 != 0)
        {
            product = product * reminder;
        }
        else 
        {
            printf(" no odd digit ");
            break ;
        }
        n = n / 10;
    
    }
    printf("the product is : %d\n", product);
   
    
    return 0;
}