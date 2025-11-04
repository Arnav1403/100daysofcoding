#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation (different lengths)\n");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);  // concatenate string to itself

    if (strstr(temp, str2))
        printf("One string is a rotation of the other.\n");
    else
        printf("Strings are not rotations of each other.\n");

    return 0;
}
