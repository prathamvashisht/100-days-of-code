//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    FILE *source_file, *dest_file;
    char source_path[100];
    char dest_path[100];
    int ch;
    
    printf("Enter the source file name: ");
    if (scanf("%99s", source_path) != 1) {
        return 1;
    }
    
    printf("Enter the destination file name: ");
    if (scanf("%99s", dest_path) != 1) {
        return 1;
    }
    
    source_file = fopen(source_path, "r");
    if (source_file == NULL) {
        printf("Error: Could not open source file %s\n", source_path);
        return 1;
    }
    
    dest_file = fopen(dest_path, "w");
    if (dest_file == NULL) {
        printf("Error: Could not open destination file %s\n", dest_path);
        fclose(source_file);
        return 1;
    }
    
    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, dest_file);
    }
    
    fclose(source_file);
    fclose(dest_file);
    
    printf("File copied successfully to %s\n", dest_path);
    
    return 0;
}
