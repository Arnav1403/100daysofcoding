#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note the space before %c to avoid newline issues

    // Check if the character is a vowel or consonant
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            printf("%c is a vowel.\n", ch);
        else
            printf("%c is a consonant.\n", ch);
    } else {
        printf("The entered character is not an alphabet.\n");
    }

    return 0;
}
