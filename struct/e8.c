// Exercice 8 : Tri de Structures
// Triez un tableau de livres par année de publication.
// Exemple :
// Avant tri: [1990, 1978, 2005]
// Après tri: [1978, 1990, 2005]

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *titre;
    char *auteur;
    int annee;
} livre;

void affichLivre(livre book) {
    printf("titre: %s , auteur: %s , annee: %d\n", book.titre, book.auteur, book.annee);
}

void affichBib(livre *Bib, int nb) {
    for (int i = 0; i < nb; i++)
        affichLivre(Bib[i]);  
    printf("---- fin ----\n");  
}

void changeValue(livre *l1, livre *l2) {
    livre tmp = *l1;   // copie par valeur
    *l1 = *l2;
    *l2 = tmp;
}

void triBib(livre bib[], int nb) {
    for (int i = 0; i < nb - 1; i++) 
        for (int j = 1; j < nb ; j++) 
            if (bib[i].annee > bib[j].annee) 
                changeValue(&bib[i], &bib[j]);
}

int main() {
    int nb = 3;
    livre *bibliotheque = malloc(nb * sizeof(livre));

    bibliotheque[0] = (livre){"Java", "Adam", 1993};
    bibliotheque[1] = (livre){"JavaScript", "Jacobe", 1983};
    bibliotheque[2] = (livre){"Python", "Elie", 1988};

    printf("Avant tri:\n");
    affichBib(bibliotheque, nb);

    triBib(bibliotheque, nb);

    printf("Apres tri:\n");
    affichBib(bibliotheque, nb);

    free(bibliotheque);
    return 0;
}
