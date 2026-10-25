//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    int ch;
    int characters = 0;
    int words = 0;
    int lines = 0;
    int in_word = 0;
    
    file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file sample.txt\n");
        return 1;
    }
    
    while ((ch = fgetc(file)) != EOF) {
        characters++;
        
        if (ch == '\n') {
            lines++;
        }
        
        if (isspace(ch)) {
            in_word = 0;
        } else {
            if (in_word == 0) {
                words++;
                in_word = 1;
            }
        }
    }
    
    if (characters > 0 && lines == 0) {
        lines = 1;
    }
    
    fclose(file);
    
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    
    return 0;
}
