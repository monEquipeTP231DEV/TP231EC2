#include <stdio.h>

int main() {
    int a, b, produit = 0;

    printf("Entrez deux nombres entiers positifs : ");
    scanf("%d %d", &a, &b);

    // Addition successive
    for (int i = 0; i < b; i++) {
        produit += a;
    }

    printf("Le produit de %d et %d est : %d\n", a, b, produit);

    return 0;
}