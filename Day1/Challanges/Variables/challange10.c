#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846
int main() {
    float r;

    printf("Rayon : ");
    scanf("%f", &r);
    float volume = (4/3) * PI * pow(r,3);
    printf("Volume : %f M",volume);
    return 0;
}
