#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int x = a;
    int y = b;
    int z = c;

    if (a < b && a < c)
    {
        a = a;
    }
    else if (b < a && b < c)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    else if (c < b && c < a)
    {
        int temp = a;
        a = c;
        c = temp;
    }

    if (b > c)
    {
        int temp = b;
        b = c;
        c = temp;
    }

    if (a > b && a > c)
    {
        int temp = c;
        c = a;
        a = temp;
    }

    printf("%d\n%d\n%d\n", a, b, c);
    printf("\n");
    printf("%d\n%d\n%d\n", x, y, z);

    return 0;
}