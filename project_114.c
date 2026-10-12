// Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size
// k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>

int main()
{
    int n, k;

    printf("enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];

    printf("enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter the value of k: ");
    if (scanf("%d", &k) != 1 || k <= 0 || k > n)
    {
        printf("Invalid window size k.\n");
        return 1;
    }

    printf("the output is: ");

    for (int i = 0; i <= n - k; i++)
    {
        int max_val = arr[i];

        for (int j = 1; j < k; j++)
        {
            if (arr[i + j] > max_val)
            {
                max_val = arr[i + j];
            }
        }

        printf("%d", max_val);
        if (i < n - k)
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
