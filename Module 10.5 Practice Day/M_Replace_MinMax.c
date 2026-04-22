#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int maxValue = ar[0];
    int minValue = ar[0];

    for(int i = 0; i < n; i++)
    {
        if(maxValue > ar[i])
        {
            maxValue = ar[i];
        }
        else if( minValue < ar[i])
        {
            minValue = ar[i];
        }
    }

    for(int i = 0; i<n;i++)
    {
        if(maxValue == ar[i])
        {
            ar[i] = minValue;
        }
        else if (minValue == ar[i])
        {
            ar[i] = maxValue;
        }

        printf("%d ", ar[i]);
    }

    return 0;
}