#include <stdio.h>

int main() {
    int n;
    int tableau[n]; 

    printf("Entrez le nombre delements du tableau : ");
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        printf("Entrez lelement %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("La Somme Est : \n");
    float somme;
    for (int i = 0; i < n; i++) {
        somme += tableau[i];
    }

    return 0;
}
