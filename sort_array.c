#include <stdio.h>

int main() {
    int n, temp;
    scanf("%d", &n);

    int tab[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Tri à bulles
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(tab[j] > tab[j+1]) {
                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }

    printf("Tableau trié : ");
    for(int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    return 0;
}
