#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }

    long long int x;
    scanf("%lld", &x);

    int u = 0;
    int value = 0;

    for (int i = 0; i < n; i++)
    {

        if (ar[i] == x)
        {
            u = i;
            value = ar[i];
            break;
        }
    }

    if (value == x)
    {
        printf("%d", u);
    }
    else
    {
        printf("-1");
    }

    return 0;
}