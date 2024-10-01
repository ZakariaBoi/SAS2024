#include <stdio.h>

void reverse(char list[]){
    int size = 5;
    for(int i = 4; i >= 0; i--){
        printf("%c\n", list[i]);
    }
}

int main(){
    char list[5] = {"a", "b", "c", "d", "e"};
    reverse(list);
    return 0;
}