#include <stdio.h>
#include <math.h>

int main() {
    int i;

    printf("Entrer Un Nombre : ");
    scanf("%i", &i);

    if( i > 0){
        printf("Nomber Est Positif");
    }
    else if(i < 0){
        printf("Nomber Est Negatif");
    }
    else{
        printf("Nombre = 0");
    }
    return 0;
}
