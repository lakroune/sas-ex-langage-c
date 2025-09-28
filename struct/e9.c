// Exercice 9 : Fichiers et Structures
// Sauvegardez/chargez un tableau de livres dans un fichier binaire.
// Exemple :
// Sauvegarde de 5 livres dans bibliotheque.dat

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char *titre;
    char *auteur;
    int annee;
} livre;

void affichLivre(livre book)
{
    printf("titre: %s , auteur: %s , annee: %d\n", book.titre, book.auteur, book.annee);
}

void affichBib(livre *Bib, int nb)
{
    for (int i = 0; i < nb; i++)
        affichLivre(Bib[i]);
    printf("---- fin ----\n");
}

void changeValue(livre *l1, livre *l2)
{
    livre tmp = *l1; // copie par valeur
    *l1 = *l2;
    *l2 = tmp;
}

void triBib(livre bib[], int nb)
{
    for (int i = 0; i < nb - 1; i++)
        for (int j = 1; j < nb; j++)
            if (bib[i].annee > bib[j].annee)
                changeValue(&bib[i], &bib[j]);
}
void stock_dans_fichier_text(livre bib[], int nb)
{
    FILE *file;

    file = fopen("bibliotheque.txt", "w");
    if (file == NULL)
    {
        printf("Erreur ouverture fichier !\n");
        return;
    }
    for (int i = 0; i < nb; i++)
        fprintf(file, "titre: %s , auteur: %s , annee: %d\n", bib[i].titre, bib[i].auteur, bib[i].annee);

    fclose(file);
    printf("Données sauvegardees dans bibliotheque.txt \n");
}

void stock_dans_fichier_binaire(livre bib[], int nb)
{
    FILE *file;

    file = fopen("bibliotheque.txt", "wb");
    if (file == NULL)
    {
        printf("Erreur ouverture fichier !\n");
        return;
    }
    fwrite(bib, sizeof(livre), nb, file);
    fclose(file);
    printf("Données sauvegardees dans bibliotheque.txt \n");
}

livre * charger_livre_de_fichier_binaire(char *nomfile,int nb)
{

    FILE *file = fopen(nomfile, "rb");
    if (file == NULL)
    {
        printf("Erreur ouverture fichier !\n");
        return;
    }
    livre *bib = malloc(nb * sizeof(livre));
    fread(bib, sizeof(livre), nb, file);
    fclose(file);
    printf("Données charger dans bibliotheque.txt \n");
    return bib;
}
int main()
{
    int nb = 3;
    FILE *f;
    livre *bibliotheque = malloc(nb * sizeof(livre));
    bibliotheque[0] = (livre){"Java", "Adam", 1993};
    bibliotheque[1] = (livre){"JavaScript", "Jacobe", 1983};
    bibliotheque[2] = (livre){"Python", "Elie", 1988};

    printf("Avant tri:\n");
    affichBib(bibliotheque, nb);
    triBib(bibliotheque, nb);

    // printf("Apres tri:\n");
    // affichBib(bibliotheque, nb);
    // stock_dans_fichier(bibliotheque, nb);
    stock_dans_fichier_binaire(bibliotheque, nb);
    bibliotheque=charger_livre_de_fichier_binaire("bibliotheque.txt",nb);
    affichBib(bibliotheque,nb);
    free(bibliotheque);
    return 0;
}
