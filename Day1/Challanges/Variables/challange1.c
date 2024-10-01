#include <stdio.h>

struct Personne {
    char firstName[20];
    char lastName[20];
    char sex[20];
    int age;
    char email[20];
};
struct Personne me; 
int main(){
    printf("Welcome\n");
    printf("What Is Your First Name ? ");
    scanf("%s",&me.firstName);
    printf("What Is Your Last Name ? ");
    scanf("%s",&me.lastName);
    printf("What Is Your Sex ? ");
    scanf("%s",&me.sex);
    printf("What Is Your Age ? ");
    scanf("%i",&me.age);
    printf("What Is Your Email ? ");
    scanf("%s",&me.email);

    printf("\nYour Info\n");
    printf("First Name : %s\n",me.firstName);
    printf("Last Name : %s\n",me.lastName);
    printf("Sex : %s\n",me.sex);
    printf("Age : %i\n",me.age);
    printf("Email : %s\n",me.email);

    return 0;
}