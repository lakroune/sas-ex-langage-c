// Exercice 5 : Typedef
// Utilisez typedef pour simplifier la déclaration de vos structures.
// Exemple :
// typedef struct Livre Livre;

#include<stdio.h>
#include<stdlib.h>

typedef struct  adress
{
    /* data */
    char *city;
    char *contry;
};
typedef struct adress adress;

typedef struct 
{
    /* data */
    char *name;
    int age;
    adress adr;
}person;


int main(){


}