#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Veuillez entrer un entier positif : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Veuillez entrer un entier positif.\n");
        return 1; 
    }

    if (n == 0) {
        count = 1; 
    } else {
        while (n != 0) {
            n /= 10; 
            count++; 
        }
    }

    printf("Nombre de chiffres = %d", count);

    return 0; 
}