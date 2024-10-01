#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char *jours[] = {
        "Lundi",
        "Mardi",
        "Mercredi",
        "Jeudi",
        "Vendredi",
        "Samedi",
        "Dimanche"
    };


    srand(time(NULL));
    int index = rand() % 7;
    printf("Jour de la semaine choisi : %s\n", jours[index]);
    return 0;
}
