//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number  of the elements: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the number at index %d : ", i);
        scanf("%d", &array[i]);
    }
    int k;
    printf("enter the position to rotae the array: ");
    scanf("%d", &k);
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        int new_index = (i + k) % n;
        temp[new_index] = array[i];
    }
    printf("the new updated array is \n :");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t ", temp[i]);
    }
    return 0;
}
