#include <stdio.h>

int main() {
    int arr[100], n, next;
    
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Next Greater Elements:\n");
    for (int i = 0; i < n; i++) {
        next = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }

        if (i == n - 1)
            printf("%d\n", next);  // no comma after last element
        else
            printf("%d, ", next);
    }

    return 0;
}
