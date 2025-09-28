#include<stdio.h>

int main()
{
   int nombre_1,nombre_2,swap;
    scanf("%d",&nombre_1);
    scanf("%d",&nombre_2);
    printf("Before swap %d %d \n",nombre_1,nombre_2);
    swap =nombre_1;
    nombre_1=nombre_2;
    nombre_2=swap;
    printf("After swap %d %d \n",nombre_1,nombre_2);

}
