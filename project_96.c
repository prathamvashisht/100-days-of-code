// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    int word_start = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    while (1)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            int word_end = i - 1;

            while (word_start < word_end)
            {
                char temp = str[word_start];
                str[word_start] = str[word_end];
                str[word_end] = temp;
                word_start++;
                word_end--;
            }

            word_start = i + 1;

            if (str[i] == '\0')
            {
                break;
            }
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}
