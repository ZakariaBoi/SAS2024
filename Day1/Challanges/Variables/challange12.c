#include <stdio.h>

int main(){
    int n = 1234;
    int a = n % 10;
    int b = ((n % 100) - a) / 10 ;
    int c = ((n % 1000) - b) / 100 ;
    int d = ((n % 10000) - c) / 1000 ;
    printf("%d%d%d%d", a, b, c , d);     
    return 0;   
}