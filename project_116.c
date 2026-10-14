// Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output.
// If all elements are negative, print the largest (least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/
#include <stdio.h>

int main()
{
    int n;

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

    int current_max = arr[0];
    int global_max = arr[0];

    for (int i = 1; i < n; i++)
    {

        if (arr[i] > current_max + arr[i])
        {
            current_max = arr[i];
        }
        else
        {
            current_max = current_max + arr[i];
        }

        if (current_max > global_max)
        {
            global_max = current_max;
        }
    }

    printf("the output is: %d\n", global_max);

    return 0;
}
