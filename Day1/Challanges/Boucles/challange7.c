#include <stdio.h>

int main() {
    int n = 20;
/*printf("Entrez un entier a plusieurs chiffres : ");
    scanf("%d", &n);
    */

    while (n > 0) {
        int digit = n % 10; 
        printf("%d", digit); 
        n /= 10;              
    }
    return 0;
}
