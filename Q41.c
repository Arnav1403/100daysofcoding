#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle single-digit numbers
    if (num < 10) {
        printf("After swapping: %d\n", num);
        return 0;
    }

    last = num % 10; // Get last digit

    digits = (int)log10(num); // Count digits - 1
    first = num / pow(10, digits); // Get first digit

    // Remove first and last digits
    int middle = num % (int)pow(10, digits);
    middle = middle / 10;

    // Swap first and last digits
    swapped = last * pow(10, digits) + middle * 10 + first;

    // Display result
    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
