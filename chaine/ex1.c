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

void inverser_chaine(char chaine[])
{
    int taille = trouver_taille_de_chaine(chaine),j=taille-1;
    char temp;
    printf("%d",taille);

    for (int i = 0; i < taille/2; i++,j--){
        temp = chaine[i];
        chaine[i]=chaine[j];
        chaine[j]=temp;
        printf("%c",chaine[j]);
        printf("%c \n",chaine[j]);
    }
}

void afficher_la_chaine(char chaine[])
{
    printf("\n%s  \n",chaine) ;   
}




int main()
{
    char chaine[] = "ismail";
    inverser_chaine(chaine);
    afficher_la_chaine(chaine);

}
