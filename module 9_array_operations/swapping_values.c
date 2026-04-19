#include<stdio.h>
int main()
{
    int a = 50;
    int b = 30;

    int xa = a;

    a = b;
    b = xa;
    printf("a = %d\nb = %d", a, b);

    return 0;
}