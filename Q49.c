#include <stdio.h>

int main() {
    int i, j, start;

    // Outer loop for rows
    for (i = 5; i >= 1; i--) {
        start = i; // Starting number for each row

        // Inner loop to print numbers up to 5
        for (j = start; j <= 5; j++) {
            printf("%d", j);
        }

        printf("\n"); // Move to next line
    }

    return 0;
}
