

#include <stdio.h>
#include<string.h>

int main()
{
    char ch[100];
    printf("phrase : ");
    fgets(ch,100,stdin);

    printf("phrase: %s\n", ch);

    int i = 0, count = 0;

    int countw = 1, max = 0;

    while (ch[i] != '\0')
    {
        if (ch[i + 1] == ' ' || ch[i + 1] == '\0')
        {
            if (countw > max)
                max = countw;
            for (int j = i+1; j >= i-countw; j--)
                printf("%c", ch[j]);
                 printf(" ");

            countw = 0;
            count++;
        }
        else
            countw++;
        i++;
    }

    printf("nbr de mots: %d", count);
    printf("max lenth : %d", max);

    return 0;
}
