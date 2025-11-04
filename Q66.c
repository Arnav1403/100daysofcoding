#include <stdio.h>

int main() {
    int n, i, key, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];
    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &key);

    // Find position to insert
    for(pos = n - 1; pos >= 0 && arr[pos] > key; pos--)
        arr[pos + 1] = arr[pos];

    arr[pos + 1] = key;
    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
