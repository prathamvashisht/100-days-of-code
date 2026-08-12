//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main()
{
   int a,b,c;
   printf("enter number a");
   scanf("%d",&a);
   printf("enter number b");
   scanf("%d",&b);

   c=a;
   a=b;
   b=c;
   printf("after swapping a=%d ,b=%d",a,b);

    return 0;
}