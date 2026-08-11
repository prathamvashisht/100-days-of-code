
//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main(){
    float a,b,c;
    printf("enter the radius of the circle");
    scanf("%f",& a);
    b = 3.14*a*a;
    printf("area of the circle is %f",b);
    c= 2*3.14*a;
    printf("circumference of the circle is %f",c);
    return 0;

}