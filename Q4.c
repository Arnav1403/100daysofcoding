#include <stdio.h>
#define PI 3.1416  // Define constant for π

int main() {
    float radius, area, circumference;

    // Input radius
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display results
    printf("\nArea of Circle = %.2f\n", area);
    printf("Circumference of Circle = %.2f\n", circumference);

    return 0;
}
