#include <stdio.h>
 
int main()
{
   int i;

   printf("Entrez un entier: ");
   scanf("%i", &i);
   
   if (i % 2 == 0)
      printf("Paire\n");
   else
      printf("Impaire");
     
   return 0;
}