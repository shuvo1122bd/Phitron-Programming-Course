#include<stdio.h>
#include<string.h>
int main()
{
    char a[11], b[11];
    scanf("%s %s", &a, &b);

    int length_a = strlen(a);
    int length_b = strlen(b);

     printf("%d %d\n", length_a, length_b);
     printf("%s%s\n", a,b);

    int ach = a[0];
    int bch = b[0];

    a[0] = bch;
    b[0] = ach;
    printf("%s %s", a,b);
    return 0;
}