// Exercice 3 : Pointeurs et Structures
// Utilisez un pointeur pour modifier l'année d'un livre.
// Exemple :
// Avant: Année: 1990
// Après: Année: 2023

  #include<stdio.h>
  #include<string.h>
  #include<stdlib.h>


    typedef struct 
    {
        /* data */
        char titre[20];
        char *auteur;
        char *annee;
    }livre;

    int main(){
        livre *book =malloc(2*sizeof(livre));
        for (size_t i = 0; i < 1; i++)
        {
            book[i].auteur=malloc(20*sizeof(char));
            book[i].annee=malloc(20*sizeof(char));
            fgets(book[i].titre,20,stdin);
            book[i].titre[strlen(book[i].titre)-1]='\0';
            gets(book[i].auteur);
            gets(book[i].annee);           
        }

        puts("entre le nouvelle date");
        char *pnt= malloc(50);
        gets(pnt);
        book[0].annee = pnt;
        
        for (size_t i = 0; i < 1; i++)
        printf("%s %s %s\n", book[i].titre,book[i].auteur,book[i].annee);
        
    }