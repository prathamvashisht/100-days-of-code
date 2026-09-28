//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main() {
    char date[20];
    int day, month, year;
    const char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun", 
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%19s", date);

    sscanf(date, "%d/%d/%d", &day, &month, &year);

    if (month >= 1 && month <= 12) {
        printf("%02d-%s-%d\n", day, months[month], year);
    }

    return 0;
}
