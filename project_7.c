//Q7: Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter numbers: ");
    scanf("%d",&a);
    printf("enter numbers: ");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a= %d  b= %d", a,b);
    return 0;
}
