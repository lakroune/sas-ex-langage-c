#include <stdio.h>
int main()
{
    int year;
    printf(" enter a year");
    scanf("%d", &year);
    if (year % 4 == 0)
        printf("  Leap Year");
    else
        printf(" not  Leap Year");

}
