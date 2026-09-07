//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include<stdio.h>
int main()
{
    int n; int sum=0;
    printf("enter the number of element of array: ");
    scanf("%d",&n);
    int array[n];
    for(int i = 0; i<n; i++ )
    {
        printf("enter the no of element of index  %d :  ",i);
        scanf("%d",&array[i]);
    
    }
    for(int i =0; i<n; i++)
    {
        sum+=array[i];

    }
    printf("the total sum of the number of element of array is : %d",sum);
    return 0;
}