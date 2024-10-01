#include <stdio.h>

int main(){

    int n;
    printf("Entrer A Nombre : ");
    scanf("%i",&n);

    for(int i = 10; i >= 1; i--){
        printf("%i * %i = %i\n", n, i, n * i);
    }
    return 0;
}