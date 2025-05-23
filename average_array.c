#include <stdio.h>

int main() {
    int n, somme = 0;
    scanf("%d", &n);

    int tab[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
        somme += tab[i]; // on cumule la somme
    }
    
    float moyenne = (float)somme / n;
    printf("La moyenne est : %.2f\n", moyenne);
    return 0;
}
