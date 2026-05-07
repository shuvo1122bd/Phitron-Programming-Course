#include<stdio.h>

int pass(int*ptr)
{
    *ptr = 25;
}



int main()
{
    int x = 100;
    pass(&x);
    printf("%d", x);
    return 0;
}