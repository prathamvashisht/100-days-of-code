//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
