// Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elements of array : ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the number to be stroed in array at index %d : ", i);
        scanf("%d", &array[i]);
    }
    int countpos = 0;
    int countneg = 0;
    int countzero = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > 0)
        {
            countpos++;
        }
        else if (array[i] < 0)
        {
            countneg++;
        }
        else
        {
            countzero++;
        }
    }
    printf("the number of postivbe number in the array is: %d \n", countpos);
    printf("the number of negative number in the array is: %d \n ",countneg);
    printf("the number of zeroes in the array is: %d \n", countzero);
    return 0;
}