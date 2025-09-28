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

void Concatener(char chaine1[],char chaine2[],char chaine3[])
{
    int taille1 = trouver_taille_de_chaine(chaine1);
    int taille2= trouver_taille_de_chaine(chaine2);
    for (int i = 0; i < taille1; i++)
        chaine3[i] = chaine1[i];
    for (int i = 0; i <taille2; i++)
        chaine3[i+taille1] = chaine2[i];
    chaine3[taille2+taille1]='\0';
}

void afficher_la_chaine(char chaine[])
{
    printf("\n%s  \n", chaine);
}

int main()
{
    char chaine1[] = "ismail";
    char chaine2[] = "adam";
    char chaine3[ trouver_taille_de_chaine(chaine1)+trouver_taille_de_chaine(chaine2)];
    afficher_la_chaine(chaine1);
    afficher_la_chaine(chaine2);
    Concatener(chaine1,chaine2,chaine3);
    afficher_la_chaine(chaine3);
}
