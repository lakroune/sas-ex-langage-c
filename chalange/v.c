#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_NOTES 100

// Codes ANSI pour couleurs
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

// Declaration des fonctions
void afficherNotes(float notes[], int n);
float calculerMoyenne(float notes[], int n);
float trouverMax(float notes[], int n);
float trouverMin(float notes[], int n);
void afficherMenu();
float saisirNote(int num);

int main() {
    float notes[MAX_NOTES];
    int n, choix;

    system("cls");
    printf(CYAN "-------------------------------\n");
    printf("|     Gestionnaire de Notes      |\n");
    printf("-------------------------------\n" RESET);

    // Saisie du nombre de notes
    do {
        printf(BLUE "Entrez le nombre de notes a saisir (1-%d) : " RESET, MAX_NOTES);
        if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_NOTES) {
            printf(RED "Nombre invalide ! Veuillez reessayer.\n" RESET);
            while(getchar() != '\n'); // vider le buffer
        } else {
            break;
        }
    } while(1);

    // Saisie des notes avec validation
    for (int i = 0; i < n; i++) {
        notes[i] = saisirNote(i + 1);
    }

    // Menu interactif
    do {
        system("cls"); // nettoyer la console
        afficherMenu();

        printf(MAGENTA "Choix : " RESET);
        if (scanf("%d", &choix) != 1) {
            printf(RED "Entree invalide !\n" RESET);
            while(getchar() != '\n');
            choix = 0; // force boucle a continuer
        }

        switch (choix) {
            case 1:
                afficherNotes(notes, n);
                break;
            case 2:
                printf(YELLOW "Moyenne : %.2f\n" RESET, calculerMoyenne(notes, n));
                break;
            case 3:
                printf(GREEN "Note maximale : %.2f\n" RESET, trouverMax(notes, n));
                break;
            case 4:
                printf(CYAN "Note minimale : %.2f\n" RESET, trouverMin(notes, n));
                break;
            case 5:
                printf(RED "Merci d avoir utilise le gestionnaire de notes. Au revoir!\n" RESET);
                break;
            default:
                if (choix != 5)
                    printf(RED "Choix invalide, veuillez reessayer.\n" RESET);
        }

        if (choix != 5) {
            printf("\nAppuyez sur Entree pour continuer...");
            getchar();
            getchar();
        }

    } while (choix != 5);

    return 0;
}

// Fonction pour saisir une note valide entre 0 et 20
float saisirNote(int num) {
    float n;
    while(1) {
        printf(BLUE "Note %d (0-20) : " RESET, num);
        if (scanf("%f", &n) != 1) {
            printf(RED "Entree invalide ! Veuillez entrer un nombre.\n" RESET);
            while(getchar() != '\n'); // vider le buffer
        } else if (n < 0 || n > 20) {
            printf(RED "La note doit être entre 0 et 20 !\n" RESET);
        } else {
            return n;
        }
    }
}

// Fonction pour afficher le menu avec design
void afficherMenu() {
    printf(CYAN "-------------------------------\n");
    printf("|           MENU PRINCIPAL       |\n");
    printf("-------------------------------\n");
    printf(BLUE "| 1. Afficher toutes les notes   |\n" RESET);
    printf(YELLOW "| 2. Calculer la moyenne         |\n" RESET);
    printf(GREEN "| 3. Afficher la note maximale   |\n" RESET);
    printf(CYAN "| 4. Afficher la note minimale   |\n" RESET);
    printf(RED "| 5. Quitter                     |\n" RESET);
    printf(CYAN "-------------------------------\n" RESET);
}

// Fonction pour afficher toutes les notes
void afficherNotes(float notes[], int n) {
    printf(BLUE "\n-------------------------------\n" RESET);
    printf("|        Toutes les notes        |\n");
    printf(BLUE "-------------------------------\n" RESET);
    for (int i = 0; i < n; i++) {
        if (notes[i] < 10)
            printf(RED "| Note %2d : %.2f                     |\n" RESET, i + 1, notes[i]);
        else if (notes[i] <= 15)
            printf(YELLOW "| Note %2d : %.2f                     |\n" RESET, i + 1, notes[i]);
        else
            printf(GREEN "| Note %2d : %.2f                     |\n" RESET, i + 1, notes[i]);
    }
    printf(BLUE "-------------------------------\n" RESET);
}

// Fonctions calcul
float calculerMoyenne(float notes[], int n) {
    float somme = 0;
    for (int i = 0; i < n; i++)
        somme += notes[i];
    return somme / n;
}

float trouverMax(float notes[], int n) {
    float max = notes[0];
    for (int i = 1; i < n; i++)
        if (notes[i] > max)
            max = notes[i];
    return max;
}

float trouverMin(float notes[], int n) {
    float min = notes[0];
    for (int i = 1; i < n; i++)
        if (notes[i] < min)
            min = notes[i];
    return min;
}
