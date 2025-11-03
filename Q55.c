#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    // Input the range
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1; // Assume number is prime

        // Check if i is divisible by any number from 2 to i/2
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
