//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
int main()
{
    int n, element, i;
    printf("enter the number of elements in the  array :  ");
    scanf("%d", &n);
    int array[n+1];
    for (int i = 0; i < n; i++)
    {
        printf("enter the element in the index %d :  ", i);
        scanf("%d", &array[i]);
    }
    printf("enter the number to be stored in the array :  ");
    scanf("%d", &element);
    i = n - 1;
    while (i >= 0 && array[i] > element)
    {
        array[i + 1] = array[i];
        i--;
    }
    array[i + 1] = element;
    n++;
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", array[i]);
    }
    
    return 0;
}