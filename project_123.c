// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        return 1;
    }

    int nums[n];
    int seen[100000] = {0};
    int repeated_element = -1;

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &nums[i]) != 1)
        {
            return 1;
        }

        if (repeated_element == -1)
        {
            if (seen[nums[i]] == 1)
            {
                repeated_element = nums[i];
            }
            else
            {
                seen[nums[i]] = 1;
            }
        }
    }

    if (repeated_element != -1)
    {
        printf("Repeated element: %d\n", repeated_element);
    }
    else
    {
        printf("No repeated element found.\n");
    }

    return 0;
}
