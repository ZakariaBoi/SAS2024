#include <stdio.h>

int main() {
    int n, facteur;
    int tableau[n];

    printf("Entrez le nombre delements : ");
    scanf("%d", &n);


    printf("Entrez les elements du tableau : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }
    int newtableau[100];
    int d = tableau[0];
    for (int i = 1; i < n; i++) {
        if(tableau[i] < d){
            newtableau[i] = d;
            printf("%i",d);
        }else{
            d = tableau[i];
        }
    }

    return 0;
}
