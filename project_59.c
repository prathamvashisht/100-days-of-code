// Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter the umber of element in the array : ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the number in  index %d : ", i);
        scanf("%d", &array[i]);
    }

    int counteven = 0;
    int countodd = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            counteven++;
        }
        else
        {
            countodd++;
        }
    }
    printf("the number of even number in array is : %d\n", counteven);
    printf("the number of odd number in the array is : %d\n", countodd);
    return 0;
}
