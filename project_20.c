//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include <stdio.h>
int main(){
    int days;
    printf("enter days (1-7)");
    scanf("%d",&days);
    switch (days){
        case 1: printf("its monday");
        break;
        case 2: printf("its tuesday");
        break;
        case 3: printf("its wednesday");
        break;
        case 4: printf("its thursday");
        break;
        case 5: printf("its friday");
        break;
        case 6: printf("its saturday");
        break;
        case 7: printf("its sunday");
        break;
        default : printf("not a valid day");
    }
    return 0;
}