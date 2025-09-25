#include <stdio.h>

int produit_matrice(int n, int m,int a, int b){
    // enregistrement des dimensions de chaque matrice
    printf("entrer le nombre de ligne de la matrice A:");
    scanf("%d",&n);
    printf("entrer le nombre de colonne de la matrice A:");
    scanf("%d", &m);
    printf("entrer le nombre de ligne de la matrice B:");
    scanf("%d", &a);
    printf("entrer le nombre de colonne de la matrice B:");
    scanf("%d", &b);


    int A[n][m], B[a][b], produit[n][b];
    // Enregistrement des datas de chaque matrice
    printf("\nentrez les donnees de la matrice A:\n");
    for(int i =0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("A[%d][%d] =", i,j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nentrez les donnees de la matrice B:\n");
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            printf("B[%d][%d] =", i,j);
            scanf("%d", &B[i][j]);
        }
    }
    //ressortir la formule de calcul de la somme des matrices,
    //nous savons d'avance que le produit de deux matyrice est accepte 
    //si le nombre de colonne de la matrice A est egale au nombre de ligne dela matrice B"""
    if ( m == a){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                for(int k = 0; k < b; k++){
                    produit[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    } else {
        printf("impossible d'effectuer ce produit de matrice.");
    }
    // afficher le produit de deux matrices
    printf("\nle produit des deux matrices est:\n");
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            printf("%d\t", produit[i][j]);
        }
    }
    return 0;

}    

int main(){
    int k, l, s,t;

    int result = produit_matrice(k,l,s,t);
    

}