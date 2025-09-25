#include <stdio.h>

int main(){
    int i, j, lignes, colonnes;
    
    // enregistrer la matrice
    printf("entrer le nombre de ligne de la matrice A: ");
    scanf("%d", &lignes);
    printf("entrer le nombre de colonnes de la matrice A:");
    scanf("%d", &colonnes);

     printf("entrer le nombre de ligne de la matrice B: ");
    scanf("%d", &lignes);
    printf("entrer le nombre de colonnes de la matrice B:");
    scanf("%d", &colonnes);

    int A[lignes][colonnes], B[lignes][colonnes], somme[lignes][colonnes];
    // enregistrer les donnees de la matrice A
    printf("\nentrer les elts de la matrice A:\n");
    for (i = 0; i < lignes; i++){
        for (j = 0; j < colonnes; j++){
            printf("A[%d][%d]=", i,j);
            scanf("%d", &A[i][j]);
        }
    }
    // enregistrer les donnees de la matrice B
    printf("\nentrez les elts de la matrice B :\n");
    for (i = 0; i < lignes; i++){
        for (j = 0; j < colonnes; j++){
            printf("B[%d][%d] =", i,j);
            scanf("%d", &B[i][j]);
        }
    }
    // calcul la somme
    for (i = 0; i < lignes; i++){
        for (j = 0; j < colonnes; j++){
            somme[i][j] = A[i][j] + B[i][j];
         }
    }
    printf("\nla somme des deux matrices est:\n");
    for (i = 0; i < lignes; i++){
        for (j = 0; j < colonnes; j++){
            printf("%d\t", somme[i][j]);
        }
        printf("\n");
    }
    return 0; 
}
