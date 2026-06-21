#include <stdio.h>

struct map {
    int fre;
};

int main() {
    int n;
    printf("Enter size: ");
    scanf(" %d", &n);
    int a[n];
    struct map Hmap[n*2];

    for(int i=0 ; i<n*2 ; i++) {
        Hmap[i].fre = 0;
    }

    printf("VALUES CANT BE GREATER THEN %d\n", n*2);
    for(int i=0; i<n; i++) {
        scanf(" %d", &a[i]);
        Hmap[a[i]].fre++;
    }

    int q;
    printf("Enter Iteration: ");
    scanf(" %d", &q);
    while(q--) {
        int find;
        printf("Find: ");
        scanf(" %d", &find);
        printf("Frequency: %d\n", Hmap[find].fre);
    }
    return 0;
}