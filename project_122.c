//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the size of the array (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }
    
    int nums[n];
    int actual_sum = 0;
    
    printf("Enter %d distinct integers between 0 and %d: ", n, n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            return 1;
        }
        actual_sum += nums[i];
    }
    
    int expected_sum = (n * (n + 1)) / 2;
    int missing_number = expected_sum - actual_sum;
    
    printf("The missing number is: %d\n", missing_number);
    
    return 0;
}
