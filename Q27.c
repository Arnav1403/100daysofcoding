#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input number of terms
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate sum of first n odd numbers
    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1);  // Odd number formula
    }

    // Display result
    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
