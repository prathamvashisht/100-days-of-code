//Q45: Write a program to print the following pattern:
//*****
//*****
//*****
//*****
//*****

/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/

#include <stdio.h>

int main() 
{
    for(int i = 1; i <= 5; i++) 
    {
        for(int j = 1; j <= 5; j++) 
        {
            printf("*");
        }
        printf("\n"); // Moves to the next line after printing 5 stars
    }
    return 0;
}
