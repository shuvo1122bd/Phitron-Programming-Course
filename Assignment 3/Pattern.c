#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int space = n - 1;
    int hash = 1;

    for (int i = 1; i <= n; i++) // for lines
    {
        for (int j = 1; j <= space; j++) // for space
        {
            printf(" ");
        }
        for (int j = 1; j <= hash; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
        space--;
        hash += 2;
    }

    int space2 = 1;
    int hash2 = (n * 2) - 3;

    for (int i = 1; i < n; i++) // for lines
    {
        for (int j = 1; j <= space2; j++) // for space
        {
            printf(" ");
        }
        for (int j = 1; j <= hash2; j++)
        {

            if (n % 2 == 0)
            {
                if (i % 2 != 0)
                {
                    printf("#");
                }
                else
                {
                    printf("-");
                }
            }
            else
            {

                if (i % 2 != 0)
                {
                    printf("-");
                }
                else
                {
                    printf("#");
                }
            }
        }
        printf("\n");
        hash2 -= 2;
        space2++;
    }
    return 0;
}
