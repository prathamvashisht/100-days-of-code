//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *source_file, *dest_file;
    int ch;
    
    source_file = fopen("input.txt", "r");
    if (source_file == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }
    
    dest_file = fopen("output.txt", "w");
    if (dest_file == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(source_file);
        return 1;
    }
    
    while ((ch = fgetc(source_file)) != EOF) {
        fputc(toupper(ch), dest_file);
    }
    
    fclose(source_file);
    fclose(dest_file);
    
    printf("Text converted to uppercase and saved successfully to output.txt\n");
    
    return 0;
}
