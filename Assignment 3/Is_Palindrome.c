#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
    int length = strlen(s);

    int i = 0;
    int j = length - 1;
    int flag = 0;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            flag = 1;
            break;
        }
        i++;
        j--;
    }

    if (flag == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char s[1005];
    scanf("%s", &s);

    int pali = is_palindrome(s);

    if (pali == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}