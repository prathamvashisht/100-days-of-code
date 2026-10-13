// Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving
// from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

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
        int first_negative = 0;

        for (int j = 0; j < k; j++)
        {
            if (arr[i + j] < 0)
            {
                first_negative = arr[i + j];
                break;
            }
        }

        printf("%d", first_negative);
        if (i < n - k)
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
