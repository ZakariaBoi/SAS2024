#include <stdio.h>


int main() {
    int annee;
    printf("Conversion Dannee\n");
    printf("Entrer Un Annee : ");
    scanf("%i", &annee);
    if(! annee == 0){
        int mois = annee * 12;
        int jours = mois * 30;
        int heures = jours * 24;
        int minutes = heures * 60;
        int secondes = minutes * 60;

        printf("Mois : %d\n", mois);
        printf("Jours : %d\n", jours);
        printf("Heures : %d\n", heures);
        printf("Minutes : %d\n", minutes);
        printf("Secondes : %d\n", secondes);
    }else{
        printf("Must Be > 0");
    }

    return 0;
}
