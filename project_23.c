/* Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/



#include<stdio.h>
int main()
{
    int a;
    int fine = 0;
    printf("enter the number of days for book not returned to library");
    scanf("%d",&a);

    if(a<=0)
    {
       printf("no fine");
    
    }
    else if(a>30)
    {
        printf("membership cancel");
    }
     else if(a<=5)
     {
       fine = a*2;
     }
     else if (a<=10)
     {
       fine = ((5*2) + ((a-5)*4));
     }
     else 
     {
        fine = ((5*2) + (5*4)+((a-10)*6));
     }

     printf("%d",fine);
     return 0;

    }