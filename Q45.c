#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int numerator = 2, denominator = 3;

    // Input number of terms
    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    // Display result
    printf("Sum of the series = %.4f\n", sum);

    return 0;
}
