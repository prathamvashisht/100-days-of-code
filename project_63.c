// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter the numbner of element in the array 1 :  ");
    scanf("%d", &n);
    int array1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);
    }
    int m;
    printf("enter the numbner of element in the array 2 :  ");
    scanf("%d", &m);
    int array2[m];
    for (int j = 0; j < m; j++)
    {
        scanf("%d", &array2[j]);
    }
    int mergged[n + m];
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m)
    {
        if (array1[i] <= array2[j])
        {
            mergged[k] = array1[i];
            i++;
        }
        else
        {
            mergged[k] = array2[j];
            j++;
        }
        k++;
    }
    while (i < n)
    {
        mergged[k] = array1[i];
        i++;
        k++;
    }
    while (j < m)
    {
        mergged[k] = array2[j];
        j++;
        k++;
    }

    for (int c = 0; c < n + m; c++)
    {
        printf("%d", mergged[c]);
        if (c < (m + n) - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}