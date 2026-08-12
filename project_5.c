
//Q5: Write a program to convert temperature from Celsius to Fahrenheit.


#include <stdio.h>
int main()
{
    int temp,b ;
    printf("enter temp in celius");
    scanf("%d",&temp);
    b = (temp*1.8) + 32;
    printf(" the temp in farenheit %d",b);
    return 0;


}