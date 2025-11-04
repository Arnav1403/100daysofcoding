#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char newText[200];

    // Take filename input
    printf("Enter filename to open in append mode: ");
    scanf("%s", filename);
    getchar();  // clear newline from input buffer

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Take new line of text from user
    printf("Enter text to append: ");
    fgets(newText, sizeof(newText), stdin);

    // Append text to file
    fputs(newText, fp);

    printf("Text appended successfully to %s\n", filename);

    fclose(fp);
    return 0;
}
