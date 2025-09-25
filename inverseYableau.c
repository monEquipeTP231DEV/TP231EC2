#include <stdio.h>

// Fonction pour inverser un tableau
void inverserTableau(int tab[], int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = tab[i];
        tab[i] = tab[n - 1 - i];
        tab[n - 1 - i] = temp;
    }
}

int main() {
    int tab[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(tab) / sizeof(tab[0]);

    printf("Tableau original : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    inverserTableau(tab, n); // Appel de la fonction

    printf("Tableau inversé : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}