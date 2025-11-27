#include <stdio.h>

// Define enum for status codes
typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

int main() {
    Status s;

    // Example: assign a value
    s = SUCCESS;

    // Check the status and print message
    switch(s) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Unknown status.\n");
    }

    return 0;
}
