#include<stdio.h>

int main()
{
   int nombre,count;
    printf("entre vous nombre ");
    scanf("%d",&nombre);


    if (nombre<0)
        nombre*=-1;

    for ( count = 0 ; nombre >1 ; count++)
        nombre=nombre/10;   
        
    printf("%d  " ,count);
    
}