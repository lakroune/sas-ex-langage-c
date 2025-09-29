#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct  {
	float width,length;
} rectangle;

float sourface(rectangle r) {
	return r.width*r.length;
}
float primitre(rectangle r) {
	return 2*(r.width+r.length);
}

int is_sqrt(rectangle r) {
	if(r.width==r.length)
		return 1;
	return 0;
}

void comp(rectangle r1,rectangle r2) {
	if(sourface(r1)>sourface(r2))
		printf("le 1er rectangle plus grand  ");
	else {if(sourface(r1)<sourface(r2))	
	    printf("le 2eme rectangle plus grand  "); 
	else	printf("les deux  rectangles sont meme sourface  "); 
	}
}
	
	rectangle cree_rectangle(){
	    rectangle r ;
	 printf("entre la width");
	scanf("%f",&r.width);
	printf("entre la length");
	scanf("%f",&r.length);
	}
int main() {

	rectangle r1= cree_rectangle() ;
	rectangle r2= cree_rectangle() ;


	printf("\n sourface : %.2f",sourface(r1));
	printf("\n perimetre : %.2f",primitre(r1));

	if(is_sqrt(r1))
		printf("\nle rectangle est un carre");
	else
		printf("\nle rectangle n'est un carre");
    
    comp(r1,r2);

	return 0;
}
