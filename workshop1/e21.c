#include<stdio.h>


int main()
{

   int nombre1,nombre2,temp,n1,n2;
   printf ("entre deux nombre ");
   scanf("%d",&nombre1 );
   scanf("%d",&nombre2);
    n1=nombre1;
    n2=nombre2;

    while (n2 != 0) {
        temp = n2;
        n2 = n1% n2;
        n1 = temp;
    }
    printf("PGCD  %d \n", n1);
    printf("PPCM  %d \n", (nombre1,nombre2)/n1);
}
