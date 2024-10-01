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

    printf("le plus grand element dans ce tableau dentiers : \n");
    int g = tableau[0];
    for (int i = 0; i < n; i++) {
        if(tableau[i] > g){
            g = tableau[i];
        }
    }
    printf("%i",g);
    return 0;
}
