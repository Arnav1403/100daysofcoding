#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200];
    int m, n, i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter %d sorted elements for first array:\n", m);
    for (i = 0; i < m; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements for second array:\n", n);
    for (j = 0; j < n; j++)
        scanf("%d", &arr2[j]);

    // Reset indices for merge process
    i = 0; 
    j = 0; 
    k = 0;

    // Merge both arrays while maintaining sorted order
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    // Copy remaining elements (if any)
    while (i < m)
        merged[k++] = arr1[i++];

    while (j < n)
        merged[k++] = arr2[j++];

    // Print merged sorted array
    printf("Merged sorted array:\n");
    for (i = 0; i < k; i++)
        printf("%d ", merged[i]);
    printf("\n");

    return 0;
}
