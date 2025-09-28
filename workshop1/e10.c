#include<stdio.h>

int main()
{
   int nombre_1,i,fact=1;
    printf("Entrer nombre1: ");
    scanf("%d",&nombre_1);
    for ( i = 1; i <= nombre_1; i++)
    {
    fact*=i;
    }
    printf("factoriel de nombre est %d: ",fact);


}
