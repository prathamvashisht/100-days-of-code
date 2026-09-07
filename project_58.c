//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of element in the arary: ");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the number of element of the array of index %d : ", i);
        scanf("%d", &array[i]);
    }
    int max = array[0];
    int min = array[0];
    for (int i = 0; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
        if (min > array[i])
        {
            min = array[i];
        }
    }
    printf("max = %d , min = %d", max, min);

    return 0;
}