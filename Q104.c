#include <stdio.h>

int main() {
    int n, x, totalSum = 0, leftSum = 0, rightSum;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate total sum from 1 to n
    totalSum = n * (n + 1) / 2;

    // Try each x from 1 to n
    for (x = 1; x <= n; x++) {
        leftSum = x * (x + 1) / 2;           // sum from 1 to x
        rightSum = totalSum - (x - 1) * x / 2; // sum from x to n

        if (leftSum == rightSum) {
            printf("Pivot integer: %d\n", x);
            return 0;
        }
    }

    printf("-1\n"); // No pivot found
    return 0;
}
