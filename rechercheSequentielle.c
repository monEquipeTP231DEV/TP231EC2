#include <stdio.h>

int recherche_Sequentielle(int tab[], int taille, int elmt_rechercher){
    for(int i = 0; i < taille; i++){
        if(tab[i] == elmt_rechercher){
            return i;
        }
    printf("\nentrer l'element a rechercher: \n");
    scanf("%d", &elmt_rechercher);
    }
    return -1;
}

int main(){
    int nombres[7] = {10,34,12,13,11,2,3};
    int element;
    printf("entrer l'element a rechercher: ");
    scanf("%d", &element);
    //printf("entrer l'element a rechercher : ");
    int resultat = recherche_Sequentielle(nombres, 7, element);
    if (resultat != -1){
        printf("cet element se trouve a l'indice %d:", resultat);
    
    } else {
        printf("cet element n'existe pas.");
    }
    return 0;
}