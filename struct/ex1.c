#include <stdio.h>
#include <string.h>

struct person
{
    char nom[10];
    int age;
};
typedef struct person person;

// int main(){

//     person p;
//     p.age= 32;
//     strcpy(p.nom ,"ismail");
//     printf("%d", p.age);
//     printf("%s", p.nom);

// }
typedef struct
{
    char marck[20];
    char color[20];
    float prace;
} car;

typedef struct
{
    car cars[12];
    char city[20];
    int totalcars;
} Auddi;

int main()
{

    car c;
    Auddi a;
    char marck[][20] = {"auddi A12", "auddi lusin", "auddi 23", "auddi logan", "auddi newmotors"};
    char color[][20] = {"red", "black", "blue", "black", "green", "yellow"};
    char city[][20] = {"safi", "casablanca", "tanger", "fes", "rabat", "el jadida"};
    float prace[] = {324000, 293000, 215000, 260000, 510000, 340999};

    strcpy(a.city, city[0]);
    for (int i = 0; i<9; i++)
    {
        c.prace = prace[i];
        strcpy(c.marck, marck[i]);
        strcpy(c.color, color[i]);
        a.cars[i] = c;
        a.totalcars = i;
    }
    printf("**** in %s city ,exist %d car ****\n", a.city, a.totalcars);
    printf("name of car \tcolor \tprace\n");
    for (int i = 0; i < a.totalcars; i++)
        printf("%s \t%s \t%.2f\n", a.cars[i].marck, a.cars[i].color, a.cars[i].prace);
}