#include<stdio.h>

int main()
{
   int nombre,a=0,b=1,c,i;
    printf("Entrer nombre1: ");
    printf("Fibonacci Series ");
    scanf("%d",&nombre);
    // for ( i = 0; i < nombre; i++)
    // {
    //     printf("%d \t",a);
    //     c=a+b;
    //     a=b;
    //     b=c;
    // }


    while (nombre)
    {
         printf("%d \t",a);
        c=a+b;
        a=b;
        b=c;
        nombre--;
       
    }
    

}






