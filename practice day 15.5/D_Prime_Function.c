#include<stdio.h>
#include<math.h>

int prime(int n)
{
    int cnt = 0;
    int root = sqrt(n);
    for (int j = 2; j <= root; j++)
    {
        if (n % j == 0)
        {
            cnt = 1;
        }
    }
    return cnt;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 1)
        {
            printf("NO\n");
        }
        else
        {
            if (prime(n) == 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}