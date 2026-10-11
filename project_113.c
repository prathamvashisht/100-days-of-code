// Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

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

    int current_window_sum = 0;
    for (int i = 0; i < k; i++)
    {
        current_window_sum += arr[i];
    }

    int max_sum = current_window_sum;

    for (int i = k; i < n; i++)
    {
        current_window_sum += arr[i] - arr[i - k];
        if (current_window_sum > max_sum)
        {
            max_sum = current_window_sum;
        }
    }

    printf("the output is: %d\n", max_sum);

    return 0;
}
