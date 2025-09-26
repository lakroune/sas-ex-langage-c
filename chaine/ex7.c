#include <stdio.h>

int trouver_taille_de_chaine(char chaine[])
{
    int taille;
    for (taille = 0; chaine[taille] != '\0'; taille++);
    return taille;
}

void copie_chaine(char chaine_d[],char chaine_r[],int index)
{
    int taille_r = trouver_taille_de_chaine(chaine_r),i;
    for ( i = 0; i < taille_r; i++)
        chaine_d[i+index] = chaine_r[i];
     chaine_d[i+index]='\0';
  
}
void cat_chaine(char chaine3[],char chaine2[],char chaine1[])
{
    int taille1 = trouver_taille_de_chaine(chaine1);
    copie_chaine(chaine3,chaine1,0);
    copie_chaine(chaine3,chaine2,taille1);  
}

void afficher_la_chaine(char chaine[])
{
    printf("\n%s  \n", chaine);
}

int main()
{
    char chaine1[] = "ismail";
    char chaine2[]="lakroune" ;
    char chaine3[trouver_taille_de_chaine(chaine1)+trouver_taille_de_chaine(chaine2)] ;

    afficher_la_chaine(chaine1);
    afficher_la_chaine(chaine2);
    cat_chaine(chaine3,chaine2,chaine1);
    afficher_la_chaine(chaine3);
  
}
