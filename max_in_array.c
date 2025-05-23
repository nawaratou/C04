#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int tab[n];
   
    for(int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    int max = tab[0]; // on suppose que le 1er est le max
    for(int i = 1; i < n; i++) {
        if(tab[i] > max) {
            max = tab[i];
        }
    }

    printf("Le maximum est : %d\n", max);
    return 0;
}
