// Exercice 6 : Fonctions avec Structures
// Écrivez une fonction qui affiche une structure Livre.
// Exemple :
// void afficher_livre(Livre l);


    #include<stdio.h>
    #include<stdlib.h>

    typedef struct 
    {
        /* data */
        char *titre;
        char *auteur;
        char *annee;
    }livre;

    void affichLivre(livre book){
        printf("titre :%s ,auteur :%s ,annee :%s", book.titre,book.auteur,book.annee);

    }
    int main(){
        livre book ={"la boite de merville","ahmed safrui","21/4/1984"};
        affichLivre(book);
    }