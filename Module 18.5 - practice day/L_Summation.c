#include <stdio.h>

void sum(long long int a[], int i, int n,long long int summation)
{
    if (i == n)
    {
        printf("%lld", summation);
        return;
    }
    summation += a[i];
    sum(a, i + 1, n, summation);
}

int main()
{
    int n;
    scanf("%d", &n);

    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    int i = 0;
    int summation = 0;

    sum(a, i, n, summation);
    return 0;
}