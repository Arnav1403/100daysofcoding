#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int numerator = 1, denominator = 1;

    // Input number of terms
    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;

        // Update numerator and denominator
        numerator += 2;
        if (i == 1)
            denominator = 4;
        else
            denominator += 2;
    }

    // Display the result
    printf("Sum of the series = %.4f\n", sum);

    return 0;
}
