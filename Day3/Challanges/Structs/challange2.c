#include <stdio.h>
#include <string.h>

int main(){
    struct Personne {
        char name[20];
        char prenom[20];
        int age;
    };

    struct Personne p;
    
    strcpy(p.name, "Boi");
    strcpy(p.prenom, "Zakaria");
    p.age = 18;

    printf("Nom : %s\n", p.name);
    printf("Prenom : %s\n", p.prenom);
    printf("Age : %i\n", p.age);

}