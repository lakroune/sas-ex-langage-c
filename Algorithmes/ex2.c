// Exercice 2: Recherche Binaire
// Énoncé:
// Implémentez la recherche binaire pour un tableau trié. Comparez les performances avec la recherche linéaire.
// Indices:
// Le tableau doit être trié pour que cela fonctionne
// Utilisez une approche "diviser pour régner"
// Maintenez des indices pour le début, le milieu et la fin de la zone de recherche
// Exemple d'exécution:
// Tableau trié: [1, 2, 4, 7, 9]
// Recherche de 4: Position 2
// Recherche de 5: Non trouvé (-1)
#include <stdio.h>
#include <stdlib.h>

int trouver_un_element_debut(int *tab, int nb, int val)
{
    for (int i = 0; i <= nb / 2 && i <= val; i++)
        if (val == tab[i])
            return i;
    return -1;
}
int trouver_un_element_fin(int *tab, int nb, int val)
{
    for (int i = nb - 1; i >= nb / 2 ; i--)
    {
        if (val == tab[i])

            return i;
    }
    return -1;
}

int trouver_un_element(int *tab, int nb, int val)
{
    if (val >= tab[nb / 2])
        return trouver_un_element_fin(tab, nb, val);
    else
        return trouver_un_element_debut(tab, nb, val);
}

void affich_tableau(int *tab, int nb)
{
    for (int i = 0; i < nb; i++)
        printf("%d \t", tab[i]);
    printf("\n");
}

int main()
{
    int tab[] = {1, 2, 4, 7, 9};
    affich_tableau(tab, 5);
    printf("======> %d \t", trouver_un_element(tab, 5, 7));
}