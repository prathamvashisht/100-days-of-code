
#include <stdio.h>

int main()
{
    int n, i;
    printf("enter the number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("enter number is not a prime\n");
        return 0;
    }

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }

    if (i == n)
    {
        printf("enter number is prime\n");
    }
    else
    {
        printf("enter number is not a prime\n");
    }

    return 0;
}
