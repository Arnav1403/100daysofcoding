#include <stdio.h>

int main() {
    int a, b, tempA, tempB, hcf, lcm;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    // Find HCF using Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;

    // Calculate LCM
    lcm = (tempA * tempB) / hcf;

    printf("LCM of %d and %d is %d\n", tempA, tempB, lcm);

    return 0;
}
