#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int i = 0;

typedef struct
{
    int Id_tache;
    char Titre[100];
    char Description[256];
    char Deadline[20];
    char Statut[20];
    time_t cree_le;
} tache;

// Fonction pour effacer l'ecran

void clear()
{
    system("cls");
}

void pause() { system("pause"); }

int get_languer_fichier_pour_id()
{
    FILE *fichier = fopen("taches.bin", "rb");
    if (fichier == NULL)
        return 0;
    fseek(fichier, 0, SEEK_END);
    return ftell(fichier) / sizeof(tache);
}

// Fonction pour creer une nouvelle tache
tache cree_nouveau_tache()
{
    time_t now;
    time(&now);
    tache nouveau_tache;
    nouveau_tache.Id_tache = get_languer_fichier_pour_id();
    nouveau_tache.cree_le = now;

    printf("Titre : ");
    fgets(nouveau_tache.Titre, sizeof(nouveau_tache.Titre), stdin);
    nouveau_tache.Titre[strcspn(nouveau_tache.Titre, "\n")] = '\0';

    printf("Description : ");
    fgets(nouveau_tache.Description, sizeof(nouveau_tache.Description), stdin);
    nouveau_tache.Description[strcspn(nouveau_tache.Description, "\n")] = '\0';

    printf("Deadline (YYYY-MM-DD) : ");
    fgets(nouveau_tache.Deadline, sizeof(nouveau_tache.Deadline), stdin);
    nouveau_tache.Deadline[strcspn(nouveau_tache.Deadline, "\n")] = '\0';

    printf("Statut : ");
    fgets(nouveau_tache.Statut, sizeof(nouveau_tache.Statut), stdin);
    nouveau_tache.Statut[strcspn(nouveau_tache.Statut, "\n")] = '\0';
    return nouveau_tache;
}

// Fonction pour ajouter une tache au fichier binaire
void ajouter_nouveau_tache_bin()
{
    FILE *fichier = fopen("taches.bin", "ab"); // "ab" = append binaire
    if (fichier == NULL)
    {
        printf("Erreur ouverture fichier binaire!\n");
        return;
    }

    getchar(); // supprimer le \n laisse par scanf dans le menu
    tache tach = cree_nouveau_tache();

    // ecrire la structure directement dans le fichier binaire
    fwrite(&tach, sizeof(tache), 1, fichier);

    fclose(fichier);
    clear();
    printf("tache ajoutee avec succes !\n");
}

void ajouter_plusieur_nouveau_tache()
{
    char quitter;
    do
    {
        ajouter_nouveau_tache_bin();
        printf("Voulez-vous quitter (y/n)? : ");
        scanf(" %c", &quitter); // espace pour ignorer les \n restants
    } while (quitter != 'y' && quitter != 'Y');
}

// Fonction qui lit le fichier et remplit le tableau taches[]
tache *lire_taches_bin(int *nb)
{
    FILE *fichier = fopen("taches.bin", "rb");
    if (fichier == NULL)
    {
        printf("Erreur : impossible d'ouvrir le fichier binaire.\n");
        return NULL;
    }

    // Determiner le nombre de taches dans le fichier
    fseek(fichier, 0, SEEK_END);
    long taille_fichier = ftell(fichier);
    rewind(fichier);

    int count = taille_fichier / sizeof(tache);

    tache *taches = malloc(count * sizeof(tache));
    if (!taches)
    {
        printf("Erreur allocation memoire.\n");
        fclose(fichier);
        return NULL;
    }

    // Lire toutes les taches
    fread(taches, sizeof(tache), count, fichier);
    fclose(fichier);
    *nb = count;
    return taches;
}

// Comparateur pour qsort : tri par titre alphabétique
void trier_taches_par_titre(tache *taches, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(taches[j].Titre, taches[j + 1].Titre) > 0)
            {
                // Échanger les deux tâches
                tache temp = taches[j];
                taches[j] = taches[j + 1];
                taches[j + 1] = temp;
            }
        }
    }
}

void afficher_taches_triees_par_titre()
{
    int nb_taches;
    tache *t = lire_taches_bin(&nb_taches); // lire le fichier binaire

    if (!t || nb_taches == 0)
    {
        printf("Aucune tâche à afficher.\n");
        return;
    }

    // Trier les tâches avec tri à bulles
    trier_taches_par_titre(t, nb_taches);

    // Affichage
    printf("Liste des tâches triées par titre (méthode simple) :\n");
    printf("ID\tTitre\tDescription\tDeadline\tStatut\n");
    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < nb_taches; i++)
    {
        printf("%d\t%s\t%s\t%s\t%s\n",
               t[i].Id_tache,
               t[i].Titre,
               t[i].Description,
               t[i].Deadline,
               t[i].Statut);
    }

    free(t); // libérer la mémoire
    printf("\n");
    pause();
    clear();
}

void trier_taches_par_deadline(tache *taches, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(taches[j].Deadline, taches[j + 1].Deadline) > 0)
            {
                // Échanger les deux tâches
                tache temp = taches[j];
                taches[j] = taches[j + 1];
                taches[j + 1] = temp;
            }
        }
    }
}

void afficher_taches_triees_par_deadline()
{
    int nb_taches;
    tache *t = lire_taches_bin(&nb_taches); // lire le fichier binaire

    if (!t || nb_taches == 0)
    {
        printf("Aucune tâche à afficher.\n");
        return;
    }

    // Trier par deadline
    trier_taches_par_deadline(t, nb_taches);

    // Affichage
    printf("Liste des tâches triées par deadline :\n");
    printf("ID\tTitre\tDescription\tDeadline\tStatut\n");
    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < nb_taches; i++)
    {
        printf("%d\t%s\t%s\t%s\t%s\n",
               t[i].Id_tache,
               t[i].Titre,
               t[i].Description,
               t[i].Deadline,
               t[i].Statut);
    }

    free(t); // libérer la mémoire
    printf("\n");
    system("pause");
}

void list_affichage()
{

    int choix_afficheage;

    do
    {
        printf("------- liste affichages ----------\n");
        printf("1. Affiche les taches trie par titre\n");
        printf("2. Affiche les taches trie par deadline\n");
        printf("0. aller au menu principale\n");
        printf("\nVotre choix: ");
        scanf("%d", &choix_afficheage);
        getchar();

        switch (choix_afficheage)
        {
        case 1:
            clear();
            afficher_taches_triees_par_titre();
            break;
        case 2:
            clear();
            afficher_taches_triees_par_deadline();
            break;
        case 0:
            clear();
            break;
        default:
            clear();
            printf("Option pas encore implementee.\n");
            break;
        }

        clear();
    } while (choix_afficheage != 0);
}

void afficher_toutes_les_taches()
{
    int nb_taches;
    tache *t = lire_taches_bin(&nb_taches); // lire le fichier binaire dans un tableau dynamique

    if (!t || nb_taches == 0)
    {
        printf("Aucune tache a afficher.\n");
        return;
    }

    printf("Liste des taches :\n");
    printf("ID\tTitre\tDescription\tDeadline\tStatut\n");
    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < nb_taches; i++)
    {
        printf("%d\t%s\t%s\t%s\t%s\n",
               t[i].Id_tache,
               t[i].Titre,
               t[i].Description,
               t[i].Deadline,
               t[i].Statut);
    }

    free(t); // liberer la memoire
    printf("\n");
    list_affichage();
    pause();
    clear();
}

void ToDo_list()
{
    int choix;

    do
    {
        printf("------- ToDo list ----------\n");
        printf("1. Ajouter une nouvelle tache\n");
        printf("2. Ajouter plusieurs nouvelles taches\n");
        printf("3. Afficher la liste des taches\n");
        printf("4. Modifier une tache\n");
        printf("5. Supprimer une tache\n");
        printf("6. Rechercher une tache\n");
        printf("7. Statistiques\n");
        printf("0. Quitter\n");
        printf("\nVotre choix: ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            clear();
            ajouter_nouveau_tache_bin();
            break;
        case 2:
            clear();
            ajouter_plusieur_nouveau_tache();
            break;
        case 3:
            clear();
            afficher_toutes_les_taches();
            break;
        case 0:
            clear();
            printf("Au revoir!\n");
            break;
        default:
            clear();
            printf("Option pas encore .\n");
            break;
        }
    } while (choix != 0);
    clear();
}

int main()
{
    ToDo_list();
    return 0;
}
