#include <stdio.h>

int main() {
    int i, j;
    
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n\n"); // Extra newline to match spacing in image
    }
    
    return 0;
}
