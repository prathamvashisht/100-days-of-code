// Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

/*
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter the umber of elements: \n");
    scanf("%d", &n);
    int array[n];
    printf("enter the sorted array please (ex 1,2,3,4,5,6,7,8,9,10)\n");
    for (int i = 0; i < n; i++)
    {
        printf("enter the  elements of the array in at index %d : ", i);
        scanf("%d", &array[i]);
    }

    int traget;
    int temp = -1;
    int temp2;
    printf("enter the number x : ");
    scanf("%d", &traget);
    for (int i = 0; i < n; i++)
    {
        if (array[i] >= traget)
        {
            temp = i;
            temp2 = array[i];
            break;
        }
    }
    if (temp == -1)
    {
        printf("-1");
    }
    else
    {
        printf("the answer is %d at ibdex  : %d", temp2, temp);
    }
    return 0;
}