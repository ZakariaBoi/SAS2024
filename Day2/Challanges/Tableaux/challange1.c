#include <stdio.h>

int main() {
    int tableau[] = {1, 2, 3, 4, 5};
    int size = sizeof(tableau) / sizeof(tableau[0]);

    for (int i = 0; i < size; i++) {
        printf("%d\n", tableau[i]);
    }

    return 0;
}
