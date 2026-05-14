#include <stdio.h>
#include <limits.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    int max_number = 0;
    

    if (k == 1)
    {
        for (int i = 0; i < k; i++)
        {
            if (a[i] > max_number)
            {
                max_number = a[i];
            }
        }
        printf("%d", max_number);
    }
    if (k > 1)
    {
        long long int sum = 0;
        for (int i = 0; i < k; i++)
        {
            if(a[i] > 0)
            {
                sum += a[i];
            }
        }
            printf("%lld", sum);
    }
    
    return 0;
}