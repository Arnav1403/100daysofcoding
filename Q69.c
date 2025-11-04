#include <stdio.h>

int main() {
    int n, i, largest, secondLargest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    largest = secondLargest = -2147483648; // minimum possible int value

    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } 
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == -2147483648)
        printf("There is no second largest element (all elements are equal).\n");
    else
        printf("The second largest element is %d\n", secondLargest);

    return 0;
}
