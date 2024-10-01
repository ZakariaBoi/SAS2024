#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLIVRES 100
#define MAXELEMENTS 4
#define MAXCHAR 100

char Livres[MAXLIVRES][MAXELEMENTS][MAXCHAR]; 
int livresCount = 0;

int ajouterLivre() {
    system("cls");
    if (livresCount >= MAXLIVRES) {
        printf("\nThe library is full\n");
        return 1;
    }
    printf("1. Titre du livre: ");
    scanf("%s", Livres[livresCount][0]);
    printf("2. Auteur du livre: ");
    scanf("%s", Livres[livresCount][1]);
    printf("3. Prix du livre: ");
    scanf("%s", Livres[livresCount][2]);
    printf("4. Quantite en stock: ");
    scanf("%s", Livres[livresCount][3]);

    livresCount++; 
    printf("\nLivre ajoute avec succes\n");
    return 0;
}

int afficherLivre() {
    checkStock();
    for (int i = 0; i < livresCount; i++) {
        printf("Livres\n");
        printf("|__Livre %d:\n", i + 1);
        printf("|  |__Titre    : %s\n", Livres[i][0]);
        printf("|  |__Auteur   : %s\n", Livres[i][1]);
        printf("|  |__Prix     : %s\n", Livres[i][2]);
        printf("|  |__Quantite : %s\n", Livres[i][3]);
    }
    return 0;
}

int rechercherLivre() {
    checkStock();
    char titre[MAXCHAR];
    printf("Enter A Titre Pour Rechercher : ");
    scanf("%s", titre);

    for (int i = 0; i < livresCount; i++) {
        if (strcmp(Livres[i][0], titre) == 0) {
            printf("\nResults : \n");
            printf("Livre %d:\n", i + 1);
            printf("|__Titre    : %s\n", Livres[i][0]);
            printf("|__Auteur   : %s\n", Livres[i][1]);
            printf("|__Prix     : %s\n", Livres[i][2]);
            printf("|__Quantite : %s\n\n", Livres[i][3]);
            return 0;
        }
    }
    printf("\nBook Title Not Found\n");
    return 1;
}

int metreaJourrLivre() {
    checkStock();
    char titre[MAXCHAR];
    printf("Enter A Titre Pour metre a jour : ");
    scanf("%s", titre);
    
    for (int i = 0; i < livresCount; i++) {
        if (strcmp(Livres[i][0], titre) == 0) {
            printf("Livre %d:\n", i + 1);
            printf("|__Titre    : %s\n", Livres[i][0]);
            printf("|__Auteur   : %s\n", Livres[i][1]);
            printf("|__Prix     : %s\n", Livres[i][2]);
            printf("|__Quantite : %s\n\n", Livres[i][3]);
            printf("Enter New Quantity : ");
            scanf("%s", Livres[i][3]);
            printf("\nQuantity Changed Successfully \n");
            return 0;
        }
    }
    printf("\nBook Title Not Found\n");
    return 1;
}

int supprimerLivre() {
    checkStock();
    char titre[MAXCHAR];
    printf("Enter A Titre Pour supprimer : ");
    scanf("%s", titre);

    for (int i = 0; i < livresCount; i++) {
        if (strcmp(Livres[i][0], titre) == 0) {
            printf("Livre %d:\n", i + 1);
            printf("|__Titre    : %s\n", Livres[i][0]);
            printf("|__Auteur   : %s\n", Livres[i][1]);
            printf("|__Prix     : %s\n", Livres[i][2]);
            printf("|__Quantite : %s\n\n", Livres[i][3]);
            char sure[MAXCHAR];
            printf("Are You Sure (oui/non)? ");
            scanf("%s", sure);
            if (strcmp(sure, "oui") == 0 || strcmp(sure, "Oui") == 0) {
                for (int index = i; index < livresCount - 1; index++) {
                    strcpy(Livres[index][0], Livres[index + 1][0]);
                    strcpy(Livres[index][1], Livres[index + 1][1]);
                    strcpy(Livres[index][2], Livres[index + 1][2]);
                    strcpy(Livres[index][3], Livres[index + 1][3]);
                }
                livresCount--;
                printf("Livre supprime avec succes\n");
            }
            return 0;
        }
    }
    printf("\nBook Title Not Found\n");
    return 1;
}

int checkStock(){
    system("cls");
    if (livresCount == 0) {
        printf("\nAucun livre a supprimer.\n");
        return 1;
    }
}

int terminal() {
    system("title Systeme de Gestion de Stock dans une Librairie");
    system("cls");
    int choice;
    while (1) {
        printf("___________________________________________________\n");
        printf("|                                                 |\n");
        printf("| Systeme de Gestion de Stock dans une Librairie  |\n");
        printf("|_________________________________________________|\n");
        printf("| 1 | Ajouter un livre au stock.                  |\n");
        printf("| 2 | Afficher tous les livres disponibles.       |\n");
        printf("| 3 | Rechercher un livre par son titre.          |\n");
        printf("| 4 | Mettre a jour la quantite d'un livre.       |\n");
        printf("| 5 | Supprimer un livre du stock.                |\n");
        printf("| 6 | Afficher le nombre total de livres en stock.|\n");
        printf("|___|_____________________________________________|\n");
        printf("\n>>> ");
        scanf("%i", &choice);

        switch (choice) {
            case 1:
                ajouterLivre();
                break;
            case 2:
                afficherLivre();
                break;
            case 3:
                rechercherLivre();
                break;
            case 4:
                metreaJourrLivre();
                break;
            case 5:
                supprimerLivre();
                break;
            case 6:
                printf("\nNombre total de livres en stock: %d\n", livresCount);
                break;
            default:
                printf("\nCommande non trouvee\n");
        }
    }
}

int main() {
    terminal();
    return 0;
}
