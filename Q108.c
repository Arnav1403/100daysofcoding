#include <stdio.h>

int main() {
    int nums[100], n;
    int prefix[100], suffix[100], answer[100];

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Build prefix product array
    prefix[0] = 1;
    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] * nums[i - 1];

    // Build suffix product array
    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
        suffix[i] = suffix[i + 1] * nums[i + 1];

    // Build the result array
    for (int i = 0; i < n; i++)
        answer[i] = prefix[i] * suffix[i];

    // Print the result
    printf("Product of array except self:\n");
    for (int i = 0; i < n; i++) {
        if (i == n - 1)
            printf("%d\n", answer[i]);
        else
            printf("%d, ", answer[i]);
    }

    return 0;
}
