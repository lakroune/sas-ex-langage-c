// Online C compiler to run C program online
#include <stdio.h>

int repet(int tab[], int element){
    int cpt=0;
     for (int i = 0 ; i< 8;i++)
        if(element ==tab[i])
            cpt++;
return cpt;
}
int if_exist(int index_element,int tab[]){
    int i;
    for ( i =index_element  ; i<0;i--)
        if(tab[index_element] ==tab[i])
            return 1;
    return 0;
    
}


int main() {
    
    int tab[]={3,2,1,3,3,4,1,1};
    
    
    int n,cpt=0;
    printf(" entre un valeur   ");
    scanf("%d", &n);
        

    //  printf("%d  ",repe(tab,n));
     
      for (int i = 0 ; i< 8;i++)
         if(if_exist(i,tab))
            printf("%d  :%d  \n",tab[i],repet(tab,tab[i]));

     

    return 0;
}