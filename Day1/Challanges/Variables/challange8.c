#include <stdio.h>
#include <math.h>

int main() {
    float a;
    float b;
    float c;
    printf("Enter The Number A : ");
    scanf("%f", &a);
    printf("Enter The Number B : ");
    scanf("%f", &b);
    printf("Enter The Number C : ");
    scanf("%f", &c);

    float sp = a * b * c;
    sp = pow(sp,1/3);
    printf("Moyenne Geometrique est : %f",sp);
    return 0;
}