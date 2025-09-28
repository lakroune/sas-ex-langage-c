

// Contexte : Créez un programme qui convertit une chaîne en majuscules puis en minuscules.
// Exemple d'exécution :
// Chaîne originale : Hello World
// En majuscules : HELLO WORLD
// En minuscules : hello world


#include<stdio.h>
#include<string.h>

void to_majuscules (char phrase[]){
    for (int i = 0; phrase[i]; i++)
        if (phrase[i] >= 'a' && phrase[i] <='z')  
            phrase[i]= phrase[i]-('a'-'A');
}
void to_minuscules (char phrase[]){
    for (int i = 0; phrase[i]; i++)
        if (phrase[i] >= 'A' && phrase[i] <='Z')  
            phrase[i]= phrase[i]+('a'-'A');
}



int main(){
    char phrase[]="hellO World";
    printf(" votre phrase :%s\n",phrase);
    to_majuscules(phrase);
    printf("==>majuscules :%s\n",phrase);
    to_minuscules(phrase);
    printf("==>minuscule  :%s",phrase);

   
  
    
    


}