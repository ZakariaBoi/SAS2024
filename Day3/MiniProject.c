#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCONTACTS 100
#define COLOR_RESET "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_BLUE "\033[34m"
#define COLOR_YELLOW "\033[33m"

struct Contact {
    char nom[20];
    char numeroDeTelephone[20];
    char adresseEmail[30];
};

struct Contact contacts[MAXCONTACTS];
int contactCounter = 0;

void afficherTousLesContacts() {
    system("cls");
    if (contactCounter == 0) {
printf(COLOR_RED"+---------------------------------------------+\n");
         printf("| Aucun Contact Trouver. Veuillez En Ajouter Un |\n");
         printf("+---------------------------------------------+\n"COLOR_RESET);
        return;
    }
    printf(COLOR_YELLOW"+--------------------------------------------------------------------------+\n");
    printf("|                            Liste des Contacts                            |\n");
    printf("+-----+----------------------+----------------------+----------------------+\n");
    printf("| ID  |         Nom          | Numero De Telephone  |    Adresse Email     |\n");
    printf("+-----+----------------------+----------------------+----------------------+\n");
    for (int i = 0; i < contactCounter; i++) {
        printf("| %-3d | %-20s | %-20s | %-20s |\n", i, contacts[i].nom, contacts[i].numeroDeTelephone, contacts[i].adresseEmail);
    printf("+-----+----------------------+----------------------+----------------------+\n"COLOR_RESET);
    }
}

void ajouterUnContact() {
    system("cls");
    if (contactCounter >= MAXCONTACTS) {
        printf(COLOR_RED"+------------------------------------+\n");
        printf("| La liste Des Contacts Est Pleine ! |\n");
        printf("+------------------------------------+\n"COLOR_RESET);
        return;
    }
    struct Contact newContact;
    printf(COLOR_GREEN"+--------------------+\n");
    printf("| Ajouter Un Contact |\n");
    printf("+--------------------+\n"COLOR_RESET);
    printf(COLOR_YELLOW"ID : %d\n", contactCounter);
    printf("Nom : ");
    scanf("%s", newContact.nom);
    printf("Numero De Telephone : ");
    scanf("%s", newContact.numeroDeTelephone);
    printf("Adresse Email : "COLOR_RESET);
    scanf("%s", newContact.adresseEmail);

    contacts[contactCounter] = newContact;
    contactCounter++;

    printf(COLOR_GREEN"+----------------------------+\n");
    printf("| Contact Ajoute Avec Succes |\n");
    printf("+----------------------------+\n"COLOR_RESET);
}

void modifierUnContact() {
    system("cls");
    char query[20];
    printf(COLOR_GREEN"+-----------------------+\n");
    printf("| Modifier Un Contact   |\n");
    printf("+-----------------------+\n"COLOR_RESET);
    printf(COLOR_BLUE"Nom du Contact : "COLOR_RESET);
    scanf("%s", query);
    printf(COLOR_GREEN"Recherching...\n"COLOR_RESET);
    for (int i = 0; i < contactCounter; i++) {
        if (strcmp(contacts[i].nom, query) == 0) {
            printf(COLOR_YELLOW"Modifier Nom (actuel : %s) : ", contacts[i].nom);
            scanf("%s", contacts[i].nom);
            printf("Modifier Numero De Telephone (actuel : %s) : ", contacts[i].numeroDeTelephone);
            scanf("%s", contacts[i].numeroDeTelephone);
            printf("Modifier Adresse Email (actuel : %s) : "COLOR_RESET, contacts[i].adresseEmail);
            scanf("%s", contacts[i].adresseEmail);
            printf(COLOR_GREEN"+-----------------+\n");
            printf("| Contact Modifie |\n");
            printf("+-----------------+\n"COLOR_RESET);
            return;
        }
    }
    printf(COLOR_RED"+---------------------+\n");
    printf("| Contact Introuvable |\n");
    printf("+---------------------+\n"COLOR_RESET);
}

void supprimerUnContact() {
    system("cls");
    char query[20];
    printf(COLOR_GREEN"+----------------------+\n");
    printf("| Supprimer Un Contact |\n");
    printf("+----------------------+\n"COLOR_RESET);
    printf(COLOR_BLUE"Nom du Contact : "COLOR_RESET);
    scanf("%s", query);
    printf(COLOR_GREEN"Recherching...\n"COLOR_RESET);
    for (int i = 0; i < contactCounter; i++) {
        if (strcmp(contacts[i].nom, query) == 0) {
            printf(COLOR_GREEN"+----------------+\n");
            printf("| Contact Trouve |\n");
            printf("+----------------+\n"COLOR_RESET);
            for (int j = i; j < contactCounter - 1; j++) {
                contacts[j] = contacts[j + 1];  
            }
            contactCounter--;
            printf(COLOR_GREEN"+---------------------+\n");
            printf("| Suppression Reussie |\n");
            printf("+---------------------+\n"COLOR_RESET);
            return;
        }
    }
    printf(COLOR_RED"+---------------------+\n");
    printf("| Contact Introuvable |\n");
    printf("+---------------------+\n"COLOR_RESET);
}

void rechercherUnContact() {
    system("cls");
    char query[20];
    printf(COLOR_GREEN"+-----------------------+\n");
    printf("| Rechercher Un Contact |\n");
    printf("+-----------------------+\n"COLOR_RESET);
    printf(COLOR_BLUE"Nom du Contact : "COLOR_BLUE);
    scanf("%s", query);
    printf(COLOR_GREEN"Recherching...\n"COLOR_RESET);
    for (int i = 0; i < contactCounter; i++) {
        if (strcmp(contacts[i].nom, query) == 0) {
            printf(COLOR_GREEN"+-----------------+\n");
            printf("| Contact Trouvee |\n");
            printf("+-----------------+\n"COLOR_RESET);
            printf(COLOR_GREEN"+-----+-------------------------+-----------------------+-------------------------+\n");
            printf("| ID  |           Nom           |  Numero De Telephone  |      Adresse Email      |\n");
            printf("+-----+-------------------------+-----------------------+-------------------------+\n");
            printf("| %-3d | %-20s | %-20s | %-20s |\n", i, contacts[i].nom, contacts[i].numeroDeTelephone, contacts[i].adresseEmail);
            printf("+-----+-------------------------+-----------------------+-------------------------+\n"COLOR_RESET);
            return;
        }
    }
    printf(COLOR_RED"+---------------------+\n");
    printf("| Contact introuvable |\n");
    printf("+---------------------+\n"COLOR_RESET);
}

int triLesContacts(){
    system("cls");
    for (int i = 0; i < contactCounter - 1; i++) {
        for (int j = 0; j < contactCounter - 1 - i; j++) {
            if (strcmp(contacts[j].nom, contacts[j + 1].nom) > 0) {
                struct Contact temp = contacts[j];
                contacts[j] = contacts[j + 1];
                contacts[j + 1] = temp;
            }
        }
    }
    printf(COLOR_GREEN"+-----------------------------------+\n");
    printf("| Les Contacts Sont Tri Avec Succes |\n");
    printf("+-----------------------------------+\n"COLOR_RESET);
}
int terminal() {
    system("title Systeme De Gestion De Contacts");
    system("cls");
    int choice;
    while (1) {
        printf(COLOR_GREEN"+------------------------------------------+\n");
        printf("|     Systeme De Gestion De Contacts       |\n");
        printf("+------------------------------------------+\n"COLOR_RESET);
        printf(COLOR_YELLOW"| 1 | Afficher Tous Les Contacts           |\n");
        printf("| 2 | Ajouter Un Contact                   |\n");
        printf("| 3 | Modifier Un Contact                  |\n");
        printf("| 4 | Supprimer Un Contact                 |\n");
        printf("| 5 | Rechercher Un Contact                |\n");
        printf("| 6 | Tri Les Contacts                     |\n");
        printf("| 7 | Quitter                              |\n");
        printf("+------------------------------------------+\n"COLOR_RESET);

        printf(COLOR_BLUE"\n>>> "COLOR_RESET);
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                afficherTousLesContacts();
                break;
            case 2:
                ajouterUnContact();
                break;
            case 3:
                modifierUnContact();
                break;
            case 4:
                supprimerUnContact();
                break;
            case 5:
                rechercherUnContact();
                break;
            case 6:
                triLesContacts();
                break;
            case 7:
                printf(COLOR_GREEN"Fermeture en cours...\n");
                printf("+------------------+\n");
                printf("| A la prochaine ! |\n");
                printf("+------------------+\n"COLOR_RESET);
                return 0;
            default:
                printf(COLOR_RED"+----------------------+\n");
                printf("| Commande non trouvee |\n");
                printf("+----------------------+\n"COLOR_RESET);
        }
    }
}
int main() {
    terminal();
    return 0;

}