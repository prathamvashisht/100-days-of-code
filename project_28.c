//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>

int main()
{
    int i, n, pro = 1;
    
    printf("enter the input: ");
    scanf("%d", &n);
    

    for(i = 2; i <= n; i += 2)
    {
        pro = pro * i;
    }
    
    printf("product is : %d\n", pro);
    return 0;
}

