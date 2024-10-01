#include <stdio.h>

int main() {
    float KM;
    printf("KM To YARD Converter\n");
    printf("KM : ");
    scanf("%f", &KM);

    printf("%i KM To YARD Is\n", KM);
    float YARD = KM * 1093.61; 
    printf("%.2f YARD",YARD);
    return 0;
}
