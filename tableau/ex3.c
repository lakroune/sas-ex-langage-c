#include <stdio.h>
void Bonjour()
{
   printf("Bonjour ");
}

// Fonction Calcul : Écrivez une fonction max qui prend deux nombres et retourne le plus grand.

int max(int n1, int n2)
{
   if (n1 > n2)
      return n1;
   else
      return n2;
}

int main()
{
   Bonjour();
   printf("le max de 6 et 9 est %d ",max(6,9));
}