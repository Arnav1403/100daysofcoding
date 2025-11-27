#include <stdio.h>

// Define enum for menu choices
typedef enum {
    ADD = 1,       // Assign 1 for easy user input
    SUBTRACT,
    MULTIPLY
} Operation;

int main() {
    Operation choice;
    int a, b;

    // Take input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Display menu
    printf("Choose an operation:\n");
    printf("1. ADD\n2. SUBTRACT\n3. MULTIPLY\n");
    scanf("%d", &choice);

    // Perform operation based on choice
    switch(choice) {
        case ADD:
            printf("Result: %d + %d = %d\n", a, b, a + b);
            break;
        case SUBTRACT:
            printf("Result: %d - %d = %d\n", a, b, a - b);
            break;
        case MULTIPLY:
            printf("Result: %d * %d = %d\n", a, b, a * b);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
