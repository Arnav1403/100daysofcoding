#include <stdio.h>

int main() {
    int num, i;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    // Print all factors
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
