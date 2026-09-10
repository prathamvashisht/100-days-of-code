//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    int n;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare the array with the user-defined size
    int arr[n];

    // Take input for each element of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int maxCount = 0;
    int mostFrequentElement = arr[0];

    // Logic to find the most repeated element
    for (int i = 0; i < n; i++) {
        int count = 0;
        
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        if (count > maxCount) {
            maxCount = count;
            mostFrequentElement = arr[i];
        }
    }
    
    // Output the final result
    printf("\nThe number repeated most of the time is: %d\n", mostFrequentElement);
    
    return 0;
}
