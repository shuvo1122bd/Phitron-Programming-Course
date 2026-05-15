#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int l = 5;

    for (int i = 1; i <= n; i = i + 2)
    {
        l++;
    }

    int space = l;
    int star = 1;

    for (int i = 0; i < l; i++)
    {
        for (int j = 1; j < space; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < star; k++)
        {
            printf("*");
        }
        printf("\n");

        space--;
        star += 2;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int k = 1; k <= 5; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
