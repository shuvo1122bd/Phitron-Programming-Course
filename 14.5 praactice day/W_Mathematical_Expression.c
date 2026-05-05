#include <stdio.h>
int main()
{
    int a, b, c ;
    char s, q;
    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

    int equa = 0;
    if (s == '+')
    {
        equa = a + b;
    }
    else if (s == '-')
    {
        equa = a - b;
    }
    else if (s == '*')
    {
        equa = a * b;
    }

    if(equa == c)
    {
        printf("Yes");
    } else{
        printf("%d", equa);
    }

    return 0;
}