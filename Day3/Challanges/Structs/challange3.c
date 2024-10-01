#include <stdio.h>
#include <string.h>

void lair(int longueur){
    printf("%i",longueur * longueur);
    }

int main(){
    struct Rectangle {
        int longueur;
        int largeur;
    };

    struct Rectangle r;
    r.longueur = 5;
    r.largeur = 5;

    lair(r.longueur);


}