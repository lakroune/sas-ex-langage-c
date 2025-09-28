// Exercice 2 : Tableau de Structures
// Créez un tableau de 5 livres et affichez-les.
// Exemple :
// Livre 1: Titre: C, Auteur: Kernighan, Année: 1978
// Livre 2: Titre: Java, Auteur: Gosling, Année: 1995


  #include<stdio.h>
  #include<string.h>


    typedef struct 
    {
        /* data */
        char titre[21];
        char auteur[21];
        char annee[21];
    }livre;

    int main(){
        livre book [5];
        for (size_t i = 0; i < 2; i++)
        {
            gets(book[i].titre);
            gets(book[i].auteur);
            gets(book[i].annee);           
        }
        
        for (size_t i = 0; i < 2; i++)
        printf("%s %s %s", book[i].titre,book[i].auteur,book[i].annee);
        
    }