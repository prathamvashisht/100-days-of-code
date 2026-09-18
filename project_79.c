//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int m, n;
    
    printf("Enter number of rows and columns (e.g., 3 3): ");
    if (scanf("%d %d", &m, &n) != 2) {
        printf("Invalid input for matrix dimensions.\n");
        return 1;
    }

    int matrix[100][100];
    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element for row %d, column %d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nYour Entered Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal Traversal Output:\n");

    for (int sum = 0; sum < m + n - 1; sum++) {
        if (sum % 2 == 0) {
            int i = (sum < m) ? sum : m - 1;
            int j = sum - i;
            while (i >= 0 && j < n) {
                printf("%d ", matrix[i][j]);
                i--;
                j++;
            }
        } else {
            int j = (sum < n) ? sum : n - 1;
            int i = sum - j;
            while (j >= 0 && i < m) {
                printf("%d ", matrix[i][j]);
                i++;
                j--;
            }
        }
    }

    printf("\n\nTraversal completed successfully.\n");
    return 0;
}
