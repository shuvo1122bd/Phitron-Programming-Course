#include <stdio.h>

int equation(int x, int n)
{

    int total = 0;
    for (int i = 1; i < x; i++)
    {
        int cube = 2;
        for (int i = 1; i <= cube; i++)
        {
            int equi = n * n;
            
            total = total + equi;
        }
        if (cube >= x)
        {
            break;
        }
        cube += 2;
    }

    return total;
}

int main()
{
    int x, n;
    scanf("%d %d", &x, &n);
    int mainTotal = equation(x, n);
    printf("%d", mainTotal);
    return 0;
}