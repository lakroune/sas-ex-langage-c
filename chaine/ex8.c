#include <stdio.h>

int compareson(char chaine1[], char chaine2[])
{
    int i;
    for (i = 0; chaine1[i] != '\0' || chaine1[i] != '\0'; i++)
    {
        if (chaine1[i] > chaine2[i])
            return 1;
        else if (chaine1[i] < chaine2[i])
            return -1;
    }
    if (chaine1[i] != '\0')
        return 1;
    else if (chaine2[i] != '\0')
        return -1;
    return 0;
}

void afficher_la_chaine(char chaine[])
{
    printf("\n%s  \n", chaine);
}

int main()
{
    char chaine1[] = "banana";
    char chaine2[] = "apple";
 
    printf("%d",compareson(chaine1,chaine2))   ;
 
    

   
}
