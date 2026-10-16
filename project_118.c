// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int last_index[256];
    int max_len = 0;
    int left = 0;

    printf("Enter a string: ");
    if (scanf("%999s", s) != 1)
    {
        return 1;
    }

    int n = strlen(s);

    for (int i = 0; i < 256; i++)
    {
        last_index[i] = -1;
    }

    for (int right = 0; right < n; right++)
    {
        char current_char = s[right];

        if (last_index[(unsigned char)current_char] >= left)
        {
            left = last_index[(unsigned char)current_char] + 1;
        }

        last_index[(unsigned char)current_char] = right;
        int current_len = right - left + 1;
        if (current_len > max_len)
        {
            max_len = current_len;
        }
    }

    printf("Length of the longest substring without repeating characters: %d\n", max_len);

    return 0;
}
