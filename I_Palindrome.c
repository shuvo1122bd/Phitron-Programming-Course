#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",&s);

    int length = strlen(s);

    int i = 0;
    int j = length - 1;
    int flag = 0;
    while (i < j)
    {
        if(s[i] != s[j])
        {
            flag = 1;
            break;
        }
        i++;
        j--;
    }

    if(flag != 0)
    {
        printf("NO");
    } else {
        printf("YES");
    }
    return 0;
}