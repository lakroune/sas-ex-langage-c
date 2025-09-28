#include <stdio.h>
#include<string.h>

int main(){
    char number_to_string[10][6] = {
        "Zero", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine"
    };
    int numbre,index;



    printf("ener a numbre ");
    scanf("%d",&numbre);

    while (numbre)
    {
        index = numbre % 10;
        numbre /= 10;
        printf("%s  ",number_to_string[index]);
    }
    
    

}