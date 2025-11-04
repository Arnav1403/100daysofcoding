#include <stdio.h>

int main() {
    int arr[100], n;
    int totalSum = 0, leftSum = 0, pivot = -1;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            pivot = i;
            break;  // leftmost pivot found
        }
        leftSum += arr[i];
    }

    if (pivot == -1)
        printf("No pivot index found. Output: -1\n");
    else
        printf("Pivot index: %d\n", pivot);

    return 0;
}
