#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int tab[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    int unique[n], count = 0;

    for(int i = 0; i < n; i++) {
        int exist = 0;
        for(int j = 0; j < count; j++) {
            if(tab[i] == unique[j]) {
                exist = 1;
                break;
            }
        }
        if(!exist) {
            unique[count++] = tab[i];
        }
    }

    printf("Après suppression des doublons : ");
    for(int i = 0; i < count; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");
    return 0;
}
