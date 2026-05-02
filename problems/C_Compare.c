#include<stdio.h>
#include<string.h>
int main()
{
    char x[21], y[21];
    scanf("%s %s", &x, &y);

    char lexico = strcmp(x, y);

if(lexico < 0)
{
    printf("%s", x);
}
else if (lexico > 0)
{
    printf("%s", y);
}
else if (lexico == 0)
{
    printf("%s", x);
}

    return 0;
}