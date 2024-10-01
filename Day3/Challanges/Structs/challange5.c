#include <stdio.h>
#include <string.h>

struct Livre {
    char titre[20];
    char auteur[20];
    int annee;
};

struct Livre creerLivre(char *titre, char *auteur, int annee) {
    struct Livre nouveauLivre;
    strcpy(nouveauLivre.titre, titre);
    strcpy(nouveauLivre.auteur, auteur);
    nouveauLivre.annee = annee;
    return nouveauLivre;
}

int main() {
    struct Livre livre1 = creerLivre("Titre", "Auteur", 2000);
    
    printf("Titre: %s\n", livre1.titre);
    printf("Auteur: %s\n", livre1.auteur);
    printf("Année: %i\n", livre1.annee);

    return 0;
}
