// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    int current_len = 0;
    int max_len = 0;
    int max_start = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            current_len++;
        }
        else
        {
            if (current_len > max_len)
            {
                max_len = current_len;
                max_start = i - current_len;
            }
            current_len = 0;
        }
        i++;
    }

    if (current_len > max_len)
    {
        max_len = current_len;
        max_start = i - current_len;
    }

    for (i = 0; i < max_len; i++)
    {
        printf("%c", str[max_start + i]);
    }
    printf("\n");

    return 0;
}
