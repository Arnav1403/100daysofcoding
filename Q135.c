#include <stdio.h>

// Define enum with explicit values starting from 10
typedef enum {
    SUCCESS = 10,
    FAILURE,   // 11
    TIMEOUT    // 12
} Status;

int main() {
    Status s;

    for (s = SUCCESS; s <= TIMEOUT; s++) {
        switch(s) {
            case SUCCESS:
                printf("SUCCESS (%d): Operation completed successfully.\n", s);
                break;
            case FAILURE:
                printf("FAILURE (%d): Operation failed.\n", s);
                break;
            case TIMEOUT:
                printf("TIMEOUT (%d): Operation timed out.\n", s);
                break;
            default:
                printf("Unknown status (%d)\n", s);
        }
    }

    return 0;
}
