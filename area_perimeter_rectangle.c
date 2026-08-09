#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter a length of rectangle");
    scanf("%d",&a);
    printf("enter b breath of rectangle");
    scanf("%d",&b);
    c = (a+b)*2;
    printf(" perimeter of rectangle is %d \n",c);
    d = a*b;
    printf(" area of reactangle %d \n",d);
    return 0;
}