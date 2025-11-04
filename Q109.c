#include <stdio.h>

int main() {
    int arr[100], n, k;
    int sum = 0, maxSum = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 0;
    }

    // Compute sum of first window
    for (int i = 0; i < k; i++)
        sum += arr[i];

    maxSum = sum;

    // Slide the window
    for (int i = k; i < n; i++) {
        sum += arr[i] - arr[i - k]; // add next element, remove first of previous window
        if (sum > maxSum)
            maxSum = sum;
    }

    printf("Maximum sum of subarrays of size %d = %d\n", k, maxSum);

    return 0;
}
