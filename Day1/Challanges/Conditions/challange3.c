#include <stdio.h>
 
int main()
{
   int a;
   int b;

   printf("Entrez A : ");
   scanf("%i", &a);
   printf("Entrez B : ");
   scanf("%i", &b);
   
   int somme = a + b;

   if (a == b)
      printf("Triple Somme : %i\n",somme * 3);
   else
      printf("Somme : %i",somme);
     
   return 0;
}