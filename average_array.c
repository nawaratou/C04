// average_array.c
#include <stdio.h>

int main() {
    int n, somme = 0;
    scanf("%d", &n);

    int tab[n]; // Déclaration du tableau
    for(int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
        somme += tab[i]; // On additionne les valeurs
    }

    // Calcul de la moyenne
    float moyenne = (float)somme / n;

    // Affichage du résultat avec 2 décimales
    printf("La moyenne est : %.2f\n", moyenne);
    return 0;
}
