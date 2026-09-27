// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    int last_space = -1;

    printf("Enter a name: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            last_space = i;
        }
        i++;
    }

    if (last_space == -1)
    {
        printf("%s\n", str);
        return 0;
    }

    if (str[0] != ' ')
    {
        printf("%c.", str[0]);
    }

    for (i = 0; i < last_space; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            printf("%c.", str[i + 1]);
        }
    }

    printf(" %s\n", &str[last_space + 1]);

    return 0;
}
