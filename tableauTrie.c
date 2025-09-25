#include <stdio.h>

int tableauTrie(int tab[], int taille){
    for(int i =0; i < taille; i++){
        if(tab[i] > tab[i + 1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int tableau[5] = {2,1,4,5,6};
    int resultat = tableauTrie(tableau, 5);
    if (resultat == 1){
        printf("ce tableau est trie ");
    } else {
        printf("ce tableau n'est pas trie.");
    }
}