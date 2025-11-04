#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read input string including spaces

    // Convert the whole string to lowercase first
    for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    // Convert the first alphabetic character to uppercase
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[i] = toupper(str[i]);
            break;
        }
    }

    printf("Sentence case: %s", str);

    return 0;
}
