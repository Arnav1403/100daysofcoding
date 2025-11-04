#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int lastIndex[256];  // stores last index of each character
    int n, maxLen = 0, start = 0;

    printf("Enter a string: ");
    gets(s);  // for simplicity (not recommended in production)
    n = strlen(s);

    // Initialize all characters' last index as -1
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    for (int end = 0; end < n; end++) {
        // If character repeats, move start
        if (lastIndex[(unsigned char)s[end]] >= start)
            start = lastIndex[(unsigned char)s[end]] + 1;

        // Update last seen index
        lastIndex[(unsigned char)s[end]] = end;

        // Update max length
        if (end - start + 1 > maxLen)
            maxLen = end - start + 1;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
