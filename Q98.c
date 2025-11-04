#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    int i, lastSpace = -1;

    printf("Enter your full name: ");
    gets(name);

    for (i = strlen(name) - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastSpace = i;
            break;
        }
    }

    // Print initials
    if (name[0] != ' ')
        printf("%c. ", name[0]);

    for (i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ')
            printf("%c. ", name[i + 1]);
    }

    // Print surname in full
    printf("%s\n", &name[lastSpace + 1]);

    return 0;
}
