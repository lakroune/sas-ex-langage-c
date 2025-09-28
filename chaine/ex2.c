// Exercice 1 : Inverseur de chaîne
// Contexte : Créez une fonction qui inverse une chaîne de caractères sans utiliser la bibliothèque string.h.
// Exemple d'exécution :
// Entrez une chaîne : Hello
// Résultat : olleH

#include <stdio.h>

int trouver_taille_de_chaine(char chaine[])
{
    int taille;
    for (taille = 0; chaine[taille] != '\0'; taille++)
        ;
    return taille;
}

int compter_les_voyelles(char chaine[])
{
    int  cmpt=0;
    char voyelle[]="aeyuio";
    for (int i = 0; voyelle[i] != '\0'; i++)
        for (int j = 0; chaine[j] != '\0'; j++)
            if (chaine[j]==voyelle[i])
                cmpt++;
    return cmpt;            
}


void afficher_la_chaine(char chaine[])
{
    printf("\n%s  \n", chaine);
}

int main()
{
    char chaine[] = "ismail";
    printf("\n%d  \n", compter_les_voyelles(chaine));
    
   

   
}
