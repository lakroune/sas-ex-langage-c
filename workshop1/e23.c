// Number Pattern (Triangle)


// Input N, print a number triangle.
// Input: 4
// Output:
// 1
// 1 2
// 1 2 3
// 1 2 3 4


#include <stdio.h>

int main() {
    int i, j;
    int n ;
    printf("enter  n ");
    scanf("%d",&n);
    
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}
