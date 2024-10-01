#include <stdio.h>

int main() {
    int n;

    printf("Entrez un nombre entier n : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Veuillez entrer un nombre entier positif.\n");
        return 1;
    }

    printf("Les %d premiers nombres pairs sont : ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d, ", 2 * i); 
    }
    return 0;
}