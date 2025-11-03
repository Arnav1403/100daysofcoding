#include <stdio.h>
#include <string.h>

int main() {
    char binary[50];
    int i;

    // Input a binary number as string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Compute 1's complement
    for (i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary number!\n");
            return 0;
        }
    }

    // Display 1's complement
    printf("1's Complement: %s\n", binary);

    return 0;
}
