/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*\



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        int stars = 5 - 2 * abs(3 - i);

        for (int j = 0; j < stars; j++)
        {
            printf("*\n");
        }

        if (i < 5)
        {
            printf("\n");
        }
    }

    return 0;
}
