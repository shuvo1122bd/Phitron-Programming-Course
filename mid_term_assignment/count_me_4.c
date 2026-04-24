#include<stdio.h>
#include<string.h>
int main()
{
    char s[10001];
    scanf("%s", &s);

    int count_letter[128] = {0};

    int letter_lengths = strlen(s);

    for(int i = 0; i < letter_lengths; i++)
    {
        int value =(int)s[i];
        count_letter[value]++;
    }

    for(int i = 97; i <= 122; i++)
    {
        if(count_letter[i] > 0)
        {
            printf("%c - %d\n",i, count_letter[i]);
        }
    }

    return 0;
}