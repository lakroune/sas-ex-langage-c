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

int is_palindrome(char chaine[])
{
    int taille = trouver_taille_de_chaine(chaine), j = taille - 1;
    for (int i = 0; i < taille / 2; i++, j--)
        if (chaine[i] != chaine[j])
            return 0;
    return 1;
}

void afficher_la_chaine(char chaine[])
{
    printf("\n%s  \n", chaine);
}

int main()
{
    char chaine[] = "radar";
    afficher_la_chaine(chaine);

    if (is_palindrome(chaine))
        printf("\nis palindrome  \n");
    else
        printf(" is not palindrome\n");
}
