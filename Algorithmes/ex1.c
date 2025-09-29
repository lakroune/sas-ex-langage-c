// Exercice 1: Recherche Linéaire
// Énoncé:
// Implémentez une fonction de recherche linéaire qui parcourt un tableau pour trouver un élément spécifique.
// Indices:
// Utilisez une simple boucle pour parcourir le tableau
// Comparez chaque élément avec la valeur cible
// Renvoyez l'indice si trouvé, -1 sinon
// Exemple d'exécution:
// Tableau: [4, 2, 7, 1, 9]
// Recherche de 7: Position 2
// Recherche de 5: Non trouvé (-1)

#include <stdio.h>
#include <stdlib.h>

int trouver_un_element(int *tab, int nb, int val)
{
    for (int i = 0; i < nb; i++)
        if (val == tab[i])
            return i;
    return -1;
}
void affich_tableau(int *tab, int nb)
{
    for (int i = 0; i < nb; i++)
        printf("%d \t", tab[i]);
    printf("\n");
}

int main()
{
    int tab[] = {4, 2, 7, 1, 9};
    affich_tableau(tab, 5);
    printf("======> %d \t", trouver_un_element(tab, 5, 5));
}