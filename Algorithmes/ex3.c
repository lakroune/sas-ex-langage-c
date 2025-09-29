// Exercice 3: Tri à Bulles
// Énoncé:
// Implémentez le tri à bulles qui compare et échange les éléments adjacents.
// Indices:
// Utilisez deux boucles imbriquées
// Après chaque passe, le plus grand élément "flotte" vers la fin
// Optimisez en vérifiant si des échanges ont été effectués
// Exemple d'exécution:
// Avant: [5, 2, 8, 1, 9]
// Après: [1, 2, 5, 8, 9]

#include <stdio.h>
#include <stdlib.h>

void tri_Bulles(int *tab, int nb)
{
    for (int i = 0; i < nb - 1; i++)
        for (int j = 0; j < nb - 1; j++)
            if (tab[j] > tab[j + 1])
            {
                int tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
}

void affich_tableau(int *tab, int nb)
{
    for (int i = 0; i < nb; i++)
        printf("%d \t", tab[i]);
    printf("\n");
}

int main()
{
    int tab[] = {11, 2, 10, 7, 9};
    affich_tableau(tab, 5);
    tri_Bulles(tab, 5);
    affich_tableau(tab, 5);
}