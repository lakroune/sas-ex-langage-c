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



int trouver_position(int *tab, int n, int val)
{
    int debut = 0, fin = n - 1, m;
    while (debut <= fin)
    {
        m = (debut + fin) / 2;
        printf("%d ", m);  // Affiche les indices testés

        if (val == tab[m])
            return m;
        else if (val < tab[m])
            fin = m - 1;
        else
            debut = m + 1;
    }
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
    int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    affich_tableau(tab, 10);
    printf("======> %d \t", trouver_position(tab, 10, 3));
}