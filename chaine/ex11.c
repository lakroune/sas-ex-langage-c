// Exercice 11 : Extraction de mots
// Contexte : Splitter une phrase en mots individuels et les afficher.
// Exemple d'exécution :
// Phrase : Le C est un langage puissant
// Mots :
// Le
// C
// est
// un
// langage
// puissant

#include <stdio.h>
#include <string.h>

void Splitter(char phrase[])
{
    int fois = 0;
    for (int i = 0; phrase[i]; i++)
    {
        if (phrase[i] == ' ' && fois == 0)
        {
            printf("\n");
            fois++;
        }
        else if (phrase[i] != ' ')
        {
            printf("%c", phrase[i]);
            fois = 0;
        }
    }
}

int main()
{
    char phrase[] = " Le C      est un langage puissant";
    printf(" votre phrase :%s\n\n", phrase);
    Splitter(phrase);
}