#include <stdio.h>

int main() {
    int n, i;
    int somme = 0;

    printf("Entrez un nombre entier n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Veuillez entrer un nombre entier positif\n");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        somme += i; 
    }
    printf("La somme des %d premiers nombres naturels est : %d", n, somme);

    return 0;
}