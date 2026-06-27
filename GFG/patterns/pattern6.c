// Inverse Full Pyramid Pattern 
// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 
#include <stdio.h>
void main() {
    int n;
    printf("Enter: ");
    scanf(" %d", &n);
    for (int i=1; i<=n; i++) {
        for (int k=1; k<=i-1; k++) {
            printf("  ");
        }
        for (int j=1; j<=n*2-((2*i)-1); j++) {
            printf("* ");
        }
        printf("\n");
    }
}