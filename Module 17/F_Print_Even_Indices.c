#include <stdio.h>

void even_indices(int ar[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    even_indices(ar, n, i + 1);
    if (i % 2 == 0)
    {
        printf("%d ", ar[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int i = 0;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    even_indices(ar, n, i);

    return 0;
}