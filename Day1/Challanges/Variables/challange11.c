#include <stdio.h>

int main() {
    float largeur;
    float longueur;

    printf("Largeur : ");
    scanf("%f", &largeur);
    printf("Longueur : ");
    scanf("%f", &longueur);
    float surface = largeur * longueur;
    printf("Surface : %.2f",surface);
    return 0;
}
