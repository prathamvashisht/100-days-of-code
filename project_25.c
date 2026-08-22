// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>

int main()
{
    int num1, num2;
    char op;

    printf("Enter two numbers and an operator (e.g., 4 2 +): ");
    scanf("%d %d %c", &num1, &num2, &op);

    switch (op)
    {
    case '+':
        printf("Result: %d\n", num1 + num2);
        break;
    case '-':
        printf("Result: %d\n", num1 - num2);
        break;
    case '*':
        printf("Result: %d\n", num1 * num2);
        break;
    case '/':
        if (num2 != 0)
        {
            printf("Result: %d\n", num1 / num2);
        }
        else
        {
            printf("Error: Division by zero\n");
        }
        break;
    case '%':
        if (num2 != 0)
        {
            printf("Result: %d\n", num1 % num2);
        }
        else
        {
            printf("Error: Modulus by zero\n");
        }
        break;
    default:
        printf("Error: Invalid operator\n");
        break;
    }

    return 0;
}
