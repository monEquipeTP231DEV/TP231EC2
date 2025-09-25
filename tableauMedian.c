#include <stdio.h>
#include <stdbool.h>
int tableauTrie(int tab[],int taille){
    for(int i = 0; i < taille; i++){
        if (tab[i] < tab[i + 1]){
            return 0; 
        }
    }
    return 1;
}

bool tableauPair(int tab[], int taille){
for(int i = 0; i < taille; i++){
        if (taille%2 == 0){
            return true;
        } else {
            return false;
        } 
    }
    }
int main(){
    int taille;
    int tableau[8] = {2,4,7,9,78,87,89,98};
    int resultat = tableauTrie(tableau,8);
    int result = tableauPair(tableau, 8);
    float median;
    for(int i = 0; i < taille; i++){
        if (resultat == 0 && result == true){
            median = (tableau[taille/2]+tableau[taille/2+1])/2;
        } else {
            median = tableau[(taille + 1)/2];
            }
        printf(" le median de ce tableau est %f ", median);
        
    }
}
    
        