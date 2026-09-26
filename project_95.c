//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>

int main()
{
    char str1[100];
    char str2[100];
    char temp[200];
    int len1 = 0, len2 = 0;
    int isRotation = 0;

    printf("Enter first string: ");
    scanf("%[^\n]", str1);

    getchar();

    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    while (str1[len1] != '\0')
        len1++;
    while (str2[len2] != '\0')
        len2++;

    if (len1 == len2 && len1 > 0)
    {
        int i = 0;
        while (str1[i] != '\0')
        {
            temp[i] = str1[i];
            temp[i + len1] = str1[i];
            i++;
        }
        temp[i + len1] = '\0';

        for (i = 0; i <= len1; i++)
        {
            int j = 0;
            while (str2[j] != '\0' && temp[i + j] == str2[j])
            {
                j++;
            }
            if (j == len2)
            {
                isRotation = 1;
                break;
            }
        }
    }

    if (isRotation)
    {
        printf("Rotation\n");
    }
    else
    {
        printf("Not rotation\n");
    }

    return 0;
}
