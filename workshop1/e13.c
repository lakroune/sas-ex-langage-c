#include<stdio.h>

int main()
{
   int numbre, inver=0, temp ;
    printf(": ");
    printf("enter numbre ");
    scanf("%d",&numbre);

    while ( numbre > 0)
    {
    temp = numbre%10;
    inver = inver*10+temp;
    numbre/=10;
}

printf("%d  ",inver);

}



