#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows
    for (i = 1; i <= 5; i++) {
        // Inner loop for numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
