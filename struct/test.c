#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

typedef struct  {
    char nom[50];
    int age;
    float moyenne;
}Etudiant;

int main() {
    // Déclaration d'une variable de type struct Etudiant
    Etudiant *e1= malloc(sizeof(Etudiant));
    // Affectation des valeurs
    strcpy(e1[0].nom, "Adil");
    e1->age = 25;
    e1->moyenne = 15.5;

    // Affichage
    printf("Nom: %s\n", e1->nom);
    printf("Age: %d\n", e1->age);
    printf("Moyenne: %.2f\n", e1->moyenne);

    return 0;
}
