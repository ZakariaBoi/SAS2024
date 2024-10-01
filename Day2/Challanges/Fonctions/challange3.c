#include <stdio.h>

int max(int a, int b){
    if(a > b){
        printf("Max : a");
    }
    else if(a < b){
        printf("Max : b");
    }
}
int main(){
    int a = 1;
    int b = 2;
    max(a, b);
    return 0;
}