#include <stdio.h>

int main()
{
    int i, exist = 0, n, nombres[] = {5, 7, 1, 15, 8, 2, 10, 16, 18, 9};
    printf("enter a numbre ");
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
        if (n == nombres[i])
        {
            exist = 1;
            break;
        }
    if (exist)
        printf("il exist a index = %d ", i);
    else
        printf("il n'exist  pas");
}