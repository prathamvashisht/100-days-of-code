//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>

int main() {
    char str[100];
    int len = 0;
    int first = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    while (str[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len; i++) {
        for (int j = 1; j <= len - i; j++) {
            if (!first) {
                printf(",");
            }
            first = 0;

            for (int k = 0; k < j; k++) {
                printf("%c", str[i + k]);
            }
        }
    }
    printf("\n");

    return 0;
}
