#include <stdio.h>

void main() {
    int n;
    printf("Size: ");
    scanf(" %d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf(" %d", &a[i]);
    }
     
    int hash[15] = {0};
    for (int i=0; i<n; i++){
        hash[a[i]]++;
    }

    int q;
    printf("find: ");
    scanf(" %d", &q);
    while(q--){
        int m;
        printf("number: ");
        scanf(" %d", &m);
        printf("%d\n", hash[m]);
    }
    
}