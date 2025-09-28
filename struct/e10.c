// Exercice 10 : Liste Chaînée Simple
// Implémentez une liste chaînée de livres.
// Exemple :
// Liste: [Livre1] -> [Livre2] -> [Livre3] -> NULL

#include <stdio.h>
#include <stdlib.h>

struct livre
{
    char *titre;
    char *auteur;
    int annee;
    struct livre *next;
};

typedef struct livre livre;
void affichLivre(livre book)
{
    printf("titre: %s , auteur: %s , annee: %d\n", book.titre, book.auteur, book.annee);
}

void affichBib(livre *Bib)
{
    for (livre *i = Bib; i != NULL; i= i->next)
        affichLivre(*i);
    printf("---- fin ----\n");
}

livre *cree_livre(char *titre, char *auteur, int annee)
{
    livre *newbook = malloc(sizeof(livre));
    newbook->titre = titre;
    newbook->auteur = auteur;
    newbook->annee = annee;
    newbook->next = NULL;
    return newbook;
}

livre *ajoute_livre(livre *book, char *titre, char *auteur, int annee)
{
    if (book == NULL)
        return cree_livre(titre, auteur, annee);
    livre *bib = book;
    while (book->next != NULL)
        book = book->next;
    book->next = cree_livre(titre, auteur, annee);
    return bib;
}
int main()
{
    livre *bibliotheque = NULL;
    bibliotheque = ajoute_livre(bibliotheque, "Java", "Adam", 1993);
    bibliotheque = ajoute_livre(bibliotheque, "flutter", "lucas", 1993);
    bibliotheque = ajoute_livre(bibliotheque, "Python", "Elie", 1988);
    bibliotheque = ajoute_livre(bibliotheque, "C", "Dennis", 1972);

    affichBib(bibliotheque);
}