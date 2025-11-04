#include <stdio.h>
#include <string.h>

void reverse(char *str, int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    gets(str);  // Note: gets() is unsafe; use fgets() in real programs

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, start, i - 1);
            start = i + 1;
            if (str[i] == '\0')
                break;
        }
        i++;
    }

    printf("Sentence after reversing each word:\n%s\n", str);

    return 0;
}
