#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};
    int i = 0, found = 0;

    printf("Enter a lowercase string: ");
    gets(str);  // Note: gets() is unsafe; use fgets() in real programs

    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if(freq[str[i] - 'a'] == 2) {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                found = 1;
                break;
            }
        }
        i++;
    }

    if(!found)
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
