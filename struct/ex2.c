#include <stdio.h>

typedef struct 
{
    int day;
    int month;
    int year;
}date;

typedef struct 
{
    date birthDay;
    int age;
    char nom[32];
}preson;


int main(){
    preson p;
    date d;

    scanf("%s",p.nom);
    scanf("%d",&p.age);
    scanf("%d",&d.day);
    scanf("%d",&d.month);
    scanf("%d",&d.year);
    p.birthDay=d;
    preson *pn= &p;

    printf("votre nom est %s , et votre age est %d ,birth at %d/%d/%d .", pn->nom,pn->age,pn->birthDay.day,pn->birthDay.month,pn->birthDay.year);

}