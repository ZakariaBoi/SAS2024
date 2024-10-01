#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre delements du tableau : ");
    scanf("%d", &n);

    int tableau[n]; 

    for (int i = 0; i < n; i++) {
        printf("Entrez lelement %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Les elements du tableau sont : \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }

    return 0;
}
