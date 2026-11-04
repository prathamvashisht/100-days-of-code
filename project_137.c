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
    enum Month month;

    scanf("%s", input);

    if (strcmp(input, "JAN") == 0)
        month = JAN;
    else if (strcmp(input, "FEB") == 0)
        month = FEB;
    else if (strcmp(input, "MAR") == 0)
        month = MAR;
    else if (strcmp(input, "APR") == 0)
        month = APR;
    else if (strcmp(input, "MAY") == 0)
        month = MAY;
    else if (strcmp(input, "JUN") == 0)
        month = JUN;
    else if (strcmp(input, "JUL") == 0)
        month = JUL;
    else if (strcmp(input, "AUG") == 0)
        month = AUG;
    else if (strcmp(input, "SEP") == 0)
        month = SEP;
    else if (strcmp(input, "OCT") == 0)
        month = OCT;
    else if (strcmp(input, "NOV") == 0)
        month = NOV;
    else
        month = DEC;

    switch (month) {
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;

        case FEB:
            printf("28 or 29 days\n");
            break;

        default:
            printf("31 days\n");
    }

    return 0;
}