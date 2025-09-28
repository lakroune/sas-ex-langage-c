#include<stdio.h>

int trouver_taille_de_chaine(char chaine[])
{
    int taille;
    for (taille = 0; chaine[taille] != '\0'; taille++);
    return taille;
}

int main(){
    char chaine1[10];
    printf("entre un chaine : ");
    scanf("%s",chaine1);
    printf("%d",trouver_taille_de_chaine(chaine1));
}
