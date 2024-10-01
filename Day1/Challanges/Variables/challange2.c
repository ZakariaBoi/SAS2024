#include <stdio.h>

int main() {
    float CELSIUS;
    printf("CELSIUS To KELVIN Converter\n");
    printf("CELSIUS : ");
    scanf("%f", &CELSIUS);

    printf("%f CELSIUS To KELVIN Is\n", CELSIUS);
    float KELVIN = CELSIUS + 273.15; 
    printf("%.2f KELVIN",KELVIN);
    return 0;
}

