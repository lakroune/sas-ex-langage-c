// 4. Mini-Projet : Gestionnaire de Contacts
// Contexte : Créez un programme qui :
// Demande à l'utilisateur de saisir un nom et un numéro de téléphone.
// Stocke ces informations dans une chaîne formatée.
// Affiche tous les contacts ajoutés.
// Bonus : Ajoutez une fonction de recherche par nom.
// Exemple d'exécution :
// --- Gestionnaire de Contacts ---
// 1. Ajouter un contact
// 2. Afficher tous les contacts
// 3. Rechercher un contact
// 4. Quitter
// Choix : 1
// Nom : Alice
// Numéro : 0612345678
// Contact ajouté avec succès!

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define taille_max 100

int nombre_contact = 0;
// 1. Ajouter un contact
void Ajouter_un_contact(char nom[][taille_max], char numTele[][taille_max])
{
    printf("entre un nom: ");
    fgets(nom[nombre_contact], taille_max, stdin);
    nom[nombre_contact][strlen(nom[nombre_contact]) - 1] = '\0';
agin:
    system("cls");
    printf("entre un nemuro de telephone : ");
    fgets(numTele[nombre_contact], taille_max, stdin);
    numTele[nombre_contact][strlen(numTele[nombre_contact]) - 1] = '\0';
    if (strlen(numTele[nombre_contact]) != 10)
        // goto agin;
        system("cls");
    nombre_contact++;
    printf("Contact ajoute avec succes!\n ");
}
// 2. Afficher tous les contacts
void Afficher_tous_les_contacts(char nom[][taille_max], char numTele[][taille_max])
{
    if (nombre_contact == 0)
        printf("aucan contact ");
    else
    {
        printf("\n--- Tous les Contact ---\n");
        for (int i = 0; i < nombre_contact; i++)
            printf(" %s ::::: %s  \n", nom[i], numTele[i]);
    }
}
// 3. Rechercher un contact

void Rechercher_un_contact(char nom[][taille_max], char numTele[][taille_max])
{
    char nom_recherche[20];
    printf("entre nom  :");
    fgets(nom_recherche, 20, stdin);
    nom_recherche[strlen(nom_recherche) - 1] = '\0';
    printf("\n--- contact rechercher ---\n");
    for (int i = 0; i < nombre_contact; i++)
        if (strcmp(nom[i], nom_recherche) == 0)
            printf(" %s ::::: %s  \n", nom[i], numTele[i]);
}

void menu(char nom[][taille_max], char numTele[][taille_max])
{
    int choix;
    do
    {
        printf("\n--- Gestionnaire de Contacts ---\n");
        printf("1. Ajouter un contact\n");
        printf("2. Afficher tous les contacts\n");
        printf("3. Rechercher un contact\n");
        printf("4. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        getchar(); // vider le buffer après scanf

        switch (choix)
        {
        case 1:
            system("cls");
            Ajouter_un_contact(nom, numTele);
            break;
        case 2:
            system("cls");
            Afficher_tous_les_contacts(nom, numTele);
            break;
        case 3:
            system("cls");
            Rechercher_un_contact(nom, numTele);
            break;
        case 4:
            system("cls");
            printf("Au revoir !\n");
            break;
        default:
            system("cls");
            printf(" Choix invalide.\n");
        }
    } while (choix != 4);
}

int main()
{
    char nom[taille_max][taille_max];
    char numTele[taille_max][taille_max];

    menu(nom, numTele);
}