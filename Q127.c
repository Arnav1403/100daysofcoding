#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    // Open input file in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file in write mode
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(inputFile);
        return 1;
    }

    // Read each character, convert to uppercase, and write to output file
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(toupper(ch), outputFile);
    }

    // Close files
    fclose(inputFile);
    fclose(outputFile);

    printf("Conversion complete. Check output.txt\n");

    return 0;
}