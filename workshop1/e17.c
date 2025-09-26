// Input an integer, find sum of digits.
// Input: 987
// Output: 24


#include<stdio.h>


int main(){

    int nombre,somme=0,reste;
    printf("entre vous nombre ");
    scanf("%d",&nombre);

    while (nombre)
    {
        reste= nombre%10;
        somme+=reste;
        nombre/=10;
    }
    
    printf("la somme de nombres est ::: %d",somme );

    
}