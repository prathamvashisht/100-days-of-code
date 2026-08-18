//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
//90-100: Grade A 
//80-89: Grade B 
//70-79: Grade C 
//60-69: Grade D 
//below 60: Grade F.




#include <stdio.h>

int main() 
{
    float percentage ;
    printf("enter the the percentage : ");
    scanf("%f",&percentage);

    if(percentage>=90 && percentage<=100)
    {
        printf("grade A");
    }
    else if(percentage>=80 && percentage<90)
    {
        printf("grade B");
    }
    else if(percentage>=70 && percentage<80)
    {
        printf("grade C");
    }
    else if(percentage>=60 && percentage<70)
    {
        printf("grade D");
    }
    else 
    {
        printf(" grade F");
    }
    return 0;
}