//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char choice[10];
    int a, b, result;

    scanf("%s %d %d", choice, &a, &b);

    enum Operation operation;

    if (strcmp(choice, "ADD") == 0)
        operation = ADD;
    else if (strcmp(choice, "SUBTRACT") == 0)
        operation = SUBTRACT;
    else
        operation = MULTIPLY;

    switch (operation) {
        case ADD:
            result = a + b;
            break;

        case SUBTRACT:
            result = a - b;
            break;

        case MULTIPLY:
            result = a * b;
            break;
    }

    printf("%d\n", result);

    return 0;
}