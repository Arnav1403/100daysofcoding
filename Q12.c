#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check number type using nested if-else
    if (num >= 0) {
        if (num == 0)
            printf("The number is zero.\n");
        else
            printf("The number is positive.\n");
    } else {
        printf("The number is negative.\n");
    }

    return 0;
}
