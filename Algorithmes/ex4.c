// Exercice 4: Tri par Sélection
// Énoncé:
// Implémentez le tri par sélection qui trouve le plus petit élément et le place à la bonne position.
// Indices:
// Trouvez l'indice du plus petit élément dans la partie non triée
// Échangez-le avec le premier élément de la partie non triée
// Répétez pour le reste du tableau
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

void tri_selection(int tab[], int nb)
{
    int select;
    for (int i = 0; i < nb-1; i++)
    {
        select = i;
        for (int j = i + 1; j < nb; j++)
            if (tab[j] < tab[select])
                select = j;
        int tmp = tab[i];
        tab[i] = tab[select];
        tab[select] = tmp;
     affich_tableau(tab, nb);
    }
}
 


int main()
{
    int tab[] = {11, 2, 10, 7, 9};
    affich_tableau(tab, 5);
    tri_selection(tab, 5);
    affich_tableau(tab, 5);
}