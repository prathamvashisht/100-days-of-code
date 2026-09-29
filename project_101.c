// Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
#include <stdio.h>

int main() 
{
    int n;
    printf("enter the number of elements of the array: ");
    scanf("%d", &n);

    int array[n];
    printf("enter the sorted array (ex: 1 2 3 4 5 6): ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }

    int target;
    printf("enter the number to be found: ");
    scanf("%d", &target);

    int first = -1;
    int last = -1;

    // Linear search to find first and last occurrences
    for (int i = 0; i < n; i++) 
    {
        if (array[i] == target) 
        {
            if (first == -1) 
            {
                first = i; // Record the first time we see it
            }
            last = i; // Keep updating to capture the last time we see it
        }
    }

    // Print the exact output format required (e.g., 3,4 or -1,-1)
    printf("%d,%d\n", first, last);

    return 0;
}
