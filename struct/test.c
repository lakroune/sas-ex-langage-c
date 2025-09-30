#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

typedef struct  {
    char nom[50];
    int age;
    float moyenne;
}Etudiant;

int main() {
    
    Etudiant *e1= malloc(sizeof(Etudiant));
    strcpy(e1[0].nom, "Adil");
    e1->age = 25;
    e1->moyenne = 15.5;

    return 0;
}
