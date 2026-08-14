//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int total_seconds;
    int hours, minutes, seconds;

    // Input the total time in seconds
    printf("enter total_seconds :  ");
    scanf("%d", &total_seconds);

    // Calculate hours (3600 seconds in 1 hour)
    hours = total_seconds / 3600;

    // Calculate remaining minutes (60 seconds in 1 minute)
    minutes = (total_seconds % 3600) / 60;

    // Calculate remaining seconds
    seconds = total_seconds % 60;

    // Output the result in hours:minutes:seconds format
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
