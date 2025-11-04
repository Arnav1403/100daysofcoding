#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;

    // Ask the user for filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try to open file in read mode
    fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
    } else {
        printf("\n--- File Contents ---\n\n");
        // Read and display file contents
        while ((ch = fgetc(fp)) != EOF) {
            putchar(ch);
        }
        fclose(fp);
    }

    return 0;
}