#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle 0 case
    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    // Convert to binary
    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    // Print binary in reverse
    printf("Binary representation: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
