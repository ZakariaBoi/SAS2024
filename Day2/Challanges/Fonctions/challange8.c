#include <stdio.h>

int pairOrImpair(int n){
    if(n % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n = 6;
    if(pairOrImpair(n)){
        printf("Pair");
    }else{
        printf("Impair");
    }

    return 0;
}