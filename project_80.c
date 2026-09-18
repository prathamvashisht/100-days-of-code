//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;

    printf("Enter rows and columns for first matrix: ");
    if (scanf("%d %d", &r1, &c1) != 2)
        return 1;

    int mat1[100][100];
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter element for row %d, column %d: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter rows and columns for second matrix: ");
    if (scanf("%d %d", &r2, &c2) != 2)
        return 1;

    if (c1 != r2)
    {
        printf("\nError: Multiplication not possible! Columns of first matrix must equal rows of second matrix.\n");
        return 1;
    }

    int mat2[100][100];
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Enter element for row %d, column %d: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    int result[100][100];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("\nFirst Matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond Matrix:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\nProduct Matrix (Multiplication Output):\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    printf("\nMultiplication completed successfully.\n");
    return 0;
}
