#include <stdio.h>

int main() {
    char c;
    printf("Entrez un caractère : ");
    scanf(" %c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        if (c >= 'a' && c <= 'z') {
            printf("Le caractère '%c' est une minuscule.\n", c);
        } else {
            printf("Le caractère '%c' est une majuscule.\n", c);
        }
    } else {
        printf("Le caractère '%c' n'est pas une lettre de l'alphabet.\n", c);
    }

    return 0;
}
