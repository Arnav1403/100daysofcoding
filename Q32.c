#include <stdio.h>

int main() {
    int num, originalNum, reversed = 0, remainder;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if palindrome
    if (originalNum == reversed)
        printf("%d is a palindrome number.\n", originalNum);
    else
        printf("%d is not a palindrome number.\n", originalNum);

    return 0;
}
