#include <stdio.h>

int main() {
    float KMPERH;
    printf("KM/H To M/S Converter\n");
    printf("KM/H : ");
    scanf("%f", &KMPERH);

    printf("%f KM/S To M/S Is\n", KMPERH);
    float MPERS = KMPERH * 0.27778; 
    printf("%.2f M/S",MPERS);
    return 0;
}
