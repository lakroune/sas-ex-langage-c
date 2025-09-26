// Exercice 12 : Remplacement de caractères
// Contexte : Remplacer toutes les occurrences d'un caractère par un autre dans une chaîne.
// Exemple d'exécution :
// Chaîne originale : Hello World
// Caractère à remplacer : l
// Nouveau caractère : x
// Résultat : Hexxo Worxd
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Remplacement(char phrase[], char s, char d)
{
    for (int i = 0; phrase[i]; i++)
        if (phrase[i] == s)
            phrase[i] = d;
}

int main()
{

    char source, distination;
    char phrase[] = "bonjour tous le monde , ajourd'hui j'ai vu plusieur chose j'avais partage a vous";
    system("cls");

    printf(" votre phrase  :%s \n ", phrase);
    printf(" Veuillez entrer le caractere que vous souhaitez changer. ");
    scanf("%c", &source);
    getchar();
    system("cls");
    printf(" Qui vous met a l endroit du caractere à remplacer . ");
    scanf("%c", &distination);
    system("cls");

    Remplacement(phrase, source, distination);
    printf("\n votre nouveau phrase  :%s \n ", phrase);
}