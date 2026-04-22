#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000001];
    scanf("%s", &s);
    int length = strlen(s);

    int sum = 0;
    for(int i = 0; i < length; i++){
        int subs = s[i] - 48;
        sum = sum + subs;
    }

    printf("%d", sum);
    return 0;
}