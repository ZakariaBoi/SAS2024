#include <stdio.h>

int main() {
    int jour, mois, annee;
    char *moisNoms[100] = {"Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin", "Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Decembre"};

    printf("Entrez une date au format JJ/MM/AAAA : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);
    
    printf("%d-%s-%d\n", jour, moisNoms[mois - 1], annee);
    

    return 0;
}

