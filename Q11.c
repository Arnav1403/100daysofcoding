#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check even or odd
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);

    return 0;
}
