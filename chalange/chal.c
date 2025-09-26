#include <stdio.h>
#include <string.h>
#include <ctype.h>

int nombre_des_mots(char chaine[])
{
    int cpt = 1;
    for (int i = 0; chaine[i]; i++)
        if (chaine[i] == ' ')
            cpt++;
    return cpt;
}

int long_mots(char chaine[])
{
    int max = 0, cpt = 0;
    for (int i = 0; i<strlen(chaine); i++)
    {
        if (chaine[i] == ' ' || chaine[strlen(chaine) - 1] == chaine[i])
        {

            if (chaine[strlen(chaine) - 1] == chaine[i])
                cpt++;

            if (max < cpt)
                max = cpt;
            cpt = 0;
        }
        else
            cpt++;
    }
    return max;
}
int git_index(char chaine[])
{
    int cpt = 0, max = long_mots(chaine);
    for (int i = 0; chaine[i]; i++)
    {
        if (chaine[i] != ' ' && cpt == max)
            return i;
        else if (cpt > max || chaine[i] == ' ')
            cpt = 0;
        cpt++;
    }
    return -1;
}
void get_mot(char chaine[])
{
    int index = git_index(chaine);
    int size = long_mots(chaine);
    printf("le mot plus grand est :");
    for (int i = index - size; i <= index; i++)
        printf("%c", chaine[i]);
    printf("\n");
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strlen(str)-1]='\0';
    printf("%d mots \n", nombre_des_mots(str));
    printf("%d est la langueur de mot le plus grand  \n", long_mots(str));
    // printf("%d est index de le mot le plus grand \n", git_index(str));
    get_mot(str);
    return 0;
}