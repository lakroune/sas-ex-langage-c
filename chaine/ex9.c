#include<stdio.h>
#include<string.h>

int get_position(char phrase[],char mot[]){
  int j=0, cpt=0;
    for (int i = 0; phrase[i]; i++)
        if (phrase[i]== mot[j])  {
            j++;
            if(cpt++ == strlen(mot) -1)
                return i -strlen(mot)+1;
           }
        else {
            cpt=0; j=0;
        }
return -1;
}



int main(){
    char phrase[]="hello world";
    char mot[]="world";
    printf("%d",get_position(phrase,mot));
   
  
    
    


}