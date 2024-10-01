#include <stdio.h>

int main() {
    float temperature;
    printf("Enter Water's Temperature : ");
    scanf("%f", &temperature);
    if (temperature < 0) {
        printf("%.2f °C, Then Water Is Solid\n", temperature);
    } else if (temperature >= 0 && temperature < 100) {
        printf("%.2f °C, Then Water Is Liquide\n", temperature);
    } else {
        printf("%.2f °C, Then Water Is Gaz\n", temperature);
    }
    return 0;
}
