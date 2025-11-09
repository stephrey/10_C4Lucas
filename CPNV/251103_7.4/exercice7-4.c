#include <stdio.h>

int main() {
    int a, b, c, temp;

    // Saisie des trois nombres
    printf("Entrez trois nombres entiers : ");
    scanf("%d %d %d", &a, &b, &c);

    // Tri des trois nombres (méthode simple avec des échanges)
    if (a < b) { temp = a; a = b; b = temp; }
    if (a < c) { temp = a; a = c; c = temp; }
    if (b < c) { temp = b; b = c; c = temp; }

    // Affichage du résultat
    printf("Les nombres du plus grand au plus petit sont : %d, %d, %d\n", a, b, c);

    return 0;
}
