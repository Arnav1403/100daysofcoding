#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("info.txt", "r");  // Open file in read mode
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    printf("Contents of info.txt:\n\n");

    // Read and print each line until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
