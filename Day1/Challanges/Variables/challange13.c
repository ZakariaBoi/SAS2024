#include <stdio.h>

void printBinary(int n){
    int binary[100];
    int index = 0;

    while (n > 0) {
        binary[index] = n % 2;
        n = n / 2; 
        index++;
    }

    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}
void printHexDecimal(int n){
    int hexDecimal[100];
    int index = 0;

    while (n > 0) { 
        int x = n % 16;
        hexDecimal[index] = x;
        n = n / 16; 
        index++;
    }

    for (int i = index - 1; i >= 0; i--) {
        switch(hexDecimal[i]){
            case 10:
              printf("A");
              break;
            case 11:
              printf("B");
            case 12:
              printf("C");
              break;
            case 13:
              printf("D");
            case 14:
              printf("E");
              break;
            case 15:
              printf("F");
            default:
              printf("%d", hexDecimal[i]);
              }
    }
}
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printBinary(n);
    printHexDecimal(n);
    return 0;
}
