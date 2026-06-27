// Right Half Pyramid Star Pattern
#include <stdio.h>
void main() {
    int n;
    printf("Enter: ");
    scanf(" %d", &n);
    printf("Right Half Pyramid Star Pattern\n");
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nInverted Right Half Pyramid Pattern\n");
    for (int i=1; i<=n; i++) {
        for (int j=i; j<=n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nInverted Left Half Pyramid Star Pattern\n");
    for (int i=1; i<=n; i++) {
        for (int k=1;k<=i-1; k++) {
            printf("  ");
        }

        for (int j=1; j<=n-i+1; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nLeft Half Pyramid Pattern\n");
    for (int i=1; i<=n; i++) {
        for (int k=1;k<=n-i; k++) {
            printf("  ");
        }
        for (int j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}