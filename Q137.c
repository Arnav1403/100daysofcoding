#include <stdio.h>

// Define enum for user roles
typedef enum {
    ADMIN,
    USER,
    GUEST
} UserRole;

int main() {
    UserRole role;

    // Example: assign a role
    role = ADMIN;

    // Display message based on role
    switch(role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have minimal access.\n");
            break;
        default:
            printf("Unknown role.\n");
    }

    return 0;
}
