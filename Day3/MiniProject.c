#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCONTACTS 100

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
        printf("+---------------------------------------------+\n");
        printf("| Aucun Contact Rouve. Veuillez En Ajouter Un. |\n");
        printf("+---------------------------------------------+\n");
        return;
    }
    printf("+--------------------------------------------------------------------------+\n");
    printf("|                            Liste des Contacts                            |\n");
    printf("+-----+----------------------+----------------------+----------------------+\n");
    printf("| ID  |         Nom          | Numero De Telephone  |    Adresse Email     |\n");
    printf("+-----+----------------------+----------------------+----------------------+\n");
    for (int i = 0; i < contactCounter; i++) {
        printf("| %-3d | %-20s | %-20s | %-20s |\n", i, contacts[i].nom, contacts[i].numeroDeTelephone, contacts[i].adresseEmail);
    printf("+-----+----------------------+----------------------+----------------------+\n");
    }
}

void ajouterUnContact() {
    system("cls");
    if (contactCounter >= MAXCONTACTS) {
        printf("+------------------------------------+\n");
        printf("| La liste Des Contacts Est Pleine ! |\n");
        printf("+------------------------------------+\n");
        return;
    }
    struct Contact newContact;
    printf("+--------------------+\n");
    printf("| Ajouter Un Contact |\n");
    printf("+--------------------+\n");
    printf("ID : %d\n", contactCounter);
    printf("Nom : ");
    scanf("%s", newContact.nom);
    printf("Numero De Telephone : ");
    scanf("%s", newContact.numeroDeTelephone);
    printf("Adresse Email : ");
    scanf("%s", newContact.adresseEmail);

    contacts[contactCounter] = newContact;
    contactCounter++;

    printf("+----------------------------+\n");
    printf("| Contact Ajoute Avec Succes |\n");
    printf("+----------------------------+\n");
}

void modifierUnContact() {
    system("cls");
    char query[20];
    printf("+-----------------------+\n");
    printf("| Modifier Un Contact   |\n");
    printf("+-----------------------+\n");
    printf("Nom du Contact : ");
    scanf("%s", query);
    printf("Recherching...\n");
    for (int i = 0; i < contactCounter; i++) {
        if (strcmp(contacts[i].nom, query) == 0) {
            printf("Modifier Nom (actuel : %s) : ", contacts[i].nom);
            scanf("%s", contacts[i].nom);
            printf("Modifier Numero De Telephone (actuel : %s) : ", contacts[i].numeroDeTelephone);
            scanf("%s", contacts[i].numeroDeTelephone);
            printf("Modifier Adresse Email (actuel : %s) : ", contacts[i].adresseEmail);
            scanf("%s", contacts[i].adresseEmail);
            printf("+-----------------+\n");
            printf("| Contact Modifie |\n");
            printf("+-----------------+\n");
            return;
        }
    }
    printf("+---------------------+\n");
    printf("| Contact Introuvable |\n");
    printf("+---------------------+\n");
}

void supprimerUnContact() {
    system("cls");
    char query[20];
    printf("+----------------------+\n");
    printf("| Supprimer Un Contact |\n");
    printf("+----------------------+\n");
    printf("Nom du Contact : ");
    scanf("%s", query);
    printf("Recherching...\n");
    for (int i = 0; i < contactCounter; i++) {
        if (strcmp(contacts[i].nom, query) == 0) {
            printf("+----------------+\n");
            printf("| Contact Trouve |\n");
            printf("+----------------+\n");
            for (int j = i; j < contactCounter - 1; j++) {
                contacts[j] = contacts[j + 1];  
            }
            contactCounter--;
            printf("+---------------------+\n");
            printf("| Suppression Reussie |\n");
            printf("+---------------------+\n");
            return;
        }
    }
    printf("+---------------------+\n");
    printf("| Contact Introuvable |\n");
    printf("+---------------------+\n");
}

void rechercherUnContact() {
    system("cls");
    char query[20];
    printf("+-----------------------+\n");
    printf("| Rechercher Un Contact |\n");
    printf("+-----------------------+\n");
    printf("Nom du Contact : ");
    scanf("%s", query);
    printf("Recherching...\n");
    for (int i = 0; i < contactCounter; i++) {
        if (strcmp(contacts[i].nom, query) == 0) {
            printf("+-----------------+\n");
            printf("| Contact Trouvee |\n");
            printf("+-----------------+\n");
            printf("+-----+-------------------------+-----------------------+-------------------------+\n");
            printf("| ID  |           Nom           |  Numero De Telephone  |      Adresse Email      |\n");
            printf("+-----+-------------------------+-----------------------+-------------------------+\n");
            printf("| %-3d | %-20s | %-20s | %-20s |\n", i, contacts[i].nom, contacts[i].numeroDeTelephone, contacts[i].adresseEmail);
            printf("+-----+-------------------------+-----------------------+-------------------------+\n");
            return;
        }
    }
    printf("+---------------------+\n");
    printf("| Contact introuvable |\n");
    printf("+---------------------+\n");
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
    printf("+-----------------------------------+\n");
    printf("| Les Contacts Sont Tri Avec Succes |\n");
    printf("+-----------------------------------+\n");
}
int terminal() {
    system("title Systeme De Gestion De Contacts");
    system("cls");
    int choice;
    while (1) {
        printf("+------------------------------------------+\n");
        printf("|     Systeme De Gestion De Contacts       |\n");
        printf("+------------------------------------------+\n");
        printf("| 1 | Afficher Tous Les Contacts           |\n");
        printf("| 2 | Ajouter Un Contact                   |\n");
        printf("| 3 | Modifier Un Contact                  |\n");
        printf("| 4 | Supprimer Un Contact                 |\n");
        printf("| 5 | Rechercher Un Contact                |\n");
        printf("| 6 | Tri Les Contacts                     |\n");
        printf("| 7 | Quitter                              |\n");
        printf("+------------------------------------------+\n");

        printf("\n>>> ");
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
                printf("Fermeture en cours...\n");
                printf("+------------------+\n");
                printf("| A la prochaine ! |\n");
                printf("+------------------+\n");
                return 0;
            default:
                printf("+----------------------+\n");
                printf("| Commande non trouvee |\n");
                printf("+----------------------+\n");
        }
    }
}

int main() {
    terminal();
    return 0;
}
