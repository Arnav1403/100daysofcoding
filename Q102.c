#include <stdio.h>

int main() {
    int arr[100], n, x;
    int low = 0, high, mid, result = -1;

    printf("Enter number of elements in the sorted array: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the value of x: ");
    scanf("%d", &x);

    high = n - 1;

    // Binary search to find ceil of x
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] >= x) {
            result = mid;     // potential ceil found
            high = mid - 1;   // search in left half for smaller possible ceil
        } else {
            low = mid + 1;    // search in right half
        }
    }

    if (result == -1)
        printf("Ceil does not exist. Output: -1\n");
    else
        printf("Ceil of %d is %d at index %d\n", x, arr[result], result);

    return 0;
}
