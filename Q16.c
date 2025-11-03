#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    // Check which is largest
    if (num1 >= num2 && num1 >= num3)
        printf("%d is the largest number.\n", num1);
    else if (num2 >= num1 && num2 >= num3)
        printf("%d is the largest number.\n", num2);
    else
        printf("%d is the largest number.\n", num3);

    return 0;
}
