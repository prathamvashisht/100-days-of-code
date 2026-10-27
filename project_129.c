//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char text[1000];
    
    file = fopen("data.txt", "a");
    if (file == NULL) {
        printf("Error: Could not open file data.txt\n");
        return 1;
    }
    
    printf("Enter a line of text to append: ");
    
    if (fgets(text, sizeof(text), stdin) != NULL) {
        fprintf(file, "%s", text);
    }
    
    fclose(file);
    
    printf("File updated successfully with appended text.\n");
    
    return 0;
}
