#include <stdio.h>

int main()
{
    int numbre, numbre1, inver = 0, temp;
    printf(": ");
    printf("enter numbre ");
    scanf("%d", &numbre);
    numbre1 = numbre;
    while (numbre > 0)
    {
        temp = numbre % 10;
        inver = inver * 10 + temp;
        numbre /= 10;
    }

    if (numbre1 == inver)
        printf("is Palindrome ");
    else
        printf("is not Palindrome ");
}
