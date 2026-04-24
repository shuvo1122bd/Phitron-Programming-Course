#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", & n);

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int divided_by_2 = 0;
    int divided_by_3 = 0;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] % 2 == 0 && ar[i] % 3 == 0)
        {
            divided_by_2++;
        }

        else if (ar[i] % 2 == 0)
        {
            divided_by_2++;
        }

        else if (ar[i] % 3 == 0)
        {
            divided_by_3++;
        }
    }

    printf("%d %d", divided_by_2, divided_by_3);
    return 0;
}