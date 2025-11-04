#include <stdio.h>

int main() {
    char str1[200], str2[200];
    int count1[256] = {0}, count2[256] = {0};
    int i = 0, flag = 1;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    while(str1[i] != '\0') {
        count1[(unsigned char)str1[i]]++;
        i++;
    }

    i = 0;
    while(str2[i] != '\0') {
        count2[(unsigned char)str2[i]]++;
        i++;
    }

    for(i = 0; i < 256; i++) {
        if(count1[i] != count2[i]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}
