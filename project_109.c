// Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
#include <stdio.h>
int main()
{
    int n;

    printf("enter the number of element in the array: ");
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter the numbers in the array at index %d: ", i);
        scanf("%d", &array[i]);
    }
    int most_repeated = -1;

    int max_count = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }
        if (count > max_count)
        {
            max_count = count;
            most_repeated = array[i];
        }
    }
    printf("most repeated num in the array is : %d\n", most_repeated);
    printf("number repeated: %d\n", max_count);
    int majority_element = -1;
    if (max_count > (n / 2))
    {
        majority_element = most_repeated;
        printf("the majority_element is : %d", majority_element);
    }
    else
    {
        printf("-1");
    }

    return 0;
}