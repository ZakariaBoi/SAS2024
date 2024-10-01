#include <stdio.h>

int main() {
    float point;
    printf("Enter The Student Point: ");
    scanf("%f", &point);

    if (point <= 10) {
        printf("Recale\n");
    } else if (point > 10 && point <= 12) {
        printf("Passable\n");
    } else if (point > 12 && point <= 14) {
        printf("Assez Bien\n");
    } else if (point > 14 && point <= 16) {
        printf("Bien\n");
    } else {
        printf("Mention\n");
    }

    return 0;
}
