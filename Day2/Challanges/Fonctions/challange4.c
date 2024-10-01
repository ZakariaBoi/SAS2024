#include <stdio.h>

int min(int a, int b){
    if(a > b){
        printf("Min : b");
    }
    else if(a < b){
        printf("Min : a");
    }
}
int main(){
    int a = 1;
    int b = 2;
    min(a, b);
    return 0;
}