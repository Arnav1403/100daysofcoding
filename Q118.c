#include <stdio.h>

int main() {
    int arr[100], n, sum = 0, expectedSum;

    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    printf("Enter %d elements (from 0 to %d, with one missing):\n", n, n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Expected sum of numbers from 0 to n
    expectedSum = n * (n + 1) / 2;

    // Actual sum of array elements
    for (int i = 0; i < n; i++)
        sum += arr[i];

    printf("Missing number: %d\n", expectedSum - sum);

    return 0;
}
