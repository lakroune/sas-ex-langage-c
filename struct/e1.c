// Exercice 1 : Création et Affichage
// Créez une structure Livre avec titre, auteur et année. Initialisez et affichez un livre.
// Exemple :
// Titre: Algorithmes, Auteur: Cormen, Année: 1990


#include<stdio.h>


typedef struct 
{
    /* data */
    char *titre;
    char *auteur;
    char *annee;
}livre;

int main(){
    livre book ={"la boite de merville","ahmed safrui","21/4/1984"};
    printf("%s %s %s", book.titre,book.auteur,book.annee);
    
}