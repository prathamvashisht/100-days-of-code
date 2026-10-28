//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/
#include <stdio.h>

int main() {
    FILE *file;
    char filename[ 256 ];
    char line[ 256 ];
    
    printf("Enter filename: ");
    if (scanf("%255s", filename) != 1) {
        return 1;
    }
    
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 0;
    }
    
    printf("File opened successfully.\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    
    fclose(file);
    return 0;
}
