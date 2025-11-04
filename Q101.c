#include <stdio.h>

int main() {
    int nums[100], n, target;
    int i, first = -1, last = -1;

    printf("Enter number of elements in the sorted array: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter the target element: ");
    scanf("%d", &target);

    // Find first occurrence
    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }

    // Find last occurrence
    for (i = n - 1; i >= 0; i--) {
        if (nums[i] == target) {
            last = i;
            break;
        }
    }

    if (first == -1)
        printf("Target not found. Output: -1, -1\n");
    else
        printf("First occurrence at index %d, Last occurrence at index %d\n", first, last);

    return 0;
}
