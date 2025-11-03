#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, digit, sum = 0;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Calculate sum of factorial of digits
    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    // Check if it is a Strong number
    if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is not a Strong Number.\n", num);

    return 0;
}
