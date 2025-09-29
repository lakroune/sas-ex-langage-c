// Exercice 5: Tri par Insertion
// Énoncé:
// Implémentez le tri par insertion qui construit le tableau trié un élément à la fois.
// Indices:
// Prenez un élément à la fois de la partie non triée
// Insérez-le à la bonne position dans la partie triée
// Décaler les éléments si nécessaire
// Exemple d'exécution:
// Avant: [5, 2, 8, 1, 9]
// Après: [1, 2, 5, 8, 9]

#include <stdio.h>
void affich_tableau(int *tab, int nb)
{
    for (int i = 0; i < nb; i++)
        printf("%d \t", tab[i]);
    printf("\n");
}

void tri_insertion(int tab[], int nb)
{
    int select, i, j;
    for (i = 1; i < nb; i++)
    {
        select = tab[i];
        for (j = i - 1; j >= 0 && tab[j] > select; j--)
        {
            tab[j + 1] = tab[j];
        }
        tab[j + 1] = select;
    }
}

int main()
{
    int tab[] = {11, 2, 10, 7, 9};
    affich_tableau(tab, 5);
    tri_insertion(tab, 5);
    affich_tableau(tab, 5);
}