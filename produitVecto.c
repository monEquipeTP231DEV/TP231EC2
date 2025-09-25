#include <stdio.h>

int main() {
    float A[3], B[3], C[3];

    // Entrée des vecteurs
    printf("Entrez les composantes du vecteur A (Ax Ay Az) : ");
    scanf("%f %f %f", &A[0], &A[1], &A[2]);

    printf("Entrez les composantes du vecteur B (Bx By Bz) : ");
    scanf("%f %f %f", &B[0], &B[1], &B[2]);

    // Calcul du produit vectoriel
    C[0] = A[1]*B[2] - A[2]*B[1];
    C[1] = A[2]*B[0] - A[0]*B[2];
    C[2] = A[0]*B[1] - A[1]*B[0];

    // Affichage du résultat
    printf("Le produit vectoriel A x B est : (%.2f, %.2f, %.2f)\n", C[0], C[1], C[2]);

    return 0;
}