#include <stdio.h>

int main() {
    int n, arr[100];
    int sum = 0, expectedSum, repeated;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements (from 1 to %d, with one repeated):\n", n, n - 1);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // single iteration summing elements
    }

    expectedSum = (n - 1) * n / 2;  // sum of numbers from 1 to n-1
    repeated = sum - expectedSum;

    printf("Repeated element: %d\n", repeated);

    return 0;
}
