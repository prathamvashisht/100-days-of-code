

//Q11: Write a program to input an integer and check whether it is even or odd using if–else.


#include <stdio.h>
int main() {
    int num;

    // Input the integer from the user
    printf("enter the number :  ");
    scanf("%d", &num);

    // Check if the number is perfectly divisible by 2
    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }

    return 0;
}
