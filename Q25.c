#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    // Input two numbers and operator
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // space before %c to skip newline

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform operation based on operator
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Division by zero is not allowed!\n");
                return 0;
            }
            printf("Result = %.2f\n", result);
            break;

        case '%':
            if ((int)num2 != 0)
                printf("Result = %d\n", (int)num1 % (int)num2);
            else
                printf("Division by zero not allowed!\n");
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
