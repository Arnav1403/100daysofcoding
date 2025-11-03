#include <stdio.h>

int main() {
    int num, digit, product = 1, hasOdd = 0;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find product of odd digits
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

    // Display result
    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found in the number.\n");

    return 0;
}
