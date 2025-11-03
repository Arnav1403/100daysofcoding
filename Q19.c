#include <stdio.h>

int main() {
    float side1, side2, side3;

    // Input the sides of the triangle
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    // Check if the sides form a valid triangle
    if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2)) {
        // Classify the triangle
        if (side1 == side2 && side2 == side3)
            printf("The triangle is Equilateral.\n");
        else if (side1 == side2 || side2 == side3 || side1 == side3)
            printf("The triangle is Isosceles.\n");
        else
            printf("The triangle is Scalene.\n");
    } else {
        printf("The entered sides do not form a valid triangle.\n");
    }

    return 0;
}
