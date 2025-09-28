#include <stdio.h>

int main()
{
    char name[5][10] = {"ismail", "hamza", "yousef", "ahmed", "adam"};
    printf("hello %s", name[2]);
    int i, sum = 0, nombres[] = {5, 7, 1};
    for (i = 0; i < 3; i++)
        sum += nombres[i];
    printf("%d", sum);
}