// Inverted Right Half Pyramid Pattern
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
#include <stdio.h>
void main() {
    int n;
    printf("Enter: ");
    scanf(" %d", &n);
    for (int i=1; i<=n; i++) {
        for (int j=i; j<=n; j++) {
            printf("* ");
        }
        printf("\n");
    }
}