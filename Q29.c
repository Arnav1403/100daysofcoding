#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;  // Use long long to handle large results

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate factorial
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }

        // Display result
        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}
