#include<stdio.h>
#include<string.h>
int main()
{
    char s_one[10001];
    scanf("%s", s_one);
    char s_two[10001];
    scanf("%s", s_two);

    int length_two = strlen(s_two);

    int st, en;
    scanf("%d %d", &st, &en);

    char new[10001];

    int idx = 0;

    for(int i = 0; i < length_two; i++)
    {
        
        if (i >= st && i <= en)
        {
            new[idx] = s_two[i];
            idx++;
        }
    }

    printf("%s%s", s_one, new);


    return 0;
}