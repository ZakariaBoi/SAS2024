#include <stdio.h>

int main() {
    char c;
    printf("Entrez Un Caractere :\n");
    scanf(" %c", &c); 

    switch(c) {
        case 'a':  
        case 'e':  
        case 'i':
        case 'o':
        case 'u':
        case 'A':  
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Cest une voyelle\n");
            break;
        default:
            printf("Cest pas une voyelle");
    }
    return 0;
}
