#include <stdio.h>
#include <stdlib.h>

void saisir_un_tableau(int nombre_des_notes, float notes[])
{
    int i;
    for (i = 0; i < nombre_des_notes; i++)
    {
        do
        {
          system("cls");
            printf("entrer la note %d .", i + 1);
            scanf("%f", &notes[i]);
        } while (notes[i] > 20 || notes[i] < 0);
    }
}

// fficher toutes les notes.

void affiche_les_notes(int taille_de_table, float table_des_notes[])
{
    int i;
    for (i = 0; i < taille_de_table; i++)
        printf("note num %d = %.2f \n", i + 1, table_des_notes[i]);
}

// Calculer et afficher la moyenne.
float calcule_le_moyenne(int taille_de_table, float table_des_notes[])
{
    int i;
    float sum = 0;
    for (i = 0; i < taille_de_table; i++)
        sum += table_des_notes[i];
    return sum / taille_de_table;
}

// Trouver et afficher la note maximale

void Trouver_et_afiche_la_note_maximale(int taille_de_table, float table_des_notes[])
{
    int i;
    float max = table_des_notes[0];
    for (i = 1; i < taille_de_table; i++)
        if (max < table_des_notes[i])
            max = table_des_notes[i];
    printf(" la note maximale n%.2f .\n", max);
}

//  fonction pour trouver la note minimale.
float trouver_la_note_minimale(float taille_de_table, float table_des_notes[])
{
    int i;
    float min = table_des_notes[0];
    for (i = 1; i < taille_de_table; i++)
        if (min > table_des_notes[i])
            min = table_des_notes[i];
    return min;
}

void menu(float notes[], int nombre_des_notes)
{
    int choix;

    do
    {

        // Affichage du menu
        printf("\n===== MENU =====\n");
        printf("1. Afficher les notes\n");
        printf("2. Afficher la note maximale\n");
        printf("3. Afficher la note minimale\n");
        printf("4. Calculer la moyenne\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");

        // Lecture du choix
        scanf("%d", &choix);

        // Traitement du choix
        switch (choix)
        {
        case 1:
            system("cls");
            printf("-> Affichage des notes \n");
            affiche_les_notes(nombre_des_notes, notes);
            break;
        case 2:
            system("cls");
            Trouver_et_afiche_la_note_maximale(nombre_des_notes, notes);
            break;
        case 3:
            system("cls");
            printf("-> Note minimale est %.2f .", trouver_la_note_minimale(nombre_des_notes, notes));
            break;
        case 4:
            system("cls");
            printf("-> Moyenne des notesest  %.2f ", calcule_le_moyenne(nombre_des_notes, notes));
            break;
        case 0:
            system("cls");
            printf("->  Quitter !\n");
            break;
        default:
            system("cls");
            printf("Choix invalide. \n");
        }

    } while (choix != 0);
}

int main()
{
    int nombre_des_notes, i;
    printf("svp donne la nombre des notes .");
    scanf("%d", &nombre_des_notes);
    float notes[nombre_des_notes];
    printf("svp donne saisir les  notes \n ");
    saisir_un_tableau(nombre_des_notes, notes);

    menu(notes, nombre_des_notes);
}
