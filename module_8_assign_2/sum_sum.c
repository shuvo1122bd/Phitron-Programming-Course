#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    int pSum = 0;
    int negSum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > 0)
        {
            pSum = ar[i] + pSum;
        }
        else
        {
            negSum = ar[i] + negSum;
        }
    }
    printf("%d %d", pSum, negSum);

    return 0;
}