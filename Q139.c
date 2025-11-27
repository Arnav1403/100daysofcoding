#include <stdio.h>

// Define an enum with some values
typedef enum {
    ADMIN = 10,
    USER = 20,
    GUEST = 30
} UserRole;

int main() {
    // Print enum names and their integer values
    printf("ADMIN = %d\n", ADMIN);
    printf("USER = %d\n", USER);
    printf("GUEST = %d\n", GUEST);

    // You can also assign enum variables and print
    UserRole role = USER;
    printf("role (USER) has value = %d\n", role);

    return 0;
}
