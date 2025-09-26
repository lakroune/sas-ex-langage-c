// Exercice 1 : Inverseur de chaîne
// Contexte : Créez une fonction qui inverse une chaîne de caractères sans utiliser la bibliothèque string.h.
// Exemple d'exécution :
// Entrez une chaîne : Hello
// Résultat : olleH

#include <stdio.h>

int trouver_taille_de_chaine(char chaine[])
{
    int taille;
    for (taille = 0; chaine[taille] != '\0'; taille++);
    return taille;
}

void copie_chaine(char chaine1[],char chaine2[])
{
    int taille1 = trouver_taille_de_chaine(chaine1);
    for (int i = 0; i < taille1; i++)
        chaine2[i] = chaine1[i];
  
}

void afficher_la_chaine(char chaine[])
{
    printf("\n%s  \n", chaine);
}

int main()
{
    char chaine1[] = "ismail";
    char chaine2[trouver_taille_de_chaine(chaine1)] ;
    afficher_la_chaine(chaine1);
    copie_chaine(chaine1,chaine2);
    afficher_la_chaine(chaine2);
  
}
