#include <stdio.h>

int main() {
    int a, b, c;

    // Saisie des trois nombres
    printf("Entrez trois nombres entiers : ");
    scanf("%d %d %d", &a, &b, &c);

    // Comparaisons pour déterminer l'ordre
    if (a >= b && a >= c) {
        if (b >= c)
            printf("Ordre décroissant : %d, %d, %d\n", a, b, c);
        else
            printf("Ordre décroissant : %d, %d, %d\n", a, c, b);
    }
    else if (b >= a && b >= c) {
        if (a >= c)
            printf("Ordre décroissant : %d, %d, %d\n", b, a, c);
        else
            printf("Ordre décroissant : %d, %d, %d\n", b, c, a);
    }
    else { // donc c est le plus grand
        if (a >= b)
            printf("Ordre décroissant : %d, %d, %d\n", c, a, b);
        else
            printf("Ordre décroissant : %d, %d, %d\n", c, b, a);
    }

    return 0;
}
