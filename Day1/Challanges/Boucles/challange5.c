#include <stdio.h>

int main() {
    int base, exposant;
    int resultat = 1; 

    printf("Entrez la base: ");
    scanf("%d", &base);
    printf("Entrez l'exposant: ");
    scanf("%d", &exposant);

    if (exposant < 0) {
        printf("L'exposant doit être un entier positif ou zéro.\n");
        return 1; 
    }
    for (int i = 0; i < exposant; i++) {
        resultat *= base;
    }
    printf("%d^%d = %d\n", base, exposant, resultat);

    return 0;
}
