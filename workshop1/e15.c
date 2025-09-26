#include <stdio.h>

int main()
{
    int numbre, numbre1, mult = 0, temp;
    printf(": ");
    printf("enter numbre ");
    scanf("%d", &numbre);
    numbre1 = numbre;
    while (numbre > 0)
    {
        temp = numbre % 10;
        mult += temp *temp *temp ;
        numbre /= 10;
    }

    if (numbre1 == mult)
        printf("is Armstrong ");
    else
        printf("is not Armstrong ");
}
