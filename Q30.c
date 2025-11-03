#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Display result
    printf("Reversed number = %d\n", reversed);

    return 0;
}
