#include <stdio.h>
#include <string.h>
void main() {
    char str[] = "aaryan dhotre";
    printf("String: %s\n", str);
    int hash[26] = {0};
    for(int i=0; i<strlen(str); i++) {
        hash[str[i] - 'a']++;
    }

    int a;
    printf("Enter: ");
    scanf(" %d", &a);
    while(a--) {
        char c;
        printf("Enter char: ");
        scanf(" %c", &c);
        printf(" %d\n", hash[c - 'a']);
    }
}