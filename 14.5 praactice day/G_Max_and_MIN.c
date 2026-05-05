#include <stdio.h>
#include <limits.h>

void min_max(int a[], int n)
{
    int min_number = __INT_MAX__;
    int max_number = INT_MIN;

    for (int i = 0; i < n; i++) // comparing with max number to get minimum number
    {
        if (a[i] < min_number)
        {
            min_number = a[i];
        }
    }
    for (int i = 0; i < n; i++) // comparing with min number to get max number
    {
        if (a[i] > max_number)
        {
            max_number = a[i];
        }
    }

    printf("%d %d", min_number, max_number);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    min_max(a, n); // calling function

    return 0;
}