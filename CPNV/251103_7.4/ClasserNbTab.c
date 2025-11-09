#include <stdio.h>

int main() {
    int n = 3;
    int i, j, temp;
    int tab[3];

    // Saisie des trois nombres
    printf("Entrez trois nombres entiers : ");
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Tri à bulles (du plus grand au plus petit)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (tab[j] < tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    // Affichage du résultat
    printf("Les nombres du plus grand au plus petit sont : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}