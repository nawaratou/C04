#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int tab[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    int max = tab[0], second = -1;
    for(int i = 1; i < n; i++) {
        if(tab[i] > max) {
            second = max;
            max = tab[i];
        } else if(tab[i] > second && tab[i] != max) {
            second = tab[i];
        }
    }

    printf("Le deuxième plus grand nombre est : %d\n", second);
    return 0;
}
