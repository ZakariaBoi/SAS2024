#include <stdio.h>

int main(){
    int number;
    printf("Enter A Number : ");
    scanf("%i", &number);

    int result = 1;
    for(int i = number; i >= 1; i --){
        result *= i;
    }
    printf("Result : %i", result);

    return 0;
}