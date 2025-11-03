#include <stdio.h>

int main() {
    int n, sum;

    // Input the value of n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate sum using formula
    sum = n * (n + 1) / 2;

    // Display the result
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
