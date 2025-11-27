#include <stdio.h>

// Define enum for user roles
typedef enum {
    ADMIN,
    USER,
    GUEST,
    ROLE_COUNT  // Helper to get total number of roles
} UserRole;

int main() {
    // Array of strings for enum names
    const char* roleNames[] = {"ADMIN", "USER", "GUEST"};

    // Loop through enum values
    for (int i = 0; i < ROLE_COUNT; i++) {
        printf("%s = %d\n", roleNames[i], i);
    }

    return 0;
}
