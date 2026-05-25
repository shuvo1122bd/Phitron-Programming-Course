#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    
    char s[1000001];
    scanf("%s", s);

    long long int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += s[i] - '0';
    }

    if(sum % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}