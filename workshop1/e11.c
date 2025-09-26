#include <stdio.h>
#include<math.h>

int main()
{

    int nombre, nb_divis, i;
    printf("Entrer nombre1: ");
    scanf("%d", &nombre);
    nb_divis = 0;
    for (i = 1; i <= nombre ; i++)
    {
        if (nombre % i == 0){
            nb_divis++;
            if (nb_divis>2){
                printf(" n est pqs nombre premier");
                break;
            }
        }

    }

    if (nb_divis == 2)
        printf(" est pas nombre premier");
       
}
