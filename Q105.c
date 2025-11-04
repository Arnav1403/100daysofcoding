#include <stdio.h>

int main() {
    int nums[100], n;
    int count = 0, candidate, i, freq = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // ----- Step 1: Find candidate using Boyer-Moore Voting Algorithm -----
    for (i = 0; i < n; i++) {
        if (count == 0)
            candidate = nums[i];
        if (nums[i] == candidate)
            count++;
        else
            count--;
    }

    // ----- Step 2: Verify if candidate is actually a majority element -----
    for (i = 0; i < n; i++) {
        if (nums[i] == candidate)
            freq++;
    }

    if (freq > n / 2)
        printf("Majority element: %d\n", candidate);
    else
        printf("-1\n");

    return 0;
}
