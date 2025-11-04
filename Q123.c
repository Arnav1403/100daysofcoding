#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100] = "info.txt";
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen(filename, "r");  // Open file in read mode
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (isspace(ch))
            inWord = 0;
        else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);

    printf("File: %s\n", filename);
    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    return 0;
}
