#include <stdio.h>

int main() {
    int arr[100], n, prev;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Previous Greater Elements:\n");
    for (int i = 0; i < n; i++) {
        prev = -1;

        // Check all elements to the left of arr[i]
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }

        // Print result in comma-separated format
        if (i == n - 1)
            printf("%d\n", prev);
        else
            printf("%d, ", prev);
    }

    return 0;
}
