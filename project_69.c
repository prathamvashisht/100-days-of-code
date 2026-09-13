//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elements in the arrays: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the number on index %d :  ", i);
        scanf("%d", &array[i]);
    }
    int biggest_number = array[0];

    for (int i = 0; i < n; i++)
    {
        if (biggest_number < array[i])
        {

            biggest_number = array[i];
        }
    }
    printf("the biggest number in the array is : %d \n", biggest_number);
    int second_biggest ;
    int is_initialized = 0;
    for (int i = 0; i < n; i++)

    {
        if (array[i]<biggest_number)
        {
            if(is_initialized==0||array[i]>second_biggest)
            {
                second_biggest=array[i];
                is_initialized=1;
            }
        }    
    }
    printf("the second biggest number is : %d", second_biggest);
    return 0;
}