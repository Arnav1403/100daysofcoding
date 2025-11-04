#include <stdio.h>

int main() {
    int arr[100], n, k;

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

    printf("First negative integers in each subarray of size %d:\n", k);
    for (int i = 0; i <= n - k; i++) {
        int found = 0;

        // Check each element in the current window
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        if (!found)
            printf("0 ");
    }

    printf("\n");
    return 0;
}
