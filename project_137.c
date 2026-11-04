//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>
#include <string.h>

enum Month {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    char input[10];

    char *monthNames[] = {
        "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
        "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
    };

    int days[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    scanf("%s", input);

    for (enum Month month = JAN; month <= DEC; month++) {
        if (strcmp(input, monthNames[month]) == 0) {
            if (month == FEB)
                printf("28 or 29 days\n");
            else
                printf("%d days\n", days[month]);

            return 0;
        }
    }

    printf("Invalid month\n");

    return 0;
}