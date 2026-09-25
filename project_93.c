//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];
    int freq[256] = {0};
    int isAnagram = 1;

    printf("Enter first string: ");
    scanf("%[^\n]", str1);
    
    getchar(); 

    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    int i = 0;
    while (str1[i] != '\0') {
        freq[(unsigned char)str1[i]]++;
        i++;
    }

    i = 0;
    while (str2[i] != '\0') {
        freq[(unsigned char)str2[i]]--;
        i++;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}
