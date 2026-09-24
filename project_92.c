//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main()
{
    char str[100];
    int freq[26] = {0};
    char result = '\0';

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int i = 0;
    while (str[i] != '\0')
    {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z')
        {
            int index = ch - 'a';
            freq[index]++;

            if (freq[index] == 2)
            {
                result = ch;
                break;
            }
        }
        i++;
    }

    if (result != '\0')
    {
        printf("%c\n", result);
    }
    else
    {
        printf("No repeating lowercase character found\n");
    }

    return 0;
}
