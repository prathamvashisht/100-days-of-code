//Q16: Write a program to input three numbers and find the largest among them using if–else.

int main()
{
    int a, b, c;

    printf("enter number a : ");
    scanf("%d", &a);

    printf("enter number b : ");
    scanf("%d", &b);

    printf("enter number c : ");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        printf("%d is greatest", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d is greatest", b);
    }
    else (c >= a && c >= b);
    {
        printf("%d is greatest", c);
    }
    return 0;
}