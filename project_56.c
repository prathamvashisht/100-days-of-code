//Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1)
    {
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);

        if (i < n - 1)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
