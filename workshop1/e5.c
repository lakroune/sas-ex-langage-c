#include <stdio.h>

int main() {
    int nombre_1, nombre_2;
    
    // Input two numbers
    printf("Entre deux nombres: ");
    scanf("%d", &nombre_1);
    scanf("%d", &nombre_2);
    
    if (nombre_1> nombre_2) {
        printf("%d\n", nombre_1);
    } else {
        printf(" LE NMBRE ET PLUS GRAND EST %d\n", nombre_2);
    }
    
    return 0;
}

