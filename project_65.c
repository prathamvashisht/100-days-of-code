// Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include <stdio.h>

int main()
{
    int n;
    printf("enter the number the element in the array: ");
    scanf("%d", &n);
    
    int array[n];
    
    
    printf("--- Please enter elements in SORTED order ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("enter the element in index %d: ", i);
        scanf("%d", &array[i]);
    }
    
    int target;
    printf("enter the number to be searched: ");
    scanf("%d", &target);
    
    
    int low = 0;
    int high = n - 1;
    int found_index = -1; 
    
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        
        if (array[mid] == target)
        {
            found_index = mid;
            break; 
        }
        else if (array[mid] < target)
        {
            low = mid + 1; 
        }
        else
        {
            high = mid - 1; 
        }
    }
    
    
    if (found_index != -1)
    {
        printf("found at index %d\n", found_index);
    }
    else
    {
        printf("-1\n");
    }
    
    return 0;
}
