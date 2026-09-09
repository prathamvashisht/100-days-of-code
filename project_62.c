// Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

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
        printf("enter the number element stroed in array at index %d : ", i);
        scanf("%d", &array[i]);
    }
    int strat = 0;
    int end = n - 1;
    int temp;
    while (strat < end)
    {
        temp = array[strat];
        array[strat] = array[end];
        array[end] = temp;
        strat++;
        end--;
    }
    printf("the new array after reversing the array is :-\n");
    for (int i = 0; i < n; i++)
    {

        printf(" the number of element after reversing on index %d : %d \n ", i, array[i]);
    }

    return 0;
}
