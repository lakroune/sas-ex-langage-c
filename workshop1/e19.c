// Input marks (0–100), print grade:
// ≥90: A, 
// 80–89: B, 
// 70–79: C, 
// 60–69: D, 
// else F.
// Input: 85
// Output: B


#include<stdio.h>

int main()
{
    int nembre;

   do
   {
    printf("saisir un nombre entre 0 et 100 ");
    scanf("%d",&nembre);
   } while (nembre <0 || nembre >100 );
   

    if (nembre>=90 )
        printf("A");
    else
        if (nembre>=80 )
             printf("B");
        else
            if (nembre>=70 )
                printf("C");
                else
                    if (nembre>=60 )
                        printf("D");
                    else
                        printf("F");
}
