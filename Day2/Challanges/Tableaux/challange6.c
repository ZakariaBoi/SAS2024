                #include <stdio.h>

                int main() {
                    int n, facteur;
                    int tableau[n];

                    printf("Entrez le nombre delements : ");
                    scanf("%d", &n);


                    printf("Entrez les elements du tableau : ");
                    for (int i = 0; i < n; i++) {
                        scanf("%d", &tableau[i]);
                    }

                    printf("Entrez le facteur de multiplication : ");
                    scanf("%d", &facteur);

                    for (int i = 0; i < n; i++) {
                        tableau[i] *= facteur;
                    }

                    printf("Tableau resultant :\n");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", tableau[i]);
                    }

                    return 0;
                }
