#include <stdio.h>

int main() {
    int m, n;

    // Entrée des dimensions
    printf("Entrez le nombre de lignes (m) et de colonnes (n) de la matrice : ");
    scanf("%d %d", &m, &n);

    float M[m][n], V[n], R[m];

    // Entrée de la matrice
    printf("Entrez les éléments de la matrice M :\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &M[i][j]);
        }
    }

    // Entrée du vecteur
    printf("Entrez les éléments du vecteur V :\n");
    for (int j = 0; j < n; j++) {
        scanf("%f", &V[j]);
    }

    // Calcul du produit matrice-vecteur
    for (int i = 0; i < m; i++) {
        R[i] = 0;
        for (int j = 0; j < n; j++) {
            R[i] += M[i][j] * V[j];
        }
    }

    // Affi…chage du resultat
    printf("le resultat du produit matrice vecteur est :\n");
    for (int i = 0; i < m; i++){
        printf("%.2f", R[i]);
    }
    printf("\n");

    return 0;
}
    