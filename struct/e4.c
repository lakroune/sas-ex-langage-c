// Exercice 4 : Structures Imbriquées
// Créez une structure Adresse et imbriquez-la dans Personne.
// Exemple :
// Nom: Alice, Adresse: 123 Rue Principale, Paris


#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    /* data */
    char *city;
    char *contry;
}adress;

typedef struct 
{
    /* data */
    char *name;
    int age;
    adress adr;
}person;


int main(){

adress ad= {"123 Rue Principale paris","france"};
person pr={ "ismail",24,ad};

printf("name %s - age %d - adress %s - country %s",pr.name ,pr.age,pr.adr.city,pr.adr.contry);

}