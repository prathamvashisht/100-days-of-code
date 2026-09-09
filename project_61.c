// Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int main()
{
    int n, traget;
    int found_index = -1;
    printf("enter the number of elements: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the number in index %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("enter the element to be found in the array: ");
    scanf("%d", &traget);
    for (int i = 0; i < n; i++)
    {
        if (traget == array[i])
        {
            found_index = i;
        }
    }
    if (found_index != -1)
    {
        printf("the index where the number is in the array is : %d", found_index);
    }
    else
    {

        printf("-1\n");
    }

    return 0;
}