//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>

int main() {
    char str[100];
    char target;
    int i = 0;
    int count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Enter character to count: ");
    scanf(" %c", &target);

    while (str[i] != '\0') {
        if (str[i] == target) {
            count++;
        }
        i++;
    }

    printf("%d\n", count);

    return 0;
}
