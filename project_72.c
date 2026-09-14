// Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>
int main()
{
    int n, m;
    printf("enter the number of rows and columbs in matrix (ex: 3 4):    ");
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("enter the number of elements in index [%d] [%d] :   ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum = sum + matrix[i][j];
        }
    }
    printf("the sum of the all the elements of matrix is : %d",sum);

    return 0;
}