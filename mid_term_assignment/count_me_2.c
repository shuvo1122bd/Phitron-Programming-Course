#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    scanf("%s", &s);

    int length_s = strlen(s);

    int count_consonants = 0;

    for (int i = 0; i < length_s; i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            count_consonants++;
        }
    }
    printf("%d", count_consonants);
    return 0;
}