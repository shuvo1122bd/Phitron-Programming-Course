#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, m; // n = row , m = column
    scanf("%d %d", &n, &m);

    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 0;


    if (n == m)
    {
            for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                if (a[i][j] != 1)
                {
                    flag++;
                }
            }
            else if (i + j == n - 1)
            {
                if (a[i][j] != 1)
                {
                    flag++;
                }
            }
            else
            {
                if (a[i][j] != 0)
                {
                    flag++;
                }
            }
        }
    }
    } else 
    {
        flag++;
    }
    
    if (flag == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}