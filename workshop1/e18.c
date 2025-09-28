// Input three integers, print the largest.
// Input: 8 15 12
// Output: 15


#include<stdio.h>

int main()
{
    int n1,n2,n3,max;

    printf("saisir les 3nombres ");

    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);


    if (n1 > n2)
        max = n1;
    else
        max =n2;

    if (max < n3)
        max = n3;

    printf("\n max(%d,%d,%d)=%d",n1,n2,n3,max);
          
    
}
