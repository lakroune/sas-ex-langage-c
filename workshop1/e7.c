#include<stdio.h>

int main()
{
   int nombre_1,i;
    printf("Entrer nombre1: ");
    scanf("%d",&nombre_1);
    for ( i = 0; i <= 10; i++)
    {
    printf(" %d * %d = %d \n",nombre_1,i,nombre_1*i);
    }

}
