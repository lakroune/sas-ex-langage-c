// Exercice 7 : Allocation Dynamique
// Allouez dynamiquement un tableau de livres.
// Exemple :
// Livre *bibliotheque = malloc(10 * sizeof(Livre));

#include <stdio.h>
#include<stdlib.h>
typedef struct
{
    /* data */
    char *titre;
    char *auteur;
    char *annee;
} livre;

void affichLivre(livre book)
{
    printf("titre :%s ,auteur :%s ,annee :%s", book.titre, book.auteur, book.annee);
}
int main()
{
    livre *bibliotheque = malloc(10 * sizeof(livre));
    for (int i = 0; i < 1; i++)
    {
        /* code */
        bibliotheque[i].titre= malloc(30);
        bibliotheque[i].auteur= malloc(30);
        bibliotheque[i].annee= malloc(30);

        gets(bibliotheque[i].titre);
        gets(bibliotheque[i].auteur);
        gets(bibliotheque[i].annee);
    }
    
    affichLivre(bibliotheque[0]);
}