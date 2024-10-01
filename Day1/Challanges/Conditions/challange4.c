
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double delta;

    printf("Programme C qui permet de calculer les solutions possibles d’une équation du deuxième degré.\n");
    printf("Entrez a, b et c : ");
    scanf("%i %i %i", &a, &b, &c);

    delta = pow(b, 2) - 4 * a * c;

    int case_delta = (delta > 0) ? 1 : (delta == 0) ? 0 : -1;

    switch (case_delta) {
        case 1: { 
            double x1 = (-b - sqrt(delta)) / (2 * a);
            double x2 = (-b + sqrt(delta)) / (2 * a);
            printf("Δ > 0, alors cette équation admet deux solutions : %f et %f\n", x1, x2);
            break;
        }
        case 0: { 
            double x = (double)-b / (2 * a);
            printf("Δ = 0, alors cette équation admet une solution unique : %f\n", x);
            break;
        }
        case -1: { 
            printf("Δ < 0, alors cette équation n’admet pas de solutions réelles.\n");
            break;
        }
    }

    return 0;
}